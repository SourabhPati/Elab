#include <stdio.h>
int main()
{
  	int N,even=0,odd=0,i,temp;
  	scanf("%d",&N);
  	for(i=0;i<N;++i)
    {
      scanf("%d",&temp);
      if(temp%2==0) 
        even++;
      else 
        odd++;
    }
  	if(even>odd)
      printf("READY FOR BATTLE");
  	else
      printf("NOT READY");

	return 0;
}