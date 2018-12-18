#include <stdio.h>
int main()
{
  	int score;
    scanf ("%d", &score);     
    int pushUps = 0,i;
    for (i = 7;i<=score;i+=7)
        pushUps += i;     
    printf ("%d",pushUps );     
    return 0;
}