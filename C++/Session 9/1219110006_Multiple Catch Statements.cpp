#include <iostream>
using namespace std;
int main()
{
  	int t;
  	string num;
  	cin>>t;
  	while(t--)
    {
      	try
      	{
      		cin>>num;
      		if(stof(num)<1)
        	throw "Wrong Input";
	  		cout<<stof(num)<<"\n";
      	}
    	catch(const char* msg)
    	{
      		cout<<msg<<"\n";
    	}
  		catch(...)
    	{
      		cout<<"Wrong Input\n";
    	}
    }
	return 0;
}