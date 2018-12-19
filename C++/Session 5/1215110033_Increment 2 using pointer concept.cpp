#include <iostream>
using namespace std;
int main()
{
	long* pnumber=NULL;
  	long int a,b;
  	cin>>a>>b;
  	pnumber = &a;
  	*pnumber += 11;
  	cout<<*pnumber<<"\n";
  	pnumber = &b;
  	*pnumber *= 10;
  	cout<<*pnumber;
	return 0;
}