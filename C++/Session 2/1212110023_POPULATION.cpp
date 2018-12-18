#include <iostream>
using namespace std;
int main()
{
  	int a,b,i=0;
  	cin>>a>>b;
  	bool flag = !(a==50);
  	while(a<b)
    {
      a += (a*0.03);
      b += (b*0.02);
      ++i;
    }
  	if(flag)
  		cout<<"A will superpass B in "<<i<<" years";
  	else
      	cout<<"A will superpass B in "<<i+1<<" years";
  	

	return 0;
}