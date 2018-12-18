#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,p,wcl;
  scanf("%f %f",&a,&b);
  p=pow(b,0.16);
  wcl=13.12+(0.6215*a)-(11.37*p)+(0.3965*a*p);
  printf("Windchill is %.2f",wcl);
  return 0;
}