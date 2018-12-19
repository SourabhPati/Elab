#include <iostream>
using namespace std;

struct feet
{
  int feet = 0;
  int inches = 0;
}f;
  
int main()
{
  	int temp;
  	for(int i=0;i<4;++i)
    {
      cin>>temp;
      if(i%2==0)
        f.feet += temp;
      else
        f.inches += temp;
    }  	
  	f.feet += (f.inches/12);
  	f.inches %= 12;
  	cout<<f.feet<<" feet "<<f.inches<<" inches";

	return 0;
}