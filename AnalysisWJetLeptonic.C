#define AnalysisWJetLeptonic_cxx
#include "AnalysisWJetLeptonic.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void AnalysisWJetLeptonic::Loop()
{

TCanvas *c1=new TCanvas("mycanvas1","My Canvas1");
c1->Divide(2,2);

TCanvas *c2=new TCanvas("mycanvas2","My Canvas2");
c2->Divide(2,2);

TCanvas *c3=new TCanvas("mycanvas3","My Canvas3");
c3->Divide(2,2);
/////////////////////////////////////////////////////////////////////////////////////canvas1 
TH1F *h_nPV = new TH1F("event_nPV","Event Primary Vertices ",100,0,100);
h_nPV->SetLineColor(2);
h_nPV->SetLineWidth(2);

TH1F *Wmass =new TH1F("WmassLep","Leptonic Wmass",200,0,500);
Wmass->SetLineColor(2);
Wmass->SetLineWidth(2);

TH1F *h_metpf = new TH1F("metpf","PF met in the event",100,0,500);
h_metpf->SetLineColor(2);
h_metpf->SetLineWidth(2);

TH1F *h_Wmuonpt = new TH1F("Wmuonpt"," muon pt (W->mu+nu)",100,0,500);
h_Wmuonpt->SetLineColor(2);
h_Wmuonpt->SetLineWidth(2);
/////////////////////////////////////////////////////////////////////////////////////canvas2

TH1F *h_Wmuonphi = new TH1F("Wmuonphi"," muon phi (W->mu+nu)",30,-5,5);
h_Wmuonphi->SetLineColor(2);
h_Wmuonphi->SetLineWidth(2);
TH1F *h_pfmetphi = new TH1F("pfmetphi"," pfmet phi (W->mu+nu)",30,-5,5);
h_pfmetphi->SetLineColor(2);
h_pfmetphi->SetLineWidth(2);
TH1F *h_Wmuoneta= new TH1F("Wmuoneta"," Muon eta (W->mu+nu)",30,-5,5);
h_Wmuoneta->SetLineColor(2);
h_Wmuoneta->SetLineWidth(2);
TH1F *h_Weta= new TH1F("Weta","  Eta of W boson(W->mu+nu)",30,-5,5);
h_Weta->SetLineColor(2);
h_Weta->SetLineWidth(2);
//////////////////////////////////////////////////////////////////////////////////canvas3

TH1F *h_Wphi= new TH1F("Wphi","  Phi of W boson(W->mu+nu)",30,-5,5);
h_Wphi->SetLineColor(2);
h_Wphi->SetLineWidth(2);
TH1F *h_Wpt= new TH1F("Wpt","  Pt of W boson(W->mu+nu)",200,0,500);
h_Wpt->SetLineColor(2);
h_Wpt->SetLineWidth(2);
TH1F *h_Wet= new TH1F("Wet","  Transverse energy of W (W->mu+nu)",200,0,500);
h_Wet->SetLineColor(2);
h_Wet->SetLineWidth(2);
TH1F *h_chsMupt =new TH1F("chsMupt","  W_muon_pfisolation_SumChargedHadronPt (W->mu+nu)",20,0,10);
h_chsMupt->SetLineColor(2);
h_chsMupt->SetLineWidth(2);








//   In a ROOT session, you can do:
//      Root > .L AnalysisWJetLeptonic.C
//      Root > AnalysisWJetLeptonic t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;


h_nPV->Fill(event_nPV);
Wmass->Fill(W_mass);
h_metpf->Fill(event_met_pfmet);
h_Wmuonpt->Fill(W_muon_pt);

h_Wmuonphi->Fill(W_muon_phi);
h_pfmetphi->Fill(event_met_pfmetPhi);
h_Wmuoneta->Fill(W_muon_eta);
h_Weta->Fill(W_eta);

h_Wphi->Fill(W_phi);
h_Wpt->Fill(W_pt);
h_Wet->Fill(W_et);
h_chsMupt->Fill(W_muon_pfiso_sumChargedHadronPt);




   }



c1->cd(1);
h_nPV->Draw();
c1->cd(2);
Wmass->Draw();
c1->cd(3);
h_metpf->Draw();
c1->cd(4);
h_Wmuonpt->Draw();

c2->cd(1);
h_Wmuonphi->Draw();
c2->cd(2);
h_pfmetphi->Draw();
c2->cd(3);
h_Wmuoneta->Draw();
c2->cd(4);
h_Weta->Draw();

c3->cd(1);
h_Wphi->Draw();
c3->cd(2);
h_Wpt->Draw();
c3->cd(3);
h_Wet->Draw();
c3->cd(4);
h_chsMupt->Draw();












}







