#include <stdio.h>
int main()
{
  	int t,year,oddDays,i,j;
  	char *days[7] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
  	scanf("%d",&t);
  	while(t--)
    {
      	oddDays = 0;
      	scanf("%d",&year);
      	i = 2001<year?2001:year;
      	j = 2001>year?2001:year;
      	for(i;i<=j;++i)
        {
          	if(i%4==0)
            oddDays += 2;
          	else
              	oddDays++;
        }
      	if(j==2001)
      		printf("%s\n",days[7-((oddDays-2)%7)]);
        else
        {
          if(j%4 == 0)
            oddDays--;
          printf("%s\n",days[oddDays%7]);
        }
    }
	return 0;
}