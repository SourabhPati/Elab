#include<bits/stdc++.h>
using namespace std;
int main()
{
  	string num;
	cin >> num;
  	string orig = num;
  	reverse(num.begin(),num.end());
  	if(orig == num)
      cout<<"YES";
  	else
      cout<<"NO";
	return 0;
}