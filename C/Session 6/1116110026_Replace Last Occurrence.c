#include <stdio.h>
#include<string.h>
int main()
{
	char str[100],a,b,trash;
  	scanf("%s",str);
  	int len = strlen(str),i;
  	scanf("%c%c%c%c",&trash,&a,&trash,&b);
  	for(i=len-1;i>=0;--i)
      if(str[i] == a)
      {
        	str[i] = b;
        	break;
      }
  	printf("%s",str);
	return 0;
}