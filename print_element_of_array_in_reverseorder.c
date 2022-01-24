#include<stdio.h>
int main()
{
//Intialize array
int arr[]={1,2,3,4,5};
//calulate length of array
int length=sizeof(arr)/sizeof(arr[0]);
printf("Original array:\n");
for(int i=0;i<length;i++)
{
printf("%d",arr[i]);
}
printf("\n");
printf("Array in reverse order:\n");
//loop through the array in reverse order
for(int i=length-1;i>=0;i--)
{
printf("%d",arr[i]);
}
return 0;
}
