#include <iostream>
using namespace std;
int main()
{
  	int h,m,s;
  	cin>>h>>m>>s;
  	cout<<"24 Hours Format\n";
  	cout<<h<<":"<<m<<":"<<s<<"\n";
    cout<<"12 Hours Format\n";
  	if(h>12)
  		cout<<(h%12)<<":"<<m<<":"<<s<<"pm\n";
  	else
      cout<<(h%12)<<":"<<m<<":"<<s<<"am\n";

	return 0;
}