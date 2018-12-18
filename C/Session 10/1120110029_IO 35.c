#include <stdio.h>
int main()
{
  	char name[25];
  	float price,bill;
  	int quantity;
  	scanf("%s%f%d",name,&price,&quantity);
  	bill = price * quantity;
  	printf("Product Details\n");
  	printf("%s\n%.2f\n%d\nBill:%.2f",name,price,quantity,bill);
	return 0;
}