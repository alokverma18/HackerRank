#include <stdio.h>
int main() {

    float tractLand,tractLandacres;
    printf("Enter area in Sq. ft: ");
    scanf("%f",&tractLand);
    tractLandacres=(float)tractLand/43560;
    printf("%.2f sq.ft is equal to %.2f acres",tractLand,tractLandacres);   
    return 0;
}