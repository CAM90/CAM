
#include <iostream>
#include <string>
#include"gitway.h"
using namespace std;


void gitway::inbut_prudcet(string p, float c, int d)
{


	cout << " enter prudcet\t\t";
	cin >> p;
	prudcet = p;
	cout << " enter prncic\t\t";
	cin >> c;
	prncic = c;
	cout << " data\t\t";
	cin >> d;
	data = d;
	cout << "thanks";
}

float gitway::inbut_discount()
{
	float dis;
	cout << "enter discount";
	cin >> dis;
	Discountl = dis;
	cout << "\n";
	cout << Discountl;

	return  0;

}

void gitway::out()
{
	cout << "Discountl " << Discountl << "\n" << "\n" << "prncic" << prncic << "\n" << "prudcet" << prudcet << "\n" << "data" << data << "\end";
}


int gitway::getcount()
{
	return count;
}

int gitway::add(int c, int x)
{
	int sum;
	sum = c + x;
	return sum ;
}






