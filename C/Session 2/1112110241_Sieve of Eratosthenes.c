#include <stdio.h>
int main()
{
  	int last,i,j,flag;
  	scanf("%d",&last);
  	for(i=3;i<=last;++i)
    {
      flag = 1;
      for(j=2;j<=i/2;++j)
      {
        if(i%j == 0)
          flag = 0;
      }
      if(flag)
        printf("%d\n",i);
    }

	return 0;
}