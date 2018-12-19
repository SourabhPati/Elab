#include <iostream>
using namespace std;

template<class T>
T Large(T a,T b)
{
  return (a<b?a:b);
}

int main()
{
  	int a,b;
  	float c,d;
  	char e,f;
  	cin>>a>>b>>c>>d>>e>>f;
  	cout<<Large<int>(a,b)<<"\n";
  	cout<<Large<float>(c,d)<<"\n";
  	cout<<Large<char>(e,f)<<" is the lowest ASCII value";
  	return 0;
}