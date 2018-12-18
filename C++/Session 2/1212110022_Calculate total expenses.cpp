#include <iostream>
using namespace std;
int main()
{
  	int price,number,total,expense;
  	cin>>price>>number;
  	total = price*number;
  	if(total < 5000)
      	expense = total;
  	else
      	expense = total - (total*0.1);
  	cout<<expense;

	return 0;
}