#include<stdio.h>
int main()
{
int n,x;
float area,total=0;
printf("Enter the no. of interior walls");
scanf("%d",&n);
printf("Enter the no. of exterior walls");
scanf("%d",&x);
for(int i=0;i<n;i++)
{
    printf("%d",i+1);
    scanf("%f",&area);
    total+=area*18;
}
for(int i=0;i<x;i++)
{
    printf("%d",i+1);
    scanf("f",&area);
    total+=area*12;
}
printf("Total estimated cost %.1f INR",total);
return 0;
}