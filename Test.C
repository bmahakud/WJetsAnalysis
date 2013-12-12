#define Test_cxx
#include "Test.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Test::Loop()
{

TCanvas *c1=new TCanvas("mycanvas1","My Canvas1");

TH1F *h11=new TH1F("Wmass1","W boson mass from dijet (cone radius = 0.3 ) ",250,0,500);
h11->SetLineColor(2);
h11->SetLineWidth(2);
//   In a ROOT session, you can do:
//      Root > .L Test.C
//      Root > Test t
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

//////////////////////////////////////////jetcone radius 0.3

if(GroomedJet_AK3_PFCHS_pt_tr[0] > 20.0 && GroomedJet_AK3_PFCHS_pt_tr[1] > 20.0 ){


float jetE = GroomedJet_AK3_PFCHS_e_tr[0] + GroomedJet_AK3_PFCHS_e_tr[1];
float jetPhi = GroomedJet_AK3_PFCHS_phi_tr[0] + GroomedJet_AK3_PFCHS_phi_tr[1];
float jetEta = GroomedJet_AK3_PFCHS_eta_tr[0] + GroomedJet_AK3_PFCHS_eta_tr[1];
  
                if(jetPhi > TMath::Pi()) jetPhi -= 2*TMath::Pi();
                if(jetPhi < -TMath::Pi()) jetPhi += 2*TMath::Pi();


float jetPt = sqrt((GroomedJet_AK3_PFCHS_pt_tr[1])*(GroomedJet_AK3_PFCHS_pt_tr[1]) +  (GroomedJet_AK3_PFCHS_pt_tr[0])*(GroomedJet_AK3_PFCHS_pt_tr[0]));
float jetPx = (jetPt)*cos(jetPhi);
float jetPy = (jetPt)*sin(jetPhi);
float jetPz = (jetPt)*sinh(jetEta);  

float jetMass = sqrt((jetE)*(jetE)-(jetPx)*(jetPx)-(jetPy)*(jetPy)-(jetPz)*(jetPz));

h11->Fill(jetMass);






}












   }


c1->cd();
h11->Draw();



}
