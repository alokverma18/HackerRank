# include <stdio.h>
int main() {
    int m,n,a,b,c;
    printf("Enter length and breadth: ");
    scanf("%d %d",&m,&n);
    a=m*n;
    if(a%2==0){
        b=a;   
    }
    else{
        b=a+1;
    }
    c=b/2;
    printf("%d",c);
}