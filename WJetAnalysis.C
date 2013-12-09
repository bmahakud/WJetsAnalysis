#define WJetAnalysis_cxx
#include "WJetAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void WJetAnalysis::Loop()
{
//gStyle->SetOptStat(0000);

TLegend  *legend1 = new TLegend(0.7364103,0.6629747,0.9312821,0.8908228);

TCanvas *c1=new TCanvas("mycanvas1","My Canvas1");
TCanvas *c2=new TCanvas("mycanvas2","My Canvas2");
TCanvas *c3=new TCanvas("mycanvas3","My Canvas3");
TCanvas *c4=new TCanvas("mycanvas4","My Canvas4");
TCanvas *c5=new TCanvas("mycanvas5","My Canvas5");
TCanvas *c6=new TCanvas("mycanvas6","My Canvas6");
TCanvas *c8=new TCanvas("mycanvas6","My Canvas6");


float x1[11], y1[11];
float x2[11], y2[11];
float x3[11], y3[11];
float x4[11], y4[11];
float x5[11], y5[11];
float x6[11], y6[11];
float x7[11], y7[11];









TCanvas *cR=new TCanvas("mycanvascR","My CanvascR");


c1->Divide(2,2);
c2->Divide(2,2);
c3->Divide(2,2);
c4->Divide(2,2);
c6->Divide(3,3);

TH1F *h11=new TH1F("Wmass1","W boson mass from dijet (cone radius = 0.3 ) ",100,-5,500);
h11->SetLineColor(2);
h11->SetLineWidth(2);

TH2F *h12 = new TH2F("h12","Wmass vs Jet Pt(cone radius = 0.3)",100,0,500,100,0,500);

TH1F *h13=new TH1F("Wmass2","W boson mass from dijet (cone radius = 0.35 ) ",100,-5,500);
h13->SetLineColor(3);
h13->SetLineWidth(2);

TH2F *h14 = new TH2F("h14","Wmass vs Jet Pt(cone radius = 0.35)",100,0,500,100,0,500);

TH1F *h15=new TH1F("Wmass3","W boson mass from dijet (cone radius = 0.4 ) ",100,-5,500);
h15->SetLineColor(4);
h15->SetLineWidth(2);

TH2F *h16 = new TH2F("h16","Wmass vs Jet Pt(cone radius = 0.4)",100,0,500,100,0,500);

TH1F *h17=new TH1F("Wmass4","W boson mass from dijet (cone radius = 0.45 ) ",100,-5,500);
h17->SetLineColor(5);
h17->SetLineWidth(2);

TH2F *h18 = new TH2F("h18","Wmass vs Jet Pt(cone radius = 0.45)",100,0,500,100,0,500);

TH1F *h19=new TH1F("Wmass5","W boson mass from dijet (cone radius = 0.5 ) ",100,-5,500);
h19->SetLineWidth(2);
h19->SetLineColor(6);



TH2F *h20 = new TH2F("h20","Wmass vs Jet Pt(cone radius = 0.5)",100,0,500,100,0,500);

TH1F *h21=new TH1F("Wmass6","W boson mass from dijet (cone radius = 0.55 ) ",100,-5,500);
h21->SetLineColor(7);
h21->SetLineWidth(2);



TH2F *h22 = new TH2F("h22","Wmass vs Jet Pt(cone radius = 0.55)",100,0,500,100,0,500);

TH1F *h23=new TH1F("Wmass7","W boson mass from dijet (cone radius = 0.6 ) ",100,-5,500);
h23->SetLineColor(8);
h23->SetLineWidth(2);

TH2F *h24 = new TH2F("h24","Wmass vs Jet Pt(cone radius = 0.6)",100,0,500,100,0,500);


TH1F *h61=new TH1F("Wmass61","W boson mass from dijet (25 < dijetPt < 50 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h62=new TH1F("Wmass62","W boson mass from dijet (50 < dijetPt < 75 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h63=new TH1F("Wmass63","W boson mass from dijet (75 < dijetPt < 100 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h64=new TH1F("Wmass64","W boson mass from dijet (100 < dijetPt < 125 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h65=new TH1F("Wmass65","W boson mass from dijet (125 < dijetPt < 150 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h66=new TH1F("Wmass66","W boson mass from dijet (150 < dijetPt < 175 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h67=new TH1F("Wmass67","W boson mass from dijet (175 < dijetPt < 200 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h68=new TH1F("Wmass68","W boson mass from dijet (200 < dijetPt < 225 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h69=new TH1F("Wmass69","W boson mass from dijet (225 < dijetPt < 250 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h610=new TH1F("Wmass610","W boson mass from dijet (250 < dijetPt < 275 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h611=new TH1F("Wmass611","W boson mass from dijet (275 < dijetPt < 300 ,cone radius = 0.3 ) ",100,-5,500);


TH1F *h71=new TH1F("Wmass71","W boson mass from dijet (25 < dijetPt < 50 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h72=new TH1F("Wmass72","W boson mass from dijet (50 < dijetPt < 75 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h73=new TH1F("Wmass73","W boson mass from dijet (75 < dijetPt < 100 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h74=new TH1F("Wmass74","W boson mass from dijet (100 < dijetPt < 125 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h75=new TH1F("Wmass75","W boson mass from dijet (125 < dijetPt < 150 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h76=new TH1F("Wmass76","W boson mass from dijet (150 < dijetPt < 175 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h77=new TH1F("Wmass77","W boson mass from dijet (175 < dijetPt < 200 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h78=new TH1F("Wmass78","W boson mass from dijet (200 < dijetPt < 225 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h79=new TH1F("Wmass79","W boson mass from dijet (225 < dijetPt < 250 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h710=new TH1F("Wmass710","W boson mass from dijet (250 < dijetPt < 275 ,cone radius = 0.3 ) ",100,-5,500);
TH1F *h711=new TH1F("Wmass711","W boson mass from dijet (275 < dijetPt < 300 ,cone radius = 0.3 ) ",100,-5,500);

TH1F *h=new TH1F("Wmass711","leptonic Wmass ",100,-5,500);

























//   In a ROOT session, you can do:
//      Root > .L WJetAnalysis.C
//      Root > WJetAnalysis t
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
if(count==30000){                    
break;                             
}      
     //GroomedJet_AK3_PF_pt[6]

//cout<<"newEvent"<<jentry<<endl;

  // for(int i=0;i<6;i++){
   
  // cout<<"pt groomed"<<GroomedJet_AK3_PF_pt[i]<<endl;


//}



//h->Fill(W_mass);




//////////////////////////////////////////jetcone radius 0.3

if(GroomedJet_AK3_PFCHS_pt[0] > 20.0 && GroomedJet_AK3_PFCHS_pt[1] > 20.0 ){


float jetE = GroomedJet_AK3_PFCHS_e[0] + GroomedJet_AK3_PFCHS_e[1];
float jetPhi = GroomedJet_AK3_PFCHS_phi[0] + GroomedJet_AK3_PFCHS_phi[1];
float jetEta = GroomedJet_AK3_PFCHS_eta[0] + GroomedJet_AK3_PFCHS_eta[1];
  
                if(jetPhi > TMath::Pi()) jetPhi -= 2*TMath::Pi();
                if(jetPhi < -TMath::Pi()) jetPhi += 2*TMath::Pi();


float jetPt = sqrt((GroomedJet_AK3_PFCHS_pt[1])*(GroomedJet_AK3_PFCHS_pt[1]) +  (GroomedJet_AK3_PFCHS_pt[0])*(GroomedJet_AK3_PFCHS_pt[0]));
float jetPx = (jetPt)*cos(jetPhi);
float jetPy = (jetPt)*sin(jetPhi);
float jetPz = (jetPt)*sinh(jetEta);  

float jetMass = sqrt((jetE)*(jetE)-(jetPx)*(jetPx)-(jetPy)*(jetPy)-(jetPz)*(jetPz));

h11->Fill(jetMass);
h12->Fill(jetPt,jetMass );
if(jetMass > 30.0 && jetMass < 250.0){//jetMass(W) window

if(jetPt > 25.0 && jetPt < 50){
h61->Fill(jetMass);

}
if(jetPt > 50.0 && jetPt < 75.0){
h62->Fill(jetMass);

}
if(jetPt > 75.0 && jetPt < 100.0){
h63->Fill(jetMass);

}

if(jetPt > 100.0 && jetPt < 125.0){
h64->Fill(jetMass);

}

if(jetPt > 125.0 && jetPt < 150){
h65->Fill(jetMass);

}
if(jetPt > 150.0 && jetPt < 175.0){
h66->Fill(jetMass);

}
if(jetPt > 175.0 && jetPt < 200.0){
h67->Fill(jetMass);

}

if(jetPt > 200.0 && jetPt < 225.0){
h68->Fill(jetMass);

}

if(jetPt > 225.0 && jetPt < 250.0){
h69->Fill(jetMass);

}

if(jetPt > 250.0 && jetPt < 275.0){
h610->Fill(jetMass);

}

if(jetPt > 275.0 && jetPt < 300.0){
h611->Fill(jetMass);

}

}//jetMass(W)window












}
//////////////////////////////////////////jet cone radius 0.3



//////////////////////////////////////////jetcone radius 0.35

if(GroomedJet_AK35_PF_pt[0] > 20.0 && GroomedJet_AK35_PF_pt[1] > 20.0 ){


float jetE1 = GroomedJet_AK35_PF_e[0] + GroomedJet_AK35_PF_e[1];
float jetPhi1 = GroomedJet_AK35_PF_phi[0] + GroomedJet_AK35_PF_phi[1];
float jetEta1 = GroomedJet_AK35_PF_eta[0] + GroomedJet_AK35_PF_eta[1];
  
                if(jetPhi1 > TMath::Pi()) jetPhi1 -= 2*TMath::Pi();
                if(jetPhi1 < -TMath::Pi()) jetPhi1 += 2*TMath::Pi();


float jetPt1 = sqrt((GroomedJet_AK35_PF_pt[1])*(GroomedJet_AK35_PF_pt[1]) +  (GroomedJet_AK35_PF_pt[0])*(GroomedJet_AK35_PF_pt[0]));
float jetPx1 = (jetPt1)*cos(jetPhi1);
float jetPy1 = (jetPt1)*sin(jetPhi1);
float jetPz1 = (jetPt1)*sinh(jetEta1);  

float jetMass1 = sqrt((jetE1)*(jetE1)-(jetPx1)*(jetPx1)-(jetPy1)*(jetPy1)-(jetPz1)*(jetPz1));

h13->Fill(jetMass1);
h14->Fill(jetPt1,jetMass1 );
if(jetMass1 > 30.0 && jetMass1 < 250.0){//jetMass(W) window

if(jetPt1 > 25.0 && jetPt1 < 50){
h71->Fill(jetMass1);

}
if(jetPt1 > 50.0 && jetPt1 < 75.0){
h72->Fill(jetMass1);

}
if(jetPt1 > 75.0 && jetPt1 < 100.0){
h73->Fill(jetMass1);

}

if(jetPt1 > 100.0 && jetPt1 < 125.0){
h74->Fill(jetMass1);

}

if(jetPt1 > 125.0 && jetPt1 < 150){
h75->Fill(jetMass1);

}
if(jetPt1 > 150.0 && jetPt1 < 175.0){
h76->Fill(jetMass1);

}
if(jetPt1 > 175.0 && jetPt1 < 200.0){
h77->Fill(jetMass1);

}

if(jetPt1 > 200.0 && jetPt1 < 225.0){
h78->Fill(jetMass1);

}

if(jetPt1 > 225.0 && jetPt1 < 250.0){
h79->Fill(jetMass1);

}

if(jetPt > 250.0 && jetPt < 275.0){
h710->Fill(jetMass);

}

if(jetPt1 > 275.0 && jetPt1 < 300.0){
h711->Fill(jetMass1);

}

}//jetMass(W)window

}
//////////////////////////////////////////jet cone radius 0.35

//////////////////////////////////////////jetcone radius 0.4

if(GroomedJet_AK4_PF_pt[0] > 20.0 && GroomedJet_AK4_PF_pt[1] > 20.0 ){


float jetE2 = GroomedJet_AK4_PF_e[0] + GroomedJet_AK4_PF_e[1];
float jetPhi2 = GroomedJet_AK4_PF_phi[0] + GroomedJet_AK4_PF_phi[1];
float jetEta2 = GroomedJet_AK4_PF_eta[0] + GroomedJet_AK4_PF_eta[1];
  
                if(jetPhi2 > TMath::Pi()) jetPhi2 -= 2*TMath::Pi();
                if(jetPhi2 < -TMath::Pi()) jetPhi2 += 2*TMath::Pi();


float jetPt2 = sqrt((GroomedJet_AK4_PF_pt[1])*(GroomedJet_AK4_PF_pt[1]) +  (GroomedJet_AK4_PF_pt[0])*(GroomedJet_AK4_PF_pt[0]));
float jetPx2 = (jetPt2)*cos(jetPhi2);
float jetPy2 = (jetPt2)*sin(jetPhi2);
float jetPz2 = (jetPt2)*sinh(jetEta2);  

float jetMass2 = sqrt((jetE2)*(jetE2)-(jetPx2)*(jetPx2)-(jetPy2)*(jetPy2)-(jetPz2)*(jetPz2));

h15->Fill(jetMass2);
h16->Fill(jetPt2,jetMass2 );


}
//////////////////////////////////////////jet cone radius 0.4

//////////////////////////////////////////jetcone radius 0.45

if(GroomedJet_AK45_PF_pt[0] > 20.0 && GroomedJet_AK45_PF_pt[1] > 20.0 ){


float jetE3 = GroomedJet_AK45_PF_e[0] + GroomedJet_AK45_PF_e[1];
float jetPhi3 = GroomedJet_AK45_PF_phi[0] + GroomedJet_AK45_PF_phi[1];
float jetEta3 = GroomedJet_AK45_PF_eta[0] + GroomedJet_AK45_PF_eta[1];
  
                if(jetPhi3 > TMath::Pi()) jetPhi3 -= 2*TMath::Pi();
                if(jetPhi3 < -TMath::Pi()) jetPhi3 += 2*TMath::Pi();


float jetPt3 = sqrt((GroomedJet_AK45_PF_pt[1])*(GroomedJet_AK45_PF_pt[1]) +  (GroomedJet_AK45_PF_pt[0])*(GroomedJet_AK45_PF_pt[0]));
float jetPx3 = (jetPt3)*cos(jetPhi3);
float jetPy3 = (jetPt3)*sin(jetPhi3);
float jetPz3 = (jetPt3)*sinh(jetEta3);  

float jetMass3 = sqrt((jetE3)*(jetE3)-(jetPx3)*(jetPx3)-(jetPy3)*(jetPy3)-(jetPz3)*(jetPz3));

h17->Fill(jetMass3);
h18->Fill(jetPt3,jetMass3 );


}
//////////////////////////////////////////jet cone radius 0.45

//////////////////////////////////////////jetcone radius 0.5

if(GroomedJet_AK5_PF_pt[0] > 20.0 && GroomedJet_AK5_PF_pt[1] > 20.0 ){


float jetE4 = GroomedJet_AK5_PF_e[0] + GroomedJet_AK5_PF_e[1];
float jetPhi4 = GroomedJet_AK5_PF_phi[0] + GroomedJet_AK5_PF_phi[1];
float jetEta4 = GroomedJet_AK5_PF_eta[0] + GroomedJet_AK5_PF_eta[1];
  
                if(jetPhi4 > TMath::Pi()) jetPhi4 -= 2*TMath::Pi();
                if(jetPhi4 < -TMath::Pi()) jetPhi4 += 2*TMath::Pi();


float jetPt4 = sqrt((GroomedJet_AK5_PF_pt[1])*(GroomedJet_AK5_PF_pt[1]) +  (GroomedJet_AK5_PF_pt[0])*(GroomedJet_AK5_PF_pt[0]));
float jetPx4 = (jetPt4)*cos(jetPhi4);
float jetPy4 = (jetPt4)*sin(jetPhi4);
float jetPz4 = (jetPt4)*sinh(jetEta4);  

float jetMass4 = sqrt((jetE4)*(jetE4)-(jetPx4)*(jetPx4)-(jetPy4)*(jetPy4)-(jetPz4)*(jetPz4));

h19->Fill(jetMass4);
h20->Fill(jetPt4,jetMass4 );


}
//////////////////////////////////////////jet cone radius 0.5

//////////////////////////////////////////jetcone radius 0.55

if(GroomedJet_AK55_PF_pt[0] > 20.0 && GroomedJet_AK55_PF_pt[1] > 20.0 ){


float jetE5 = GroomedJet_AK55_PF_e[0] + GroomedJet_AK55_PF_e[1];
float jetPhi5 = GroomedJet_AK55_PF_phi[0] + GroomedJet_AK55_PF_phi[1];
float jetEta5 = GroomedJet_AK55_PF_eta[0] + GroomedJet_AK55_PF_eta[1];
  
                if(jetPhi5 > TMath::Pi()) jetPhi5 -= 2*TMath::Pi();
                if(jetPhi5 < -TMath::Pi()) jetPhi5 += 2*TMath::Pi();


float jetPt5 = sqrt((GroomedJet_AK55_PF_pt[1])*(GroomedJet_AK55_PF_pt[1]) +  (GroomedJet_AK55_PF_pt[0])*(GroomedJet_AK55_PF_pt[0]));
float jetPx5 = (jetPt5)*cos(jetPhi5);
float jetPy5 = (jetPt5)*sin(jetPhi5);
float jetPz5 = (jetPt5)*sinh(jetEta5);  

float jetMass5 = sqrt((jetE5)*(jetE5)-(jetPx5)*(jetPx5)-(jetPy5)*(jetPy5)-(jetPz5)*(jetPz5));
//cout<<"jetPt = "<<GroomedJet_AK55_PF_pt[0]<<endl;
//cout<<"jetMass = "<<jetMass5<<endl;
h21->Fill(jetMass5);
h22->Fill(jetPt5,jetMass5 );


}
//////////////////////////////////////////jet cone radius 0.55

//////////////////////////////////////////jetcone radius 0.6

if(GroomedJet_AK6_PF_pt[0] > 20.0 && GroomedJet_AK6_PF_pt[1] > 20.0 ){


float jetE6 = GroomedJet_AK6_PF_e[0] + GroomedJet_AK6_PF_e[1];
float jetPhi6 = GroomedJet_AK6_PF_phi[0] + GroomedJet_AK6_PF_phi[1];
float jetEta6 = GroomedJet_AK6_PF_eta[0] + GroomedJet_AK6_PF_eta[1];
  
                if(jetPhi6 > TMath::Pi()) jetPhi6 -= 2*TMath::Pi();
                if(jetPhi6 < -TMath::Pi()) jetPhi6 += 2*TMath::Pi();


float jetPt6 = sqrt((GroomedJet_AK6_PF_pt[1])*(GroomedJet_AK6_PF_pt[1]) +  (GroomedJet_AK6_PF_pt[0])*(GroomedJet_AK6_PF_pt[0]));
float jetPx6 = (jetPt6)*cos(jetPhi6);
float jetPy6 = (jetPt6)*sin(jetPhi6);
float jetPz6 = (jetPt6)*sinh(jetEta6);  

float jetMass6 = sqrt((jetE6)*(jetE6)-(jetPx6)*(jetPx6)-(jetPy6)*(jetPy6)-(jetPz6)*(jetPz6));

h23->Fill(jetMass6);
h24->Fill(jetPt6,jetMass6 );


}
//////////////////////////////////////////jet cone radius 0.6










   }



x1[0] = 37.5;
y1[0] = h61->GetMean();
x1[1] = 62.5;
y1[1] = h62->GetMean();
x1[2] = 87.5;
y1[2] = h63->GetMean();
x1[3] = 112.5;
y1[3] = h64->GetMean();
x1[4] = 137.5;
y1[4] = h65->GetMean();
x1[5] = 162.5;
y1[5] = h66->GetMean();
x1[6] = 187.5;
y1[6] = h67->GetMean();
x1[7] = 212.5;
y1[7] = h68->GetMean();
x1[8] = 237.5;
y1[8] = h69->GetMean();
x1[9] = 262.5;
y1[9] = h610->GetMean();
x1[10] = 287.5;
y1[10] = h611->GetMean();

x2[0] = 37.5;
y2[0] = h71->GetMean();
x2[1] = 62.5;
y2[1] = h72->GetMean();
x2[2] = 87.5;
y2[2] = h73->GetMean();
x2[3] = 112.5;
y2[3] = h74->GetMean();
x2[4] = 137.5;
y2[4] = h75->GetMean();
x2[5] = 162.5;
y2[5] = h76->GetMean();
x2[6] = 187.5;
y2[6] = h77->GetMean();
x2[7] = 212.5;
y2[7] = h78->GetMean();
x2[8] = 237.5;
y2[8] = h79->GetMean();
x2[9] = 262.5;
y2[9] = h710->GetMean();
x2[10] = 287.5;
y2[10] = h711->GetMean();


TMultiGraph *mg = new TMultiGraph();
mg->SetTitle("Hadronic Wmass vs Hadronic Wpt ;  Hadronic W Pt");


gr1 = new TGraph(11,x1,y1);
gr1->SetMarkerColor(kBlue);
  // gr1->Draw("AC*");

gr2 = new TGraph(11,x2,y2);
  // gr2->Draw("AC*");
gr1->SetMarkerColor(kRed);

mg->Add(gr1,"");//lp
mg->Add(gr2,"");//cp

mg->Draw("AC*");





c1->cd(1);
h11->Draw();
c1->cd(2);
h12->Draw("colz");
c1->cd(3);
h13->Draw();
c1->cd(4);
h14->Draw("colz");
c2->cd(1);
h15->Draw();
c2->cd(2);
h16->Draw("colz");
c2->cd(3);
h17->Draw();
c2->cd(4);
h18->Draw("colz");
c3->cd(1);
h19->Draw();
c3->cd(2);
h20->Draw("colz");
c3->cd(3);
h21->Draw();
c3->cd(4);
h22->Draw("colz");

c4->cd(1);
h23->Draw();
c4->cd(2);
h24->Draw("colz");








c5->cd();
legend1->AddEntry(h11,"jet radius = 0.30","L");
legend1->AddEntry(h13,"jet radius = 0.35","L");
legend1->AddEntry(h15,"jet radius = 0.40","L");
legend1->AddEntry(h17,"jet radius = 0.45","L");
legend1->AddEntry(h19,"jet radius = 0.50","L");
legend1->AddEntry(h21,"jet radius = 0.55","L");
legend1->AddEntry(h23,"jet radius = 0.60","L");



h11->Draw();
h13->Draw("SAME");
h15->Draw("SAME");
h17->Draw("SAME");
h19->Draw("SAME");
h21->Draw("SAME");
h23->Draw("SAME");
legend1->Draw();



c6->cd(1);
h61->Draw();
c6->cd(2);
h62->Draw();
c6->cd(3);
h63->Draw();
c6->cd(4);
h64->Draw();
c6->cd(5);
h65->Draw();
c6->cd(6);
h66->Draw();
c6->cd(7);
h67->Draw();
c6->cd(8);
h68->Draw();
c6->cd(9);
h69->Draw();

}



