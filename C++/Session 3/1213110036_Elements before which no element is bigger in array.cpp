#include <iostream>
using namespace std;

int countElements(int [],int);

int main()
{
  	int len,arr[10000];
  	cin>>len;
	for(int i=0;i<len;++i)
      	cin>>arr[i];
  	int res = countElements(arr,len);
  	cout<<res;
  	
	return 0;
}

int countElements(int arr[],int len)
{
  int count=0;
  for(int i=1;i<len;++i)
    {
      for(int j=0;j<i;++j)
      {
        if(arr[j]>arr[i])
          break;
        if(j==(i-1))
          ++count;
      }
    }
  	return count+1;
}