#include <iostream>
using namespace std;
int main()
{
  	string res = "aabbacbaac";
  	int *ptr;
  	int num;
  	cin>>num;
  	ptr = &num;
  	for(int i=0;i<*ptr;++i)
      cout<<res[i];
	return 0;
}