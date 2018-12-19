#include <iostream>
using namespace std;

template<class T>
T min(T a,T b,T c)
{
  return (a<b&&a<c?a:(b<c&&b<a?b:c));
}

int main()
{
  	float a,b,c,res;
  	cin>>a>>b>>c;
	res = min(a,b,c);
  	cout<<res;
  	return 0;
}