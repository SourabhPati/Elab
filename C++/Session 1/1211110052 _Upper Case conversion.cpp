#include <iostream>
using namespace std;
int main()
{
  	string str;
  	cin>>str;
	for(auto & c : str)
      cout<< (char)toupper(c);

	return 0;
}