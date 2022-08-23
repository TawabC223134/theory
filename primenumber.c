#include<stdio.h>
int main()
{
    int i,f,x,z;
    scanf("%d",&x);
    f=0;
    //z=x%i;
    for(i=2; i<x ;i++)
    {
        if(x%i==0)
        {
         f=1;
        }

    }
    if(f==1)
    {
        printf("Not Prime\n");
    }
    else
    {
        printf("Prime\n");
    }
    return 0;
}
