#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  	int arr[1000],len,temp;
  	cin>>len;
  	for(int i=0;i<len;++i)
    {
      cin>>temp;
      arr[i] = temp*temp;
    }
  	sort(arr,arr+len);
  	for(int i=0;i<len;++i)
      cout<<arr[i]<<" ";
	return 0;
}