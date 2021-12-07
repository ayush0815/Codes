#include <stdio.h>

int main()
{ 
    int size,i,j=0,k=0,Even[10],Odd[10];
    
    printf("enter the size of array\n");
    scanf("%d",&size);
    int x[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for (i=0; i<size; i++)
        {
            if (x[i]%2==0)
            {
                Even[j] = x[i];
                j++;
            }
            else
            {
                Odd[k] = x[i];
                k++;
            }
        }
        
        for (i=0; i<k; i++)
        {
            printf("the odd elements are %d\n", Odd[i]);
        } 
         for (i = 0; i < j; i++)
        {
            printf("the even elements are %d\n", Even[i]);
        }

    return 0;
}
