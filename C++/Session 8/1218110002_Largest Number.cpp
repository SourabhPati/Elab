#include <iostream>
using namespace std;

template<class T>
T Large(T n1,T n2)
{
  	return (n1>n2?n1:n2);
}

int main()
{
  	int a,b;
  	float c,d;
  	cin>>a>>b>>c>>d;
  	cout<<(Large(a,b))<<"\n";
  	cout<<(Large(c,d));
	return 0;
}