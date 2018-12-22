#include <stdio.h>
#include<ctype.h>
int main()
{
	char ch;
  	printf("The ASCII values of the string are:\n");
  	while(1)
    {
      ch = getchar();
      if(!isalpha(ch)) break;
      printf("%d ",ch);
    }
	return 0;
}