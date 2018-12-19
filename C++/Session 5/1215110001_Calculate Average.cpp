#include <iostream>
using namespace std;

struct avg
{
  char name[51];
  int m1,m2,m3;
}avg1;

int main()
{
	cin>>avg1.name>>avg1.m1>>avg1.m2>>avg1.m3;
  	cout<<avg1.name<<"\n";
  	cout<<((avg1.m1+avg1.m2+avg1.m3)/3.0);
  	
	return 0;
}