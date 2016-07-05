#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,a[100];
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(i!=j)
{
for(k=0;k<n;k++)
{
if(a[i]+a[j]==a[k])
{
printf("%d,%d=%d",a[i],a[j],a[k]);
}
}
}
}
}
getch();
}
