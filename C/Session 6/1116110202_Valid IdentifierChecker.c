#include <stdio.h>
#include<ctype.h>
int main()
{
  	char str[100];
	scanf("%s",str);
  	if(isalpha(str[0]))
       printf("valid identifier");
    else
       printf("not a valid identifier");
	return 0;
}