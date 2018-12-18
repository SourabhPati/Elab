#include <stdio.h>
int main()
{
  	int a,b,c,d,e,i;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  
    int ar[24]={a+b-c*d/e,a+b-c/d*e,a+b*c-d/e,a+b*c/d-e,a+b/c-d*e,a+b/c*d-e,
    a-b+c*d/e,a-b+c/d*e,a-b*c+d/e,a-b*c/d+e,a-b/c+d*e,a-b/c*d+e,
    a*b-c+d/e,a*b-c/d+e,a*b+c-d/e,a*b+c/d-e,a*b/c-d+e,a*b/c+d-e,
    a/b-c*d+e,a/b-c+d*e,a/b*c-d+e,a/b*c+d-e,a/b+c-d*e,a/b+c*d-e,};
  
    int min = 999999;
    for(i=0;i<24;i++)
        if(ar[i]>0 && ar[i]<min)
            min =ar[i];
    printf("%d",min);
	return 0;
}