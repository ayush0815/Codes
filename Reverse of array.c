#include <stdio.h>

int main()
{ 
    int size,i;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int x[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=size-1;i>=0;i--)
    {
        printf("%d",x[i]);
    }
    

    return 0;
}
