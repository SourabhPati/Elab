#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int len,ar[100];
  	cin>>len;
  	for(int i=0;i<len;++i)
      cin>>ar[i];
  	sort(ar,ar+len);
  	cout<<ar[len/2];
	return 0;
}