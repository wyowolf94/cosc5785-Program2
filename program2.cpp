// Shaya Wolf
// COSC5785 - Compilers   
// Program 2
// program2.cpp
// 9/20/2017

#include<FlexLexer.h>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include "hdr.h"

using namespace std;

attributes *atts;

int main() {
  yyFlexLexer myScanner; 
  int rtn=999;
  string out = "Line\tColumn\tType\t\tLength\tValue\n";
  
  atts = new attributes{0,0,0,""};
    
  while (((rtn = myScanner.yylex()) != 0)) {
    out = out + to_string(atts->lNum) + "\t" +
                to_string(atts->cNum) + "\t" +
		atts->token + "\t\t" +
		to_string(atts->leng) + "\t" +
		atts->value + "\n";
  }
  
  cout << out;
  
  return 0 ;
}
