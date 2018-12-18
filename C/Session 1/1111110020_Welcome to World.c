#include <stdio.h>
int main()
{
	char name[50],creator[50],purpose[50];
  	int mem;
  	float speed;
  	scanf("%s%s%s",name,creator,purpose);
  	scanf("%d%f",&mem,&speed);
  	printf("Robot Details\nI am the Robot named=%s",name);
  	printf("\nI was created by %s\nI am created for the purpose of %s",creator,purpose);
  	printf("\nMy memory space is around %dmb and my speed is %.1fTB",mem,speed);
	return 0;
}