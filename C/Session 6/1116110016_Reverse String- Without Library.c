#include <stdio.h>
#include<string.h>
int main()
{
	char str[1000];
  	int i;
  	scanf("%s",str);
  	printf("%s\n",str);
  	for(i=strlen(str)-1;i>=0;--i)
      	printf("%c",str[i]);
	return 0;
}