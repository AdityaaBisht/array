#include<stdio.h>
void suma(int[]);
int n;
void main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the value of a[%d]=",i);
        scanf("%d",&a[i]);

    }
    suma(a);
}
void suma(int b[])
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+b[i];
    }
    printf("%d is the sum of array",s);
}