// Shaya Wolf
// COSC5785 - Compilers 
// Program 2
// attributes.h
// 9/20/2017

#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

#include<iostream>
#include<string.h>

using namespace std; 

struct attributes{
  int lNum;
  int cNum;
  int leng;
  string token;
  string value;
};

void updateAtts(int lNum, int cNum, int leng, string token, string value);

#endif
