#include <iostream>
using namespace std;
// no test case with 3rd condition (0 or greater than 100)
int main()
{
  	string output[2] = {"BRIGHT FUTURE!!","INVALID NUMBER"};
  	int input;
  	cin>>input;
  	if(input>0 && input<100)
  		cout<<output[input%2];
  	else
      	cout<<output[1];

	return 0;
}