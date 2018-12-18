#include <stdio.h>
int main()
{
	char last,i;
  	int j;
  	scanf("%c",&last);
  	for(i='A';i<=last;++i)
    {
      for(j=0;j<=(int)(i-65);++j)
        printf("%c",i);
      printf("\n");
    }
  
	return 0;
}