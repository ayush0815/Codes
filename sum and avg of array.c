#include <stdio.h>

int main()
{ 
    int size,i;
    float total,average;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int x[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for (i = 0; i <size; i++)
    {
        total=total+x[i];
    }
 
    average = total/size;
 
    printf("Sum of all numbers is %.2f\n", total);
 
    printf("Average of all input numbers is %.2f\n", average);

    return 0;
}
