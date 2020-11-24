#include "panda.h"
#include<string>
void panda::name()
{
	string m;
	cout << "please enter name ";
	cin >> m;
	
		neam = m;

}

void panda::maared()
{
	string k;
	cout << "enter cacs mared";
	cin>>k;
	mared = k;

}

void panda::agee()
{
	int l;
	cout<<"enter age ";
	cin >> l;
	age = l;
}

void panda::phonee()
{
	int h;
	cout<< "enter phone";
	cin >> h;
	phone = h;

}

void panda::outer()
{

	cout << "name\n" << neam << "mareed\n" << mared << "age\n" << age << "phone\n";
}
