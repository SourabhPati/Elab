#include <iostream>
using namespace std;
int main()
{
	int marks;
  	cin>>marks;
  	try
    {
      if(marks<0 || marks>100)
        throw "Invalid Mark";
      cout<<"Valid Mark";
    }
  	catch(const char* msg)
    {
      cout<<msg;
    }
	return 0;
}