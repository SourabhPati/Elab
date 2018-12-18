#include <iostream>
using namespace std;
int main()
{
  //Accepts INDIA for 21 and ENGLAND for 20
  	int num;
  	cin>>num;
  	if(num<=0)
      cout<<"Sorry";
  	else if(num % 2 == 1)
      cout<<"INDIA";
  	else
      cout<<"ENGLAND";
  
	return 0;
}