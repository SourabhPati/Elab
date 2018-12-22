#include <stdio.h>

struct dateOfBirth
{
  	int date;
  	int month;
  	int year;
};

struct student
{
  	char name[50];
  	int rollno;
  	struct dateOfBirth DOB;
};

int main()
{
	struct student std;
  	scanf("%s%d",std.name,&std.rollno);
  	scanf("%d%d%d",&std.DOB.date,&std.DOB.month,&std.DOB.year);
  	printf("Name=%s\nRollNo=%d",std.name,std.rollno);
  	printf("\nDate of birth=%d/%d/%d",std.DOB.date,std.DOB.month,std.DOB.year);
	return 0;
}