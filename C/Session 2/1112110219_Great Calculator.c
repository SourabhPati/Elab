#include <stdio.h>
int main()
{
	int choice,a,b,flag = 1;
  	float res;
  	scanf("%d%d%d",&choice,&a,&b);
  	switch(choice)
    {
      case 1:
        res = a + b;
       	break;
      case 2:
        res = a - b;
        break;
      case 3:
        res = a * b;
        break;
      case 4:
        res = a/b;
        break;
      default:
          printf("Invalid Input");
          flag = 0;
    }
  	if(flag)
  		printf("%d",(int)res);
	return 0;
}