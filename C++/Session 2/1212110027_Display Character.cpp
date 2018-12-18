#include <iostream>
using namespace std;
int main()
{
  	char ch;
  	cin>>ch;
  	if((int)ch>96 && (int)ch<123)
      	cout<<"small letter";
 	else if((int)ch>64 && (int)ch<91)
      	cout<<"capital letter";
  	else if((int)ch>47 && (int)ch<58)
      	cout<<"digit";
  	else	
      	cout<<"special symbol";

	return 0;
}