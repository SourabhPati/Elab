#include <stdio.h>
int GetResAndfreqReset(int []);
int main()
{
  	int freq[101]={},t,len,res,i,temp;
	scanf("%d",&t);
  	while(t--)
    {
      	scanf("%d",&len);
      	for(i=0;i<len;++i)
        {
          scanf("%d",&temp);
          freq[temp-1]++;
        }
      	res = GetResAndfreqReset(freq);
      	printf("%d\n",res);
    }
	return 0;
}
int GetResAndfreqReset(int ar[])
{
  int i,res=0;
  for(i=0;i<101;++i)
  {
    	if(ar[i]>0)
          	res++;
    	ar[i] = 0;
  }
  return res;
}