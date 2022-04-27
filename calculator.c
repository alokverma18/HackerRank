#include <stdio.h>
int main(){
    int b,c,d;
    char a;
    printf("Enter your Name (single char only): ");
    scanf("%c",&a);
    printf("\nHello %c",a);
    printf("\nWelcome to my Python Calculator!!!");
    printf("\nEnter first number: ");
    scanf("%d",&b);
    printf("\nEnter second number: ");
    scanf("%d",&c);
    printf("\nPress 1 for Sum\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\n");
    scanf("%d",&d);
    if (d==1){
        printf("%d",b+c);}
    else if (d==2){
        printf("%d",b-c);}
    else if (d==3){
        printf("%d",b*c);}
    else if (d==4){
        printf("%d",b/c);}
    else{
        printf("\nEnter only these numbers (1,2,3,4)");}
    printf("\nThank You %c",a);
    return 0;
}

