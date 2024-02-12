#include<stdio.h>
void sumar(int[]);
int n;
void main()
{ 
    int a[n];
    printf("enter the value of  n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the value of a[%d]=",i);
        scanf("%d",&a[i]);
    }
   sumar(a);
}
void sumar(int b[])
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int n=b[i];
        while(b[i]!=0)
        {
            sum=sum+(b[i]%10);
            b[i]=b[i]/10;
        }
        printf("\n %d is the sum of %d",sum,n);
    }
}
