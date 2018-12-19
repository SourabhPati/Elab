#include <iostream>
using namespace std;
int main()
{
  	int num;
  	char ch;
  	try
    {
      cin>>num;
      cin.get(ch);
      if(ch == '.')
        cout<<"Valid Input";
      else
        throw(1);
    }
  	catch(...)
    {
      cout<<"Number format exception";
    }
	return 0;
}