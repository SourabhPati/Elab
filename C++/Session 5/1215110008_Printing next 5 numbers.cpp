#include <iostream>
using namespace std;

union printnum
{
  int begin;
}p;

int main()
{
	cin>>p.begin;
  	for(int i=1;i<=5;++i)
      cout<<(p.begin + i)<<" ";
	return 0;
}