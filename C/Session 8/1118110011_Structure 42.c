#include <stdio.h>

struct Student
{
  int roll;
  char name[50];
  char course[15];
  int fees;
}S;

int main()
{
  	scanf("%d%s%s%d",&S.roll,S.name,S.course,&S.fees);
  	printf("Roll no:%d\nName:%s\nCourse:%s\nFees:%d",S.roll,S.name,S.course,S.fees);
	return 0;
}