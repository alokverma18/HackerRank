#include <stdio.h>
int main() {

    int seconds,days,hours,minutes;
    int s;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    days=s/(86400);
    s=s%86400;
    hours=s/3600;
    s=s%3600;
    minutes=s/60;
    seconds=s%60;
    printf("The Duration is %d days %d hours %d minutes %d seconds",days,hours,minutes,seconds);    
    return 0;
}