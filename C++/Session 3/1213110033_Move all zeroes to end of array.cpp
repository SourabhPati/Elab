#include <iostream>
using namespace std;

void pushZerosToEnd(int [],int);
void getArray(int [],int);
void showArray(int [],int);

int main()
{
  	int arr[1000],len;
  	cin>>len;
  	getArray(arr,len);
  	pushZerosToEnd(arr,len);
  	showArray(arr,len);
	return 0;
}

void getArray(int ar[],int len)
{
  	for(int i=0;i<len;++i)
      cin>>ar[i];
}

void showArray(int arr[],int len)
{
  	for(int i=0;i<len;++i)
      cout<<arr[i]<<" ";
}

void pushZerosToEnd(int ar[],int len)
{
  	for(int i=0;i<len;++i)
    {
      bool flag = false;
      if(ar[i] == 0)
      {
        for(int j=i;j<len-1;++j)
        {
          if(ar[j]!=0)
            flag = true;
          ar[j] = ar[j+1];
        }
        ar[len-1] = 0;
        if(flag)
          i--;
      }
    }
}