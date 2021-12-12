#include <stdio.h>

int main()
{ 
    int size,i,pos=0,neg=0,zero=0;
    
    printf("enter the size of array\n");
    scanf("%d",&size);
    
    int x[size];
    printf("enter the elements of the array\n");
    
    for(i=0;i<size;i++)
    {
    scanf("%d",&x[i]);
    if(x[i]>0) 
    pos++;
    else if(x[i]==0)
    zero++;
    else
    neg++;
    }
    
    printf("the number of positive element in the array is %d\n",pos);
    printf("the number of negative element in the array is %d\n",neg);
    printf("the number of zero element in the array is %d",zero);
    return 0;
}
