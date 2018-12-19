#include <iostream>
using namespace std;
int main()
{
  	int ar[1000]={},len;
  	cin>>len;
  	try
    {
      if(len<0 || len>20)
        throw "Exception occurred";
      for(int i=0;i<len;++i)
      	cin>>ar[i];
      for(int i=len-1;i>=0;--i)
        cout<<ar[i]<<" ";
    }
  	catch(const char* msg)
    {
      cout<<msg;
    }

	return 0;
}