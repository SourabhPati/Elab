#include <stdio.h>
struct College
{
char name[100];
char city[100];
int establishmentYear;
float passPercentage;
};
int compare(const void *p,const void *q)
{
    int i;
	char *first = ((struct College *)p)->name;
	char *second = ((struct College *)q)->name;
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
	struct College S1[100];
	int n,i;
  	scanf("%d",&n);
  	for(i=0;i<n;++i)
      scanf("%s%s%d%f",S1[i].name,S1[i].city,&S1[i].establishmentYear,&S1[i].passPercentage);
  	qsort (S1,n,sizeof(struct College), compare);
  	printf("Details of colleges\n");
  	for(i=0;i<n;++i)
      printf("Name:%s\nCity:%s\nYear of establishment:%d\nPass percentage:%.1f\n",S1[i].name,S1[i].city,S1[i].establishmentYear,S1[i].passPercentage);
	return 0;
}