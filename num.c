#include<stdio.h>
int num(int[]);
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
    num(a);
}
int num(int b[])
{
    int min=b[0];
    int max=b[0];
    for(int i=0;i<n;i++)
    {
        if(min>b[i])
        min=b[i];
        if(max<b[i])
        max=b[i];
        }
        printf("%d is largest",max);
        printf("\n %d is smallest",min);
    }

