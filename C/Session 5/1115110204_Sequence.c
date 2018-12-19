#include <stdio.h>
void getArray(int [],int);
int main()
{
  	int t;
  	scanf("%d",&t);
  	while(t--)
    {
      	int len,ar[1000],subAr[100],subLen,i,j,flag = 0;
		scanf("%d",&len);
      	getArray(ar,len);
      	scanf("%d",&subLen);
      	getArray(subAr,subLen);
      	for(i=0;i<len-subLen+1;++i)
        {
          if(ar[i]==subAr[0])
          {
            flag = 1;
            for(j=i;j<subLen+i;++j)
              if(ar[j]!=subAr[j-i])
              {
                flag = 0;
                break;
              }
          }
        }
      if(flag)
        printf("Yes\n");
      else
        printf("No\n");
    }
	return 0;
}
void getArray(int ar[],int len)
{
	int i;
	for(i=0;i<len;++i)
		scanf("%d",&ar[i]);	
}