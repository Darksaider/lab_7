#include <stdio.h>
#include <stdlib.h>
int fn(){
    int years,num3,num2;
    // printf("Enter your age : ");
    // scanf("%d",&years);
    do{
    printf("Enter your age : ");
    scanf("%d",&years);
    }
    while (years <= 0 || years > 150);
    
    num2 = ((years - (years % 10)) - (years - (years % 100))) / 10;
    num3 =years %10;
    if (num3 > 4 && num3 != 1 || num2 == 1 || num3 == 0)
    return 3;
    else if(num3 <= 4 &&  num3 != 1 )
    return 2;
    else if (num3 == 1 &&  num2 != 1)
    return 1;
    return 0;
}
int main(){
   printf("Result: %d \n", fn());
}
