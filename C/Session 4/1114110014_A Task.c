#include <stdio.h>
int main()
{
  	int max,t1,t2,t3;
  	scanf("%d%d%d%d",&max,&t1,&t2,&t3);
      if((t1<t2) && (t1<t3) && (t1<max))
        printf("First person wins!!");
      else if((t2<t1) && (t2<t3) && (t2<max))
        printf("Second person wins!!");
      else if(t3<max)
        printf("Third person wins!!");
  	  else
    	printf("No person wins!!");
	return 0;
}