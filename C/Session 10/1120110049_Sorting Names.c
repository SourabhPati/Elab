#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct string
{
  	char name[100];
};

int compare(const void *p,const void *q)
{
    int i;
	char *first = ((struct string *)p)->name;
	char *second = ((struct string *)q)->name;
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
	int len,i;
  	scanf("%d",&len);
  	struct string names[30];
	for(i=0;i<len;++i)
      	scanf("%s",names[i].name);
  	qsort(names,len,sizeof(struct string),compare);
  	for(i=0;i<len;++i)
      	printf("%s\n",names[i].name);
	return 0;
}