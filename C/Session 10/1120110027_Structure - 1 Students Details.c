#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[30];
	char department[20];
	int yearOfStudy;
	float cgpa;
};

int compare(const void *p,const void *q)
{
    int i;
	char *first = ((struct Student *)p)->name;
	char *second = ((struct Student *)q)->name;
	for(i=0;first[i]!='\n';++i)
    {
        if(first[i]<second[i])
            return -1;
        if(second[i]<first[i])
            return 1;
    }
    return 0;
}

int main()
{	
  	struct Student students[100];
	int n,i;
  	scanf("%d",&n);
  	for(i=0;i<n;++i)
      scanf("%s%s%d%f",students[i].name,students[i].department,&students[i].yearOfStudy,&students[i].cgpa);
  	qsort (students,n,sizeof(struct Student), compare);
  	for(i=0;i<n;++i)
      printf("Name:%s\nDepartment:%s\nYear of study:%d\nCGPA:%.1f\n",students[i].name,students[i].department,students[i].yearOfStudy,students[i].cgpa);
	return 0;
}