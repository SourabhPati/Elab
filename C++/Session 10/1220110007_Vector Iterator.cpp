#include <iostream>
#include<vector>
using namespace std;
int main()
{
  	int len,temp;
  	cin>>len;
  	vector<int> myvector;
  	while(len--)
    {
      cin>>temp;
      myvector.push_back(temp);
    }
  	vector<int>::iterator it = myvector.begin();
  	for(it;it!=myvector.end();++it)
      cout<<*it<<" ";
  	cout<<"\n";
    vector<int>::reverse_iterator itr = myvector.rbegin();
  	for (; itr!= myvector.rend(); ++itr)
      cout<<*itr<<" ";
  	
  	

	return 0;
}