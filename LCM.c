#include<stdio.h>
int main()
{
    int a,b,x,y,z,i1,i2;
    scanf("%d%d",&x,&y);
    z=x*y;
    for(i1=1,i2=1;i1<=z && i2<=z;i1++,i2++)
    {
        if(i1%x==0)
        {
            a=i1;
        }
        if(i2%y==0)
        {
            b=i2;
        }
        if(a==b)
        {
            printf("%d\n",a);
            break;
        }
    }
    return 0;
}
