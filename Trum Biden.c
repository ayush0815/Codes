#include <math.h>
#include <stdio.h>

int main()
{ 
    int trump[10],biden[10],votes,i;
    printf("enter the votes of trump in 10 states\n");
   
    for(i=0;i<10;i++)
    {
        scanf("%d ",&trump[i]);
    }

   printf("enter the votes of biden in 10 states\n");
   
    for(i=0;i<10;i++)
    {
        scanf("%d ",&biden[i]);
    }
    
    for(i=0;i<10;i++)
    {
        if(trump[i]>biden[i])
        printf("Trump is winner\n");
        else 
        printf("Biden is winner\n");
    }
     int t=0,b=0;
     for(i=0;i<10;i++)
    {
        if(trump[i]>biden[i])
        t++;
        else
        b++;
    }
    
    if(t>b)
    printf("\ntrump won the election");
    else 
    printf("\nBiden won the election");
    
    return 0;
}
