#include<stdio.h>
int main()
{
int arr[100],pos,i,n;
printf("Enter array size:\n");
scanf("%d",&n);
printf("Enter the element%d:\n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the location where you wish to delect element:\n");
scanf("%d",&pos);
if(pos>=n+1)
printf("delect not possible:\n");
else
{
for(i=pos-1;i<n-1;i++)
arr[i]=arr[i+1];
printf("Resultant Array:\n");
for(i=0;i<n-1;i++)
printf("%d\n",arr[i]);
}
return 0;
}
