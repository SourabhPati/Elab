#include <stdio.h>

struct student
{
  	char name[50];
  	int roll;
  	float marks;
};

int main()
{
	struct student s[3];
  	int i;
  	for(i=1;i<=3;++i)
    {
      	scanf("%s%f",s[i].name,&s[i].marks);
      	printf("Roll number=%d\nName=%s\nMarks=%.2f\n",i,s[i].name,s[i].marks);
    }
	return 0;
}