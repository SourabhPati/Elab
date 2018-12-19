#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  	int *ptr;
  	int n,k;
  	float temp,sum=0;
  	cin>>n>>k;
  	ptr = &n;
  	for(int i=0;i<*ptr;++i)
    {
      cin>>temp;
      sum += ceil(temp/k);      
    }
  	cout<<(ceil(sum/2));
	return 0;
}