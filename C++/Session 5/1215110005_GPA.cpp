#include <iostream>
using namespace std;
int main()
{
  	float *ptr;
  	float len,temp,ar[1000];	
  	cin>>len;
  	for(int i=0;i<len;++i)
		cin>>ar[i];
  	ptr = ar;
  	for(int i=0;i<len;++i,++ptr)
		cout<<"GPA of student "<<i+1<<" is "<<*ptr<<"\n";
	return 0;
}