#include <iostream>
using namespace std;

template<class T>
T sum(T ar[])
{
  T sum = 0;
  for(int i=0;i<5;++i)
  	sum += ar[i];
  return sum;
}

int main()
{
	int ar[5];
  	float arr[5];
  	for(int i=0;i<5;++i)
      cin>>ar[i];
  	for(int i=0;i<5;++i)
      cin>>arr[i];
  	cout<<(sum<int>(ar))<<"\n";
  	cout<<(sum<float>(arr));
	return 0;
}