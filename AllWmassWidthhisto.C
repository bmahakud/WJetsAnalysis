void AllWmassWidthhisto(){


TCanvas *c1=new TCanvas("mycanvas1","My Canvas1",600,300);
c1->SetGrid();
  gStyle->SetOptFit(111);
  //c1->Divide(2,2);
TMultiGraph *mg = new TMultiGraph();
mg->SetTitle("Hadronic W mass Width in different Pt bins ; Ptjj ; Wmass");


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

  y1[0]=20.3;
  y1[1]=25.67;
  y1[2]=16.8;
  y1[3]=19.76;
  y1[4]=8.87;
  y1[5]=9.8;
  y1[6]=8.2;
  y1[7]=6.7;
  y1[8]=6.9;
  
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

  y2[0]=21;
  y2[1]=24.7;
  y2[2]=17.7;
  y2[3]=13;
  y2[4]=10.38;
  y2[5]=8.80;
  y2[6]=10.1;
  y2[7]=7.5;
  y2[8]=7.3;
  
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

  y3[0]=27;
  y3[1]=23.4;
  y3[2]=15.8;
  y3[3]=13.7;
  y3[4]=10.7;
  y3[5]=8.65;
  y3[6]=10.6;
  y3[7]=8.6;
  y3[8]=8.1;
  
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

  y4[0]=21.50;
  y4[1]=21.8;
  y4[2]=19.3;
  y4[3]=12.9;
  y4[4]=11.34;
  y4[5]=9.93;
  y4[6]=15.4;
  y4[7]=10.1;
  y4[8]=8.1;
  
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

  y5[0]=21.64;
  y5[1]=20.5;
  y5[2]=18;
  y5[3]=14.6;
  y5[4]=10.9;
  y5[5]=9.23;
  y5[6]=8.87;
  y5[7]=8.0;
  y5[8]=9.2;
  
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
