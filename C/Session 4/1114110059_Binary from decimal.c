#include <stdio.h>
void putArray(int [],int);

int main()
{
  	int binary[7] = {0,0,0,0,0,0,0},dec,i=6;
  	scanf("%d",&dec);
  	while(dec>0)
    {
      binary[i] = dec % 2;
      dec /= 2;
      i--;
    }
	putArray(binary,7);
	return 0;
}
void putArray(int ar[],int len)
{
	int i;
	for(i=0;i<len;++i)
		printf("%d",ar[i]);	
}