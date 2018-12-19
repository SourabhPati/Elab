#include <iostream>
using namespace std;
int main()
{
	int num;
  	cin>>num;
  	try
    {
      if(num == 1)
      	throw(int(0));
      if(num == 2)
        throw(float(0));
      throw "trash";
    }
  	catch(float num)
    {
      cout<<"Float Exception\nException number=25.23";
    }
  	catch(int num)
    {
      cout<<"Integer Exception\nException number=25";
    }
  	catch(...)
    {
      cout<<"Default Exception\nWrong Number Used, Input 1 or 2";
    }
	return 0;
}