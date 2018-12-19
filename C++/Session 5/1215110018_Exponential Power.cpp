#include <iostream>
#include<math.h>
using namespace std;

struct power
{
  int base;
  int exponent;
}p;

int main()
{
  	cin>>p.base>>p.exponent;
  	cout<<(pow(p.base,p.exponent));
	return 0;
}