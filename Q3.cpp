#include<iostream>
using namespace std;
int main()
{
	int bbro;
	int bro;
	cout<<"enter a number ; ";
	
	cin>>bbro;
	cout<<"\n"<<bbro;
	bro=bbro;
	bro=bro<<1;
	cout<<"\nDouble: "<<bro;
	bro=bro+10;
	cout<<"\nAdded 10: "<<bro;
	
	bro=bro>>1;
	cout<<"\nhalved: "<<bro;
	bro=bro-bbro;
	cout<<"\nSubstracted "<<bbro<<"="<<bro;
	
	
}
