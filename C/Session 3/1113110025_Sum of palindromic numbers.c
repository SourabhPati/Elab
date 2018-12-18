#include <stdio.h>
int main()
{
  	int numAr[100],num,t,a,b,i,sum,flag,len;
  	scanf("%d",&t);
    while(t--)
    {
      sum = 0;
      scanf("%d%d",&a,&b);
      for(i=a;i<=b;++i)
      {
        len = toArray(i,numAr);
        flag = checkPalin(numAr,len);
        if(flag)
          sum += i;
      }
      printf("sum is %d\n",sum);
    }

	return 0;
}

int checkPalin(int num[],int len)
{
  int i,j,flag=1;
  for(i=0,j=len-1;i<len/2;++i,--j)
    if(num[i]!=num[j])
      flag = 0;
  return flag;
}

int toArray(int num,int ar[])
{
  int i=0;
  while(num>0)
  {
    ar[i] = num%10;
    num/=10;
    ++i;
  }
  return i;
}