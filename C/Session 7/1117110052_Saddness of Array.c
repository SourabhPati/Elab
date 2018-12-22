#include <stdio.h>
int main()
{
	int sadness[1000],ar[1000],len,i,j,sad;
  	scanf("%d",&len);
  	for(i=0;i<len;++i)
    {
      	sadness[i] = -1;
      	scanf("%d",&ar[i]);
    }
  	for(i=0;i<len-1;++i)
    {
      	sad=0;
      	for(j=i+1;j<len;++j)
        {
          	sad++;
          	if(ar[i] == ar[j])
            {
              sadness[i] = sad;
              sadness[j] = sad;
            }
        }
    }
  	for(i=0;i<len;++i)
      printf("%d ",sadness[i]);
	return 0;
}