#include <stdio.h>
void getArray(int [],int);
int main()
{
	int N,price[1000],Q,budget[1000],i,j,count;
	scanf("%d",&N);
  	getArray(price,N);
  	scanf("%d",&Q);
  	getArray(budget,Q);
  	for(i=0;i<Q;++i)
    {
      count = 0;
      for(j=0;j<N;++j)
        if(budget[i]>=price[j])
          count++;
      printf("%d\n",count);
    }
	return 0;
}
void getArray(int ar[],int len)
{
	int i;
	for(i=0;i<len;++i)
		scanf("%d",&ar[i]);	
}