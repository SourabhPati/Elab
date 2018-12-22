#include <stdio.h>
#include<string.h>
int main()
{
	char ans[13] = "DennisRitchie",input[25];
  	scanf("%s",input);
  	if(strcmp(ans,input))
		printf("try again\nDennisRitchie");
  	else
      	printf("Good");
	return 0;
}