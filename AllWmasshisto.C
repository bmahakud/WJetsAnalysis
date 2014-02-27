void AllWmasshisto(){


TCanvas *c1=new TCanvas("mycanvas1","My Canvas1",600,300);
c1->SetGrid();
  gStyle->SetOptFit(111);
  //c1->Divide(2,2);
TMultiGraph *mg = new TMultiGraph();
mg->SetTitle("Hadronic Wmass in different Pt bins ; Ptjj ; Wmass");


  double x1[9], y1[9], x1err[9],x2[9], y2[9], x2err[9],x3[9], y3[9], x3err[9],x4[9], y4[9], x4err[9],x5[9], y5[9], x5err[9];

///////////////////////////////////////////////////////////////data points
  x1[0]=45;
  x1[1]=75;
  x1[2]=105;
  x1[3]=135;
  x1[4]=165;
  x1[5]=195;
  x1[6]=225;
  x1[7]=255;
  x1[8]=310;

  y1[0]=72.9;
  y1[1]=71.01;
  y1[2]=75.1;
  y1[3]=76.08;
  y1[4]=76.44;
  y1[5]=80.1;
  y1[6]=78.9;
  y1[7]=83.1;
  y1[8]=80.9;
  
  x1err[0]=15;
  x1err[1]=15;
  x1err[2]=15;
  x1err[3]=15;
  x1err[4]=15;
  x1err[5]=15;
  x1err[6]=15;
  x1err[7]=15;
  x1err[8]=40;
  //======================
  x2[0]=45;
  x2[1]=75;
  x2[2]=105;
  x2[3]=135;
  x2[4]=165;
  x2[5]=195;
  x2[6]=225;
  x2[7]=255;
  x2[8]=310;

  y2[0]=73.4;
  y2[1]=73.7;
  y2[2]=76.0;
  y2[3]=77.76;
  y2[4]=78.89;
  y2[5]=81.23;
  y2[6]=80.8;
  y2[7]=84.5;
  y2[8]=82.9;
  
  x2err[0]=15;
  x2err[1]=15;
  x2err[2]=15;
  x2err[3]=15;
  x2err[4]=15;
  x2err[5]=15;
  x2err[6]=15;
  x2err[7]=15;
  x2err[8]=40;
//=========================================

  x3[0]=45;
  x3[1]=75;
  x3[2]=105;
  x3[3]=135;
  x3[4]=165;
  x3[5]=195;
  x3[6]=225;
  x3[7]=255;
  x3[8]=310;

  y3[0]=75.08;
  y3[1]=76.6;
  y3[2]=78.37;
  y3[3]=79.67;
  y3[4]=79.6;
  y3[5]=83.47;
  y3[6]=82.5;
  y3[7]=86;
  y3[8]=85.8;
  
  x3err[0]=15;
  x3err[1]=15;
  x3err[2]=15;
  x3err[3]=15;
  x3err[4]=15;
  x3err[5]=15;
  x3err[6]=15;
  x3err[7]=15;
  x3err[8]=40;


//=========================================================
  x4[0]=45;
  x4[1]=75;
  x4[2]=105;
  x4[3]=135;
  x4[4]=165;
  x4[5]=195;
  x4[6]=225;
  x4[7]=255;
  x4[8]=310;

  y4[0]=75.17;
  y4[1]=78.4;
  y4[2]=78.2;
  y4[3]=81.94;
  y4[4]=80.78;
  y4[5]=84.46;
  y4[6]=87.6;
  y4[7]=87.1;
  y4[8]=90.8;
  
  x4err[0]=15;
  x4err[1]=15;
  x4err[2]=15;
  x4err[3]=15;
  x4err[4]=15;
  x4err[5]=15;
  x4err[6]=15;
  x4err[7]=15;
  x4err[8]=40;



//==========================================================

  x5[0]=45;
  x5[1]=75;
  x5[2]=105;
  x5[3]=135;
  x5[4]=165;
  x5[5]=195;
  x5[6]=225;
  x5[7]=255;
  x5[8]=310;

  y5[0]=75.12;
  y5[1]=80.1;
  y5[2]=79.67;
  y5[3]=83.09;
  y5[4]=83.3;
  y5[5]=86.72;
  y5[6]=87.59;
  y5[7]=90.5;
  y5[8]=97.0;
  
  x5err[0]=15;
  x5err[1]=15;
  x5err[2]=15;
  x5err[3]=15;
  x5err[4]=15;
  x5err[5]=15;
  x5err[6]=15;
  x5err[7]=15;
  x5err[8]=40;


//////////////////////////////////////////////////////////////////////////////////////// 
TGraphErrors *graph1  = new TGraphErrors(9,x1,y1,x1err,0);
    
  graph1->SetMarkerColor(kBlue);
  graph1->SetMarkerSize(1.0);
  graph1->SetMarkerStyle(20);
  graph1->SetLineColor(kBlue);
  graph1->GetYaxis()->SetRangeUser(0.0,0.42);
  //gra1ph->Draw("AP");

//////////////////////////////////////////////////////

TGraphErrors *graph2  = new TGraphErrors(9,x2,y2,x2err,0);


  graph2->SetMarkerColor(kRed);
  graph2->SetLineColor(kRed);
  graph2->SetMarkerSize(1.0);
  graph2->SetMarkerStyle(20);
  graph2->GetYaxis()->SetRangeUser(0.14,0.42);
  //graph1->Draw("AP SAME");

//////////////////////////////////////////////

TGraphErrors *graph3  = new TGraphErrors(9,x3,y3,x3err,0);


  graph3->SetMarkerColor(kGreen);
  graph3->SetMarkerSize(1.0);
  graph3->SetMarkerStyle(20);
  graph3->GetYaxis()->SetRangeUser(0.14,0.42);
  graph3->SetLineColor(kGreen);

///////////////////////////////////////////////
TGraphErrors *graph4  = new TGraphErrors(9,x4,y4,x4err,0);


  graph4->SetMarkerColor(kViolet);
  graph4->SetMarkerSize(1.0);
  graph4->SetMarkerStyle(20);
  graph4->GetYaxis()->SetRangeUser(0.14,0.42);
  graph4->SetLineColor(kViolet);


//////////////////////////////////////////

TGraphErrors *graph5  = new TGraphErrors(9,x5,y5,x5err,0);


  graph5->SetMarkerColor(kCyan);
  graph5->SetMarkerSize(1.0);
  graph5->SetMarkerStyle(20);
  graph5->GetYaxis()->SetRangeUser(0.14,0.42);
  graph5->SetLineColor(kCyan);


mg->Add(graph1,"lp");//lp
mg->Add(graph2,"lp");//cp
mg->Add(graph3,"lp");//cp
mg->Add(graph4,"lp");//cp
mg->Add(graph5,"lp");//cp


 mg->Draw("AP");


leg =new TLegend(0.6,0.7,0.89,0.89);

leg->AddEntry(graph1,"R = 0.3","l");
leg->AddEntry(graph2,"R = 0.35","l");
leg->AddEntry(graph3,"R = 0.4","l");
leg->AddEntry(graph4,"R = 0.45","l");
leg->AddEntry(graph5,"R = 0.5","l");










leg->Draw();


}
