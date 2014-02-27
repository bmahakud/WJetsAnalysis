#define AnalysisRD1_cxx
#include "AnalysisRD1.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
# include <TMath.h>
#include <TLorentzVector.h>


void AnalysisRD1::Loop()
{//0
//gStyle->SetOptFit(111);
TFile *f = new TFile("Wmasshisto_R5_tr.root","RECREATE");
TCanvas *c0=new TCanvas("mycanvas0","My Canvas0");
TCanvas *c1=new TCanvas("mycanvas1","My Canvas1");
TCanvas *c2=new TCanvas("mycanvas2","My Canvas2");
TCanvas *c3=new TCanvas("mycanvas3","My Canvas3");
TCanvas *c4=new TCanvas("mycanvas4","My Canvas4");
TCanvas *c5=new TCanvas("mycanvas5","My Canvas5");
TCanvas *c6=new TCanvas("mycanvas6","My Canvas6");
TCanvas *c7=new TCanvas("mycanvas7","My Canvas7");
TCanvas *c8=new TCanvas("mycanvas8","My Canvas8");
TCanvas *c9=new TCanvas("mycanvas9","My Canvas9");
TCanvas *c10=new TCanvas("mycanvas10","My Canvas10");


TH1F *h0=new TH1F("hist0","b jet multiplicity csv > 0.679 ",10,0,10);
TH1F *h1=new TH1F("hist1","Wmass all Pt range",50,60,160);
TH1F *h2=new TH1F("hist2","Wmass 30< Pt <60",50,60,160);
TH1F *h3=new TH1F("hist3","Wmass 60< Pt <90",50,60,160);
TH1F *h4=new TH1F("hist4","Wmass 90< Pt <120",50,60,160);
TH1F *h5=new TH1F("hist5","Wmass 120< Pt <150",50,60,160);
TH1F *h6=new TH1F("hist6","Wmass 150< Pt <180",50,60,160);
TH1F *h7=new TH1F("hist7","Wmass 180< Pt <210",50,60,160);
TH1F *h8=new TH1F("hist8","Wmass 210< Pt <240",50,60,160);
TH1F *h9=new TH1F("hist9","Wmass 240< Pt <270",50,60,160);
TH1F *h10=new TH1F("hist10","Wmass 270< Pt <300",50,60,160);



   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;

int count =0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {//1
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

count= count+1;

if(count==10000000){
break;
}


//helper function defined to calculate DeltaR
float DeltaR(float eta1,float phi1,float eta2,float phi2)
{
	float deltaPhi = TMath::Abs(phi1-phi2);
	float deltaEta = eta1-eta2;
	if(deltaPhi > TMath::Pi())
	deltaPhi = TMath::TwoPi() - deltaPhi;

      return TMath::Sqrt(deltaEta*deltaEta + deltaPhi*deltaPhi);
}

        

//lorentz vectors defined to store two highest CSV value b tagged jets
TLorentzVector b1;//this will store the b jet with highest CSV value
TLorentzVector b2;// this will store b jet with second highest CSV value



int bmultiplicity=0;//no of b jets in an event
double csvvalue1=0;  // will finally store CSV value of highest csv value jet(or b jet)


for(int i=0;i<8;i++){ //for loop running over standard PFCorAK3 jets to find  the HIGHEST csv value b jet

if(JetPFCor_bDiscriminatorCSV[i] > 0.679 ){// medium cut applied on bDiscriminatorCSV

bmultiplicity=bmultiplicity+1;







if(JetPFCor_bDiscriminatorCSV[i] > csvvalue1){
        csvvalue1 =JetPFCor_bDiscriminatorCSV[i];
        double csvvalue1 =JetPFCor_bDiscriminatorCSV[i];
        double b1Px=JetPFCor_Pt[i]*cos(JetPFCor_Phi[i]); 
	double b1Py=JetPFCor_Pt[i] *sin(JetPFCor_Phi[i]); 
	double b1theta = 2*atan(exp(-JetPFCor_Eta[i]));   //eta = -ln(tan(theta/2))
	double b1Pz = JetPFCor_Pt[i]/tan(b1theta);
        double b1E = JetPFCor_E[i];

       b1.SetPxPyPzE(b1Px,b1Py,b1Pz,b1E);
 
 }
                  




}//medium cut applied on bDiscriminatorCSV

}//for loop running over standard PFCorAK3 jets to find  the HIGHEST csv value b jet 


double csvvalue2 = 0;
for(int iii=0;iii<8;iii++){//for loop running over standard PFCorAK3 jets to find  the SECOND highest csv value b jet 
if(JetPFCor_bDiscriminatorCSV[iii] > 0.679 ){// medium cut applied on bDiscriminatorCSV
     if(JetPFCor_bDiscriminatorCSV[iii]  < csvvalue1){//2
         
          
if(JetPFCor_bDiscriminatorCSV[iii] > csvvalue2){//1

        csvvalue2 = JetPFCor_bDiscriminatorCSV[iii];
        double b2Px=JetPFCor_Pt[iii]*cos(JetPFCor_Phi[iii]); 
	double b2Py=JetPFCor_Pt[iii] *sin(JetPFCor_Phi[iii]); 
	double b2theta = 2*atan(exp(-JetPFCor_Eta[iii]));   //eta = -ln(tan(theta/2))
	double b2Pz = JetPFCor_Pt[iii]/tan(b2theta);
        double b2E = JetPFCor_E[iii];
 
       b2.SetPxPyPzE(b2Px,b2Py,b2Pz,b2E);
  }//1



         }  //2         
      }// medium cut applied on bDiscriminatorCSV
  }//for loop running over standard PFCorAK3 jets to find  the SECOND highest csv value b jet





h0->Fill(bmultiplicity);




if(bmultiplicity==2 ||bmultiplicity==3 || bmultiplicity==4 || bmultiplicity==5 ){//if bmultiplicity==2
int UnbtaggedjetNum1=0;
int UnbtaggedjetNum2=0;
int m=0;
for(int n=0;n<6;n++){//for loop int n
double DeltaR1 = DeltaR(GroomedJet_AK5_PFCHS_eta_tr[n],GroomedJet_AK5_PFCHS_phi_tr[n],b1.Eta(),b1.Phi());
double DeltaR2 = DeltaR(GroomedJet_AK5_PFCHS_eta_tr[n],GroomedJet_AK5_PFCHS_phi_tr[n],b2.Eta(),b2.Phi());

if(DeltaR1 > 0.5 && DeltaR2 > 0.5){//77
m=m+1;
if(m==1){//99
UnbtaggedjetNum1=n;
   }//99
if(m==2){//88
UnbtaggedjetNum2=n;
   }//88


}//77



}//for loop int n

        double gPx1= GroomedJet_AK5_PFCHS_pt_tr[UnbtaggedjetNum1]*cos(GroomedJet_AK5_PFCHS_phi_tr[UnbtaggedjetNum1]); 
	double gPy1= GroomedJet_AK5_PFCHS_pt_tr[UnbtaggedjetNum1] *sin(GroomedJet_AK5_PFCHS_phi_tr[UnbtaggedjetNum1]); 
	double gtheta1 = 2*atan(exp(-GroomedJet_AK5_PFCHS_eta_tr[UnbtaggedjetNum1]));   //eta = -ln(tan(theta/2))
	double gPz1 = GroomedJet_AK5_PFCHS_pt_tr[UnbtaggedjetNum1]/tan(gtheta1);
        double gE1 = GroomedJet_AK5_PFCHS_e_tr[UnbtaggedjetNum1];

        double gPx2= GroomedJet_AK5_PFCHS_pt_tr[UnbtaggedjetNum2]*cos(GroomedJet_AK5_PFCHS_phi_tr[UnbtaggedjetNum2]); 
	double gPy2=GroomedJet_AK5_PFCHS_pt_tr[UnbtaggedjetNum2] *sin(GroomedJet_AK5_PFCHS_phi_tr[UnbtaggedjetNum2]); 
	double gtheta2 = 2*atan(exp(-GroomedJet_AK5_PFCHS_eta_tr[UnbtaggedjetNum2]));   //eta = -ln(tan(theta/2))
	double gPz2 = GroomedJet_AK5_PFCHS_pt_tr[UnbtaggedjetNum2]/tan(gtheta2);
        double gE2 = GroomedJet_AK5_PFCHS_e_tr[UnbtaggedjetNum2];

TLorentzVector   gj1;//gj stands for groomed jet
TLorentzVector   gj2;
TLorentzVector   Dijet;
gj1.SetPxPyPzE(gPx1,gPy1,gPz1,gE1);
gj2.SetPxPyPzE(gPx2,gPy2,gPz2,gE2);

Dijet = gj1 + gj2;

double dijetmass=0;
double dijetpt=0;
dijetmass = Dijet.M();
dijetpt = sqrt((Dijet.Px())*(Dijet.Px())+(Dijet.Py())*(Dijet.Py()));

h1->Fill(dijetmass);

if(dijetpt > 30.0 && dijetpt < 60.0){//30 to 60
h2->Fill(dijetmass);
}//30 to 60

if(dijetpt > 60.0 && dijetpt < 90.0){//
h3->Fill(dijetmass);
}//

if(dijetpt > 90.0 && dijetpt < 120.0){//
h4->Fill(dijetmass);
}//

if(dijetpt > 120.0 && dijetpt < 150.0){//
h5->Fill(dijetmass);
}//

if(dijetpt > 150.0 && dijetpt < 180.0){//
h6->Fill(dijetmass);
}//


if(dijetpt > 180.0 && dijetpt < 210.0){//
h7->Fill(dijetmass);
}//


if(dijetpt > 210.0 && dijetpt < 240.0){//
h8->Fill(dijetmass);
}//


if(dijetpt > 240.0 && dijetpt < 270.0){//
h9->Fill(dijetmass);
}//

if(dijetpt > 270.0 && dijetpt < 350.0){//
h10->Fill(dijetmass);
}//


}//if bmultiplicity==2




   }//1
c0->cd();
h0->Draw("E");

c1->cd();
h1->Draw("E");
c2->cd();
h2->Draw("E");

c3->cd();
h3->Draw("E");

c4->cd();
h4->Draw("E");

c5->cd();
h5->Draw("E");

c6->cd();
h6->Draw("E");

c7->cd();
h7->Draw("E");


c8->cd();
h8->Draw("E");

c9->cd();
h9->Draw("E");



c10->cd();
h10->Draw("E");








f->Write();


}//0
