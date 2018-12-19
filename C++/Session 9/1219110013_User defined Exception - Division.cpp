#include <iostream>
#include<exception>
using namespace std;

class Divide_By_Zero_Exception:public exception
{
	public:
	const char * what() const throw()
    {
		return "Divide By Zero Exception";
    }
};

int main()
{
  	Divide_By_Zero_Exception d;
	int a,b;
  	try
    {
      	cin>>a>>b;
  		if(b==0)
      		throw d;
      	cout<<(a/b);
    }
  	catch(exception& e)
    {
      cout<<e.what();
    }
	return 0;
}