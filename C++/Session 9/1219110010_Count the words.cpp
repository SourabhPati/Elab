#include <iostream>
using namespace std;
int main()
{
  	string str;
  	try
    {
      cin>>str;
      for(char ch:str)
        if(isdigit(ch))
           throw(0);
      cout<<str.length();
    }
    catch(...)
    {
      	cout<<"Invalid input";
    }
	return 0;
}