#include <iostream>
using namespace std;

template<class T>
T displayresult(T a,T b)
{
  cout<<a<<"\n"<<b<<"\n"<<(a/b);
}

int main()
{
  	float a,b;
  	cin>>a>>b;
  	displayresult(a,b);
	return 0;
}