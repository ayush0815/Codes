#include <stdio.h>

int main()
{ 
    int size,i,j=0,k=0;
    
    printf("enter the size of array\n");
    scanf("%d",&size);
    
    int x[size],even[size],odd[size],a=0,b=0;
    printf("enter the elements of the array\n");
    
    for(i=0;i<size;i++)
    {
    scanf("%d",&x[i]);
    }

   for (i = 0; i < size; i++) {
        if (x[i] % 2 == 0)
            even[j++] = x[i];
        else
            odd[k++] = x[i];
    }

    printf("Even elements: ");
    for (i = 0; i < j; i++)
        printf("%d ", even[i]);

    printf("\nOdd elements: ");
    for (i = 0; i < k; i++)
        printf("%d ", odd[i]);

    printf("\n");
    return 0;
}
