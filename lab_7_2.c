#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomFn(){
    int max = 100, 
    min = -100,
    a = 0;
    a = rand() % (min - max + 1) + min;
    return a;
}

int * createArray(){
    static  int array[10];
    for (int i = 0; i < 10; i++)
        array[i]=randomFn();

    for (int i = 0; i < 2; i++)
       array[rand() % (0 - 9 + 1) + 0] = 0;
   
    return array;
};

int * numMax(int array[]){
    for (int i = 0; i < 10; i++)
       printf("%d\t",array[i]);
       
       printf("\n");
    int max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if(array[i]> max)
        max = array[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if(max == array[i]){
             printf("The number of the largest element in the array: %d\n" ,i);
             break;
        }
        
    }
    return array;
    
}
int * modul(int array[]){
    int first_0,
    last_0,
    sumaModul =0;
    for (int i = 0; i < 10; i++)
    {
        if(array[i] == 0)
        {
            first_0 = i;
               break;  
        }
    }
    
    for (int i = 10 - 1 ; i > first_0; i--)
    { 

        if(array[i] == 0)
        {
            last_0 = i;
            break;
        }
       
    }
    if(last_0 !=0 && last_0 <9)
      for (int i = first_0 +1; i < last_0; i++)
    {
        
        printf("%d\t" , array[i]);
    }
        printf("\n");
    for (int i = first_0 + 1; i < last_0 ; i++)
    {
        if(i > 9 ) break;
        if(array[i] >=0)
            sumaModul += array[i] ;
        else if(array[i] <=0)
             sumaModul += array[i] *(-1);
        
    }
    printf("The sum of the modules : %d", sumaModul);
    printf("\n");
}
int main(){
    srand(time(NULL));
    int *array = createArray();
    numMax(array);
    modul(array);
}