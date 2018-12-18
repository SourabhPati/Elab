#include <bits/stdc++.h>
using namespace std;
int main()
{
  	string res = "";
  	char input[1000] = {};
  	cin.getline(input,1000);
  	for(char ch:input)
      if(isalpha(ch))
        res += ch;
  	cout<<res;

	return 0;
}