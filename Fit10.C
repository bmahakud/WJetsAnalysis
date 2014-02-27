#ifndef __CINT__
#include "RooGlobalFunc.h"
#endif
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooGaussian.h"
#include "TCanvas.h"
#include "RooPlot.h"
#include "TTree.h"
#include "TH1D.h"
#include "TRandom.h"

using namespace RooFit ;
Fit10()
{




TCanvas* c = new TCanvas("c","test",570,400);
  TFile *f0 = new TFile("./Wmasshisto_R5.root");
  // Declare observable mW
  RooRealVar mW("mW","M (GeV/c^{2})",60,160) ;
  RooDataHist ds("ds","ds",mW,Import(*hist10)) ;
  // Print number of events in dataset
  ds.Print();
  // Print binned dataset with default frame 
  RooPlot* frame = mW.frame(Title("Wmass")) ;
  
  ds.plotOn(frame) ;
  
  RooRealVar mean("mean","mean",80.0,60,100);
  RooRealVar sigma("sigma","sigma",10,5,30.0);
  RooGaussian gW("gW","gW",mW,mean,sigma);

  RooRealVar sigma1("sigma1","sigma1",20.5,20.0,30.0);
  RooRealVar sigma2("sigma2","sigma2",65.5,65.0,75.0);
  RooBifurGauss bgW("bgW","bgW",mW,mean,sigma1,sigma2);

  RooRealVar frac0("frac0","frac0",0.25,0.1,0.6);
  RooAddPdf pdfg("pdfg","double gaussian Pdf", RooArgList(bgW,gW),RooArgList(frac0));
  RooRealVar slope("slope","slope",1.0,0.9,1.3);
  RooChebychev cheb("cheb","cheb",mW,slope);
  RooRealVar frac("frac","frac",0.95,0.75,1.0);
  
  //  RooAddPdf pdf("pdf","total Pdf", RooArgList(gW,cheb),RooArgList(frac));
  RooAddPdf pdf("pdf","total Pdf", RooArgList(pdfg,cheb),RooArgList(frac));

  /*  
  gW.fitTo(ds);
  gW.plotOn(frame);
  gW.paramOn(frame);
  */

  /*
  bgW.fitTo(ds);
  bgW.plotOn(frame);
  bgW.paramOn(frame);
  pdf.plotOn(frame,Components(RooArgList(bgW)), LineColor(kRed),LineStyle(2), LineWidth(4));
  frame->Draw();
  */
  
      
  pdf.fitTo(ds);
  pdf.plotOn(frame);
  pdf.paramOn(frame);
  std::cout<<"AMAR CHI^2 ="<<frame->chiSquare()<<std::endl;  

  // pull 
  RooPlot* z1frame = mW.frame(Title("Wmass in 270 < Pt <350"));
  RooHist* hpull1 = frame->pullHist();
  z1frame->addPlotable(hpull1,"P");

  RooPlot* z2frame = mW.frame(Title("Wmass in 270 < Pt <350"));
  RooHist* hresid = frame->residHist();
  z2frame->addPlotable(hresid,"P") ;

  TCanvas* c2 = new TCanvas("pull1","pull1",900,300) ;
  c2->Divide(2,1) ; // column, row
  double xmin = 80.0; double xmax = 360.0;
  TLine *line = new TLine(xmin,0.0,xmax,0.0);
 
  c2->cd(2); line->SetLineColor(kRed); line->SetLineWidth(2); gPad->SetLeftMargin(0.15); z1frame->GetYaxis()->SetTitleOffset(1.6); z1frame->GetYaxis()->SetRangeUser(-5.0, 5.0); z1frame->Draw(); line->Draw("SAME");
  //  c2->cd(1); gPad->SetLeftMargin(0.15); z2frame->GetYaxis()->SetTitleOffset(1.6); z2frame->Draw(); line->Draw("SAME");
  c2->cd(1); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.6); frame->Draw();
  
 pdf.plotOn(frame,Components(RooArgList(gW)), LineColor(kRed),LineStyle(2), LineWidth(4));
 pdf.plotOn(frame,Components(RooArgList(cheb)), LineColor(kBlue),LineStyle(2), LineWidth(4));
 pdf.plotOn(frame,Components(RooArgList(bgW)), LineColor(kGreen),LineStyle(2), LineWidth(4));
  
  

 frame->Draw();
  // Double_t signalchi = frame->chiSquare(); 
 
 // c2->SaveAs("Wmass270to350.root");














}
