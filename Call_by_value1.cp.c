#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("After swapping the values in function a=%d,b=%d\n",a,b);

}
int main()
{
int a=10;
int b=40;
printf("Before swapping the values in main a=%d,b=%d\n",a,b);
swap(a,b);
printf("After swapping the value in main a=%d,b=%d\n",a,b);

}
