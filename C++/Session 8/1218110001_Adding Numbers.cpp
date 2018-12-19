#include <iostream>
using namespace std;

template<class T>
  T Calculator(T a,T b)
	{
  		return (a+b);
	}

float res1,res2;
void displayResult();

int main()
{
	int a,b;
  	float c,d;
  	cin>>a>>b>>c>>d;
  	res1 = Calculator(a,b);
  	res2 = Calculator(c,d);
  	displayResult();
	return 0;
}

void displayResult()
{
  cout<<res1<<"\n";
  cout<<res2;
}