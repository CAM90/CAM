#pragma once
#include <iostream>
#include <string>
#include "gitway.h"
#include"panda.h"

using namespace std;
class gitway

{

	string prudcet;
	float prncic;
	float Discountl;
	int data;
	 int count;

public:

	
	gitway hob();
	void inbut_prudcet(string p, float c, int d);
	float inbut_discount();
	 void out();
	 gitway g1(gitway h);
		
	 int getcount();
	 int static add(int c, int x);

	
	 
	
	
	 gitway():prudcet(0),prncic(0),Discountl(0),data(0),count(0){}

	 gitway(string pr, float prnc, float Dis, int data, int count) : prudcet(pr), prncic(prnc), Discountl(Dis), data(data), count(count)
	 {}
};



