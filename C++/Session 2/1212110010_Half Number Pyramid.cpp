#include <iostream>
using namespace std;
int main()
{
  	int last;
  	cin>>last;
  	for(int i=1;i<=last;++i)
    {
      for(int j=1;j<=i;++j)
        	cout<<j<<" ";
      cout<<"\n";
    }

	return 0;
}