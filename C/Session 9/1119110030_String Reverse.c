#include <stdio.h>
#include<string.h>
int main()
{
	char str[1000];
  	scanf("%s",str);
  	int i;
  	printf("Reverse of the string is:");
  	for(i=strlen(str)-1;i>=0;--i)
      	printf("%c",str[i]);
	return 0;
}