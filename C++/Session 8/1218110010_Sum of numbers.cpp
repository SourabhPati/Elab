#include <iostream>
using namespace std;

template<class T>
  T sum(T a,T b)
	{
  		return (a+b);
	}

int main()
{
	float a,b,c,d;	
  	cin>>a>>b>>c>>d;
  	cout<<(sum(a,b))<<"\n";
  	cout<<(sum(c,d))<<"\n";
  	cout<<(sum(a,c));
	return 0;
}