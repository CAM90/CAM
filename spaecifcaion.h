#pragma once
#include "gitway.h"
#include"panda.h"
#include"string"
class spaecifcaion : public gitway ,public panda
{
public:
	int power;
	string typ;

public:
	spaecifcaion() :power(0), typ(0) {

	}
	spaecifcaion(string pr, float prnc, float Dis, int data, int count, string t, int y) :gitway(pr, prnc, Dis, data, count)
	{

		power = y;
		typ = t;


	}
	void poewtyp();
	void out()
	{
		gitway::out();
	

		cout<<"power"<<power<<"typ" << typ;


	}

	
};


