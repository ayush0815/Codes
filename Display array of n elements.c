#include <stdio.h>

int main()
{ 
    int size,i;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int x[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&x[i]);
    }
    printf("the araay is Array\t");
   for(i=0;i<size;i++)
    printf("%d ",x[i]);

    return 0;
}
