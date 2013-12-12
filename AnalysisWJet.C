#define AnalysisWJet_cxx
#include "AnalysisWJet.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void AnalysisWJet::Loop()
{


float jetptcut=200;
float historange = 200;


gStyle->SetOptStat(0000);

TLegend  *legend3 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend35 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend4 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend45 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend5 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend55 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend6 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend65 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend7 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend75 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend8 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend85 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend9 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend95 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend10 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend105 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend11 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend115 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);
TLegend  *legend12 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);



TCanvas *c1=new TCanvas("mycanvas1","My Canvas1");
c1->Divide(2,2);

TCanvas *c2=new TCanvas("mycanvas2","My Canvas2");
c2->Divide(2,2);

TCanvas *c3=new TCanvas("mycanvas3","My Canvas3");
c3->Divide(2,2);

TCanvas *c4=new TCanvas("mycanvas4","My Canvas4");
c4->Divide(2,2);

TCanvas *c5=new TCanvas("mycanvas5","My Canvas5");
c5->Divide(2,2);




/////////////////////////////////////////////////////////
////Filtered Jets of different cone radius
/////////////////////////////////////////////////////////
TH1F *hft3 = new TH1F("Wmassft3","W boson mass Hadronic (cone radius = 0.3 ) ",60,0,historange);
hft3->SetLineColor(2);//red
hft3->SetLineWidth(2);

TH1F *hft35 = new TH1F("Wmassft35","W boson mass Hadronic (cone radius = 0.35 ) ",60,0,historange);
hft35->SetLineColor(2);//red
hft35->SetLineWidth(2);
TH1F *hft4 = new TH1F("Wmassft4","W boson mass Hadronic (cone radius = 0.4 ) ",60,0,historange);
hft4->SetLineColor(2);//red
hft4->SetLineWidth(2);
TH1F *hft45 = new TH1F("Wmassft45","W boson mass Hadronic (cone radius = 0.45 ) ",60,0,historange);
hft45->SetLineColor(2);//red
hft45->SetLineWidth(2);
TH1F *hft5 = new TH1F("Wmassft5","W boson mass Hadronic (cone radius = 0.5 ) ",60,0,historange);
hft5->SetLineColor(2);//red
hft5->SetLineWidth(2);
TH1F *hft55 = new TH1F("Wmassft55","W boson mass Hadronic (cone radius = 0.55 ) ",60,0,historange);
hft55->SetLineColor(2);//red
hft55->SetLineWidth(2);
TH1F *hft6 = new TH1F("Wmassft6","W boson mass Hadronic (cone radius = 0.6 ) ",60,0,historange);
hft6->SetLineColor(2);//red
hft6->SetLineWidth(2);
TH1F *hft65 = new TH1F("Wmassft65","W boson mass Hadronic (cone radius = 0.65 ) ",60,0,historange);
hft65->SetLineColor(2);//red
hft65->SetLineWidth(2);
TH1F *hft7 = new TH1F("Wmassft7","W boson mass Hadronic (cone radius = 0.7 ) ",60,0,historange);
hft7->SetLineColor(2);//red
hft7->SetLineWidth(2);
TH1F *hft75 = new TH1F("Wmassft75","W boson mass Hadronic (cone radius = 0.75 ) ",60,0,historange);
hft75->SetLineColor(2);//red
hft75->SetLineWidth(2);
TH1F *hft8 = new TH1F("Wmassft8","W boson mass Hadronic (cone radius = 0.8 ) ",60,0,historange);
hft8->SetLineColor(2);//red
hft8->SetLineWidth(2);
TH1F *hft85 = new TH1F("Wmassft85","W boson mass Hadronic (cone radius = 0.85 ) ",60,0,historange);
hft85->SetLineColor(2);//red
hft85->SetLineWidth(2);
TH1F *hft9 = new TH1F("Wmassft9","W boson mass Hadronic (cone radius = 0.9 ) ",60,0,historange);
hft9->SetLineColor(2);//red
hft9->SetLineWidth(2);

TH1F *hft95 = new TH1F("Wmassft95","W boson mass Hadronic (cone radius = 0.95 ) ",60,0,historange);
hft95->SetLineColor(2);//red
hft95->SetLineWidth(2);
TH1F *hft10 = new TH1F("Wmassft10","W boson mass Hadronic (cone radius = 1.0 ) ",60,0,historange);
hft10->SetLineColor(2);//red
hft10->SetLineWidth(2);
TH1F *hft105 = new TH1F("Wmassft105","W boson mass Hadronic (cone radius = 1.05 ) ",60,0,historange);
hft105->SetLineColor(2);//red
hft105->SetLineWidth(2);
TH1F *hft11 = new TH1F("Wmassft11","W boson mass Hadronic (cone radius = 1.10 ) ",60,0,historange);
hft11->SetLineColor(2);//red
hft11->SetLineWidth(2);
TH1F *hft115 = new TH1F("Wmassft115","W boson mass Hadronic (cone radius = 115 ) ",60,0,historange);
hft115->SetLineColor(2);//red
hft115->SetLineWidth(2);
TH1F *hft12 = new TH1F("Wmassft12","W boson mass Hadronic (cone radius = 1.2 ) ",60,0,historange);
hft12->SetLineColor(2);//red
hft12->SetLineWidth(2);
////////////////////////////////////////////////////////////////
///Trimmed Jets of Different cone radius
////////////////////////////////////////////////////////////////

TH1F *htr3 = new TH1F("Wmasstr3","W boson mass Hadronic (cone radius = 0.3 ) ",60,0,historange);
htr3->SetLineColor(3);//green
htr3->SetLineWidth(2);
TH1F *htr35 = new TH1F("Wmasstr35","W boson mass Hadronic (cone radius = 0.35 ) ",60,0,historange);
htr35->SetLineColor(3);
htr35->SetLineWidth(2);

TH1F *htr4 = new TH1F("Wmasstr4","W boson mass Hadronic (cone radius = 0.4 ) ",60,0,historange);
htr4->SetLineColor(3);//green
htr4->SetLineWidth(2);

TH1F *htr45 = new TH1F("Wmasstr45","W boson mass Hadronic (cone radius = 0.45 ) ",60,0,historange);
htr45->SetLineColor(3);//green
htr45->SetLineWidth(2);
TH1F *htr5 = new TH1F("Wmasstr5","W boson mass Hadronic (cone radius = 0.5 ) ",60,0,historange);
htr5->SetLineColor(3);//green
htr5->SetLineWidth(2);
TH1F *htr55 = new TH1F("Wmasstr55","W boson mass Hadronic (cone radius = 0.55 ) ",60,0,historange);
htr55->SetLineColor(3);//green
htr55->SetLineWidth(2);
TH1F *htr6 = new TH1F("Wmasstr6","W boson mass Hadronic (cone radius = 0.6 ) ",60,0,historange);
htr6->SetLineColor(3);//green
htr6->SetLineWidth(2);
TH1F *htr65 = new TH1F("Wmasstr65","W boson mass Hadronic (cone radius = 0.65 ) ",60,0,historange);
htr65->SetLineColor(3);//green
htr65->SetLineWidth(2);
TH1F *htr7 = new TH1F("Wmasstr7","W boson mass Hadronic (cone radius = 0.7 ) ",60,0,historange);
htr7->SetLineColor(3);//green
htr7->SetLineWidth(2);
TH1F *htr75 = new TH1F("Wmasstr75","W boson mass Hadronic (cone radius = 0.75 ) ",60,0,historange);
htr75->SetLineColor(3);//green
htr75->SetLineWidth(2);
TH1F *htr8 = new TH1F("Wmasstr8","W boson mass Hadronic (cone radius = 0.8 ) ",60,0,historange);
htr8->SetLineColor(3);//green
htr8->SetLineWidth(2);
TH1F *htr85 = new TH1F("Wmasstr85","W boson mass Hadronic (cone radius = 0.85 ) ",60,0,historange);
htr85->SetLineColor(3);//green
htr85->SetLineWidth(2);
TH1F *htr9 = new TH1F("Wmasstr9","W boson mass Hadronic (cone radius = 0.9 ) ",60,0,historange);
htr9->SetLineColor(3);//green
htr9->SetLineWidth(2);
TH1F *htr95 = new TH1F("Wmasstr95","W boson mass Hadronic (cone radius = 0.95 ) ",60,0,historange);
htr95->SetLineColor(3);//green
htr95->SetLineWidth(2);
TH1F *htr10 = new TH1F("Wmasstr10","W boson mass Hadronic (cone radius = 1.0 ) ",60,0,historange);
htr10->SetLineColor(3);//green
htr10->SetLineWidth(2);
TH1F *htr105 = new TH1F("Wmasstr105","W boson mass Hadronic (cone radius = 1.05 ) ",60,0,historange);
htr105->SetLineColor(3);//green
htr105->SetLineWidth(2);
TH1F *htr11 = new TH1F("Wmasstr11","W boson mass Hadronic (cone radius = 1.10 ) ",60,0,historange);
htr11->SetLineColor(3);//green
htr11->SetLineWidth(2);
TH1F *htr115 = new TH1F("Wmasstr115","W boson mass Hadronic (cone radius = 115 ) ",60,0,historange);
htr115->SetLineColor(3);//green
htr115->SetLineWidth(2);
TH1F *htr12 = new TH1F("Wmasstr12","W boson mass Hadronic (cone radius = 1.2 ) ",60,0,historange);
htr12->SetLineColor(3);//green
htr12->SetLineWidth(2);

////////////////////////////////////////////////////////////////
///Prunned Jets of Different cone radius
////////////////////////////////////////////////////////////////
TH1F *hpr3 = new TH1F("Wmasspr3","W boson mass Hadronic (cone radius = 0.3 ) ",60,0,historange);
hpr3->SetLineColor(4);//blue
hpr3->SetLineWidth(2);

TH1F *hpr35 = new TH1F("Wmasspr35","W boson mass Hadronic (cone radius = 0.35 ) ",60,0,historange);
hpr35->SetLineColor(4);
hpr35->SetLineWidth(2);

TH1F *hpr4 = new TH1F("Wmasspr4","W boson mass Hadronic (cone radius = 0.4 ) ",60,0,historange);
hpr4->SetLineColor(4);//blue
hpr4->SetLineWidth(2);

TH1F *hpr45 = new TH1F("Wmasspr","W boson mass Hadronic (cone radius = 0.45 ) ",60,0,historange);
hpr45->SetLineColor(4);//blue
hpr45->SetLineWidth(2);

TH1F *hpr5 = new TH1F("Wmasspr5","W boson mass Hadronic (cone radius = 0.5 ) ",60,0,historange);
hpr5->SetLineColor(4);//blue
hpr5->SetLineWidth(2);
TH1F *hpr55 = new TH1F("Wmasspr55","W boson mass Hadronic (cone radius = 0.55 ) ",60,0,historange);
hpr55->SetLineColor(4);//blue
hpr55->SetLineWidth(2);
TH1F *hpr6 = new TH1F("Wmasspr6","W boson mass Hadronic (cone radius = 0.6 ) ",60,0,historange);
hpr6->SetLineColor(4);//blue
hpr6->SetLineWidth(2);
TH1F *hpr65 = new TH1F("Wmasspr65","W boson mass Hadronic (cone radius = 0.65 ) ",60,0,historange);
hpr65->SetLineColor(4);//blue
hpr65->SetLineWidth(2);
TH1F *hpr7 = new TH1F("Wmasspr7","W boson mass Hadronic (cone radius = 0.7 ) ",60,0,historange);
hpr7->SetLineColor(4);//blue
hpr7->SetLineWidth(2);
TH1F *hpr75 = new TH1F("Wmasspr75","W boson mass Hadronic (cone radius = 0.75 ) ",60,0,historange);
hpr75->SetLineColor(4);//blue
hpr75->SetLineWidth(2);
TH1F *hpr8 = new TH1F("Wmasspr8","W boson mass Hadronic (cone radius = 0.8 ) ",60,0,historange);
hpr8->SetLineColor(4);//blue
hpr8->SetLineWidth(2);
TH1F *hpr85 = new TH1F("Wmasspr85","W boson mass Hadronic (cone radius = 0.85 ) ",60,0,historange);
hpr85->SetLineColor(4);//blue
hpr85->SetLineWidth(2);
TH1F *hpr9 = new TH1F("Wmasspr9","W boson mass Hadronic (cone radius = 0.9 ) ",60,0,historange);
hpr9->SetLineColor(4);//blue
hpr9->SetLineWidth(2);
TH1F *hpr95 = new TH1F("Wmasspr95","W boson mass Hadronic (cone radius = 0.95 ) ",60,0,historange);
hpr95->SetLineColor(4);//blue
hpr95->SetLineWidth(2);
TH1F *hpr10 = new TH1F("Wmasspr10","W boson mass Hadronic (cone radius = 1.0 ) ",60,0,historange);
hpr10->SetLineColor(4);//blue
hpr10->SetLineWidth(2);
TH1F *hpr105 = new TH1F("Wmasspr105","W boson mass Hadronic (cone radius = 1.05 ) ",60,0,historange);
hpr105->SetLineColor(4);//blue
hpr105->SetLineWidth(2);
TH1F *hpr11 = new TH1F("Wmasspr11","W boson mass Hadronic (cone radius = 1.10 ) ",60,0,historange);
hpr11->SetLineColor(4);//blue
hpr11->SetLineWidth(2);
TH1F *hpr115 = new TH1F("Wmasspr115","W boson mass Hadronic (cone radius = 115 ) ",60,0,historange);
hpr115->SetLineColor(4);//blue
hpr115->SetLineWidth(2);
TH1F *hpr12 = new TH1F("Wmasspr12","W boson mass Hadronic (cone radius = 1.2 ) ",60,0,historange);
hpr12->SetLineColor(4);//blue
hpr12->SetLineWidth(2);

//   In a ROOT session, you can do:
//      Root > .L AnalysisWJet.C
//      Root > AnalysisWJet t
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
int count=0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
count=count+1;                     
if(count==300000000){                    
//break;                             
}  



///////////Filling AK3 Jets
if(GroomedJet_AK3_PFCHS_pt_ft[0] > jetptcut){
hft3->Fill(GroomedJet_AK3_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK3_PFCHS_pt_tr[0] > jetptcut){
htr3->Fill(GroomedJet_AK3_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK3_PFCHS_pt_pr[0] > jetptcut){
hpr3->Fill(GroomedJet_AK3_PFCHS_mass_pr[0]);
}
//////////////////Filling AK35 Jets
if(GroomedJet_AK35_PFCHS_pt_ft[0] > jetptcut){
hft35->Fill(GroomedJet_AK35_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK35_PFCHS_pt_tr[0] > jetptcut){
htr35->Fill(GroomedJet_AK35_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK35_PFCHS_pt_pr[0] > jetptcut){
hpr35->Fill(GroomedJet_AK35_PFCHS_mass_pr[0]);
}
/////////////////////////Filling AK4 Jets
if(GroomedJet_AK4_PFCHS_pt_ft[0] > jetptcut){
hft4->Fill(GroomedJet_AK4_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK4_PFCHS_pt_tr[0] > jetptcut){
htr4->Fill(GroomedJet_AK4_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK4_PFCHS_pt_pr[0] > jetptcut){
hpr4->Fill(GroomedJet_AK4_PFCHS_mass_pr[0]);
}




/////////////////////////Filling AK45 Jets

if(GroomedJet_AK45_PFCHS_pt_ft[0] > jetptcut){
hft45->Fill(GroomedJet_AK45_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK45_PFCHS_pt_tr[0] > jetptcut){
htr45->Fill(GroomedJet_AK45_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK45_PFCHS_pt_pr[0] > jetptcut){
hpr45->Fill(GroomedJet_AK45_PFCHS_mass_pr[0]);
}




/////////////////////////Filling AK5 Jets

if(GroomedJet_AK5_PFCHS_pt_ft[0] > jetptcut){
hft5->Fill(GroomedJet_AK5_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK5_PFCHS_pt_tr[0] > jetptcut){
htr5->Fill(GroomedJet_AK5_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK5_PFCHS_pt_pr[0] > jetptcut){
hpr5->Fill(GroomedJet_AK5_PFCHS_mass_pr[0]);
}



/////////////////////////Filling AK55 Jets
if(GroomedJet_AK55_PFCHS_pt_ft[0] > jetptcut){
hft55->Fill(GroomedJet_AK55_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK55_PFCHS_pt_tr[0] > jetptcut){
htr55->Fill(GroomedJet_AK55_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK55_PFCHS_pt_pr[0] > jetptcut){
hpr55->Fill(GroomedJet_AK55_PFCHS_mass_pr[0]);
}

/////////////////////////Filling AK6 Jets
if(GroomedJet_AK6_PFCHS_pt_ft[0] > jetptcut){
hft6->Fill(GroomedJet_AK6_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK6_PFCHS_pt_tr[0] > jetptcut){
htr6->Fill(GroomedJet_AK6_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK6_PFCHS_pt_pr[0] > jetptcut){
hpr6->Fill(GroomedJet_AK6_PFCHS_mass_pr[0]);
}



/////////////////////////Filling AK65 Jets

if(GroomedJet_AK65_PFCHS_pt_ft[0] > jetptcut){
hft65->Fill(GroomedJet_AK65_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK65_PFCHS_pt_tr[0] > jetptcut){
htr65->Fill(GroomedJet_AK65_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK65_PFCHS_pt_pr[0] > jetptcut){
hpr65->Fill(GroomedJet_AK65_PFCHS_mass_pr[0]);
}



/////////////////////////Filling AK7 Jets
if(GroomedJet_AK7_PFCHS_pt_ft[0] > jetptcut){
hft7->Fill(GroomedJet_AK7_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK7_PFCHS_pt_tr[0] > jetptcut){
htr7->Fill(GroomedJet_AK7_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK7_PFCHS_pt_pr[0] > jetptcut){
hpr7->Fill(GroomedJet_AK7_PFCHS_mass_pr[0]);
}


/////////////////////////Filling AK75 Jets
if(GroomedJet_AK75_PFCHS_pt_ft[0] > jetptcut){
hft75->Fill(GroomedJet_AK75_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK75_PFCHS_pt_tr[0] > jetptcut){
htr75->Fill(GroomedJet_AK75_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK75_PFCHS_pt_pr[0] > jetptcut){
hpr75->Fill(GroomedJet_AK75_PFCHS_mass_pr[0]);
}


/////////////////////////Filling AK8 Jets

if(GroomedJet_AK8_PFCHS_pt_ft[0] > jetptcut){
hft8->Fill(GroomedJet_AK8_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK8_PFCHS_pt_tr[0] > jetptcut){
htr8->Fill(GroomedJet_AK8_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK8_PFCHS_pt_pr[0] > jetptcut){
hpr8->Fill(GroomedJet_AK8_PFCHS_mass_pr[0]);
}

/////////////////////////Filling AK85 Jets

if(GroomedJet_AK85_PFCHS_pt_ft[0] > jetptcut){
hft85->Fill(GroomedJet_AK85_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK85_PFCHS_pt_tr[0] > jetptcut){
htr85->Fill(GroomedJet_AK85_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK85_PFCHS_pt_pr[0] > jetptcut){
hpr85->Fill(GroomedJet_AK85_PFCHS_mass_pr[0]);
}
/////////////////////////Filling AK9 Jets
if(GroomedJet_AK9_PFCHS_pt_ft[0] > jetptcut){
hft9->Fill(GroomedJet_AK9_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK9_PFCHS_pt_tr[0] > jetptcut){
htr9->Fill(GroomedJet_AK9_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK9_PFCHS_pt_pr[0] > jetptcut){
hpr9->Fill(GroomedJet_AK9_PFCHS_mass_pr[0]);
}









/////////////////////////Filling AK95 Jets

if(GroomedJet_AK95_PFCHS_pt_ft[0] > jetptcut){
hft95->Fill(GroomedJet_AK95_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK95_PFCHS_pt_tr[0] > jetptcut){
htr95->Fill(GroomedJet_AK95_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK95_PFCHS_pt_pr[0] > jetptcut){
hpr95->Fill(GroomedJet_AK95_PFCHS_mass_pr[0]);
}

/////////////////////////Filling AK10 Jets
if(GroomedJet_AK10_PFCHS_pt_ft[0] > jetptcut){
hft10->Fill(GroomedJet_AK10_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK10_PFCHS_pt_tr[0] > jetptcut){
htr10->Fill(GroomedJet_AK10_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK10_PFCHS_pt_pr[0] > jetptcut){
hpr10->Fill(GroomedJet_AK10_PFCHS_mass_pr[0]);
}


/////////////////////////Filling AK105 Jets
hft105->Fill(0);
htr105->Fill(0);
hpr105->Fill(0);

/////////////////////////Filling AK11 Jets

if(GroomedJet_AK11_PFCHS_pt_ft[0] > jetptcut){
hft11->Fill(GroomedJet_AK11_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK11_PFCHS_pt_tr[0] > jetptcut){
htr11->Fill(GroomedJet_AK11_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK11_PFCHS_pt_pr[0] > jetptcut){
hpr11->Fill(GroomedJet_AK11_PFCHS_mass_pr[0]);
}
/////////////////////////Filling AK115 Jets

hft115->Fill(0);
htr115->Fill(0);
hpr115->Fill(0);

/////////////////////////Filling AK12 Jets

if(GroomedJet_AK12_PFCHS_pt_ft[0] > jetptcut){
hft12->Fill(GroomedJet_AK12_PFCHS_mass_ft[0]);
}
if(GroomedJet_AK12_PFCHS_pt_tr[0] > jetptcut){
htr12->Fill(GroomedJet_AK12_PFCHS_mass_tr[0]);
}
if(GroomedJet_AK12_PFCHS_pt_pr[0] > jetptcut){
hpr12->Fill(GroomedJet_AK12_PFCHS_mass_pr[0]);
}













   }

c1->cd(1);
hft3->Draw();
htr3->Draw("SAME");
hpr3->Draw("SAME");
legend3->AddEntry(hft3,"Filtered","L");
legend3->AddEntry(htr3,"Trimmed","L");
legend3->AddEntry(hpr3,"Prunned","L");
legend3->Draw();


c1->cd(2);
hft35->Draw();
htr35->Draw("SAME");
hpr35->Draw("SAME");
legend35->AddEntry(hft35,"Filtered","L");
legend35->AddEntry(htr35,"Trimmed","L");
legend35->AddEntry(hpr35,"Prunned","L");
legend35->Draw();


c1->cd(3);
hft4->Draw();
htr4->Draw("SAME");
hpr4->Draw("SAME");
legend4->AddEntry(hft4,"Filtered","L");
legend4->AddEntry(htr4,"Trimmed","L");
legend4->AddEntry(hpr4,"Prunned","L");
legend4->Draw();

c1->cd(4);
hft45->Draw();
htr45->Draw("SAME");
hpr45->Draw("SAME");
legend45->AddEntry(hft45,"Filtered","L");
legend45->AddEntry(htr45,"Trimmed","L");
legend45->AddEntry(hpr45,"Prunned","L");
legend45->Draw();

/////////////////////////////////////

c2->cd(1);
hft5->Draw();
htr5->Draw("SAME");
hpr5->Draw("SAME");
legend5->AddEntry(hft5,"Filtered","L");
legend5->AddEntry(htr5,"Trimmed","L");
legend5->AddEntry(hpr5,"Prunned","L");
legend5->Draw();



c2->cd(2);
hft55->Draw();
htr55->Draw("SAME");
hpr55->Draw("SAME");
legend55->AddEntry(hft55,"Filtered","L");
legend55->AddEntry(htr55,"Trimmed","L");
legend55->AddEntry(hpr55,"Prunned","L");
legend55->Draw();



c2->cd(3);
hft6->Draw();
htr6->Draw("SAME");
hpr6->Draw("SAME");
legend6->AddEntry(hft6,"Filtered","L");
legend6->AddEntry(htr6,"Trimmed","L");
legend6->AddEntry(hpr6,"Prunned","L");
legend6->Draw();


c2->cd(4);
hft65->Draw();
htr65->Draw("SAME");
hpr65->Draw("SAME");
legend65->AddEntry(hft65,"Filtered","L");
legend65->AddEntry(htr65,"Trimmed","L");
legend65->AddEntry(hpr65,"Prunned","L");
legend65->Draw();


c3->cd(1);
hft7->Draw();
htr7->Draw("SAME");
hpr7->Draw("SAME");
legend7->AddEntry(hft7,"Filtered","L");
legend7->AddEntry(htr7,"Trimmed","L");
legend7->AddEntry(hpr7,"Prunned","L");
legend7->Draw();

c3->cd(2);
hft75->Draw();
htr75->Draw("SAME");
hpr75->Draw("SAME");
legend75->AddEntry(hft75,"Filtered","L");
legend75->AddEntry(htr75,"Trimmed","L");
legend75->AddEntry(hpr75,"Prunned","L");
legend75->Draw();


c3->cd(3);
hft8->Draw();
htr8->Draw("SAME");
hpr8->Draw("SAME");
legend8->AddEntry(hft8,"Filtered","L");
legend8->AddEntry(htr8,"Trimmed","L");
legend8->AddEntry(hpr8,"Prunned","L");
legend8->Draw();



c3->cd(4);
hft85->Draw();
htr85->Draw("SAME");
hpr85->Draw("SAME");
legend85->AddEntry(hft85,"Filtered","L");
legend85->AddEntry(htr85,"Trimmed","L");
legend85->AddEntry(hpr85,"Prunned","L");
legend85->Draw();


c4->cd(1);
hft9->Draw();
htr9->Draw("SAME");
hpr9->Draw("SAME");
legend9->AddEntry(hft9,"Filtered","L");
legend9->AddEntry(htr9,"Trimmed","L");
legend9->AddEntry(hpr9,"Prunned","L");
legend9->Draw();





c4->cd(2);
hft95->Draw();
htr95->Draw("SAME");
hpr95->Draw("SAME");
legend95->AddEntry(hft95,"Filtered","L");
legend95->AddEntry(htr95,"Trimmed","L");
legend95->AddEntry(hpr95,"Prunned","L");
legend95->Draw();

c4->cd(3);
hft10->Draw();
htr10->Draw("SAME");
hpr10->Draw("SAME");
legend10->AddEntry(hft10,"Filtered","L");
legend10->AddEntry(htr10,"Trimmed","L");
legend10->AddEntry(hpr10,"Prunned","L");
legend10->Draw();


c4->cd(4);
hft105->Draw();
htr105->Draw("SAME");
hpr105->Draw("SAME");
legend105->AddEntry(hft10,"Work","L");
legend105->AddEntry(htr10,"In","L");
legend105->AddEntry(hpr10,"Progress","L");
legend105->Draw();




c5->cd(1);
hft11->Draw();
htr11->Draw("SAME");
hpr11->Draw("SAME");
legend11->AddEntry(hft11,"Filtered","L");
legend11->AddEntry(htr11,"Trimmed","L");
legend11->AddEntry(hpr11,"Prunned","L");
legend11->Draw();


c5->cd(2);
hft115->Draw();
htr115->Draw("SAME");
hpr115->Draw("SAME");
legend115->AddEntry(hft115,"Work","L");
legend115->AddEntry(htr115,"In","L");
legend115->AddEntry(hpr115,"Progress","L");
legend115->Draw();



c5->cd(3);
hft12->Draw();
htr12->Draw("SAME");
hpr12->Draw("SAME");
legend12->AddEntry(hft12,"Filtered","L");
legend12->AddEntry(htr12,"Trimmed","L");
legend12->AddEntry(hpr12,"Prunned","L");
legend12->Draw();








}
