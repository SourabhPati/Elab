#include <iostream>
using namespace std;

void nextGreatest(int [],int);

int main()
{
  	int len,arr[10000];
  	cin>>len;
	for(int i=0;i<len;++i)
      	cin>>arr[i];
  	nextGreatest(arr,len);
  	for(int i=1;i<len;++i)
  		cout<<arr[i]<<" ";
  	cout<<"-1";
	return 0;
}

void nextGreatest(int arr[],int len)
{
  int count=0;
  for(int i=0;i<len-1;++i)
    {
      for(int j=i+1;j<len;++j)
      {
        if(arr[j]>arr[i])
          arr[i]=arr[j];
      }
    }
}