#include <stdio.h>

int main()
{ 
    int size,i,min,max;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int x[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    
    min=max=x[0];
    for(i=1; i<size; i++)
    {
         if(min>x[i])
		  min=x[i];   
		   if(max<x[i])
		    max=x[i];       
    }
     printf("minimum element of array is : %d",min);
          printf("\nmaximum element of array is : %d",max);
 

    return 0;
}
