#include <iostream>
using namespace std;

void getArray(int [],int);
void printArray(int [],int);
void leftRotate(int [],int,int);

int main()
{
  	int arr[1000],len,d;
  	cin>>len;
  	getArray(arr,len);
  	cin>>d;
  	leftRotate(arr,d,len);
  	printArray(arr,len);

	return 0;
}

void getArray(int arr[],int len)
{
  for(int i=0;i<len;++i)
    cin>>arr[i];
}

void printArray(int arr[],int len)
{
  for(int i=0;i<len;++i)
    cout<<arr[i]<<" ";
}

void leftRotate(int arr[],int d,int len)
{
  int temp;
  for(int j=0;j<d;++j)
  {
    temp = arr[0];
    for(int i=0;i<len-1;++i)
      arr[i]=arr[i+1];
  	arr[len-1] = temp;
  }
}