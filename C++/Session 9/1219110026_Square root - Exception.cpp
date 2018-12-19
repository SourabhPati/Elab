#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  	int num;
  	cin>>num;
  	try
    {
      if(num<0)
        throw "Negative Number Not Possible";
      cout<<sqrt(num);
    }
	catch(const char* msg)
    {
      cout<<msg;
    }
	return 0;
}