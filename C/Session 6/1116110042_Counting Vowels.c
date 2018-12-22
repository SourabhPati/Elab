#include <stdio.h>
#include<string.h>
int main()
{
	int count = 0,i;
  	char str[100];
  	scanf("%s",str);
  	for(i=0;i<strlen(str);++i)
      	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
          count++;
  	printf("%d",count);
	return 0;
}