#include <stdio.h>
int main()
{
  	int rows,i,j,k,temp = 0;
  	scanf("%d",&rows);
  	for(i=1;i<=rows;++i)
    {
      for(k=0,j=temp+1;k<i;++j,++k)
      {
        printf("%d ",j);
        temp = j;
      }
      printf("\n");
    }
  

	return 0;
}