#include <iostream>
using namespace std;

template<class T>
  T displayresult(T a,T b)
	{
  		return (a*b);
	}

int main()
{
	float a,b;	
  	cin>>a>>b;
  	cout<<a<<"\n"<<b<<"\n"<<(displayresult(a,b));
	return 0;
}