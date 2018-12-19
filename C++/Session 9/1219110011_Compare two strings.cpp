#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
    try
    {
  	  getline(cin,s1,'\n');
      for(char ch:s1)
        if(isdigit(ch))
          throw(1);
      getline(cin,s2,'\n');
      if(s1==s2)
        cout<<s1<<" IS "<<s2;
      else
        cout<<s1<<" IS NOT "<<s2;
    }
  	catch(int trash)
    {
      cout<<"Invalid Input";
    }
	return 0;
}