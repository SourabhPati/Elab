#include <iostream>
using namespace std;
int main()
{
  	int num;
  	cin>>num;
  	if(num<0)
      cout<<"Sorry";
  	else if(num%2 == 0)
      cout<<"AUSSIE";
  	else
      cout<<"INDIA";

	return 0;
}