#include<stdio.h>
#define MAX_SIZE 100    //maximum array size

//function declaration to print array
void printArray(int arr[],int size);
int main()
{
int source_arr[MAX_SIZE],dest_arr[MAX_SIZE];
int size,i;
int *source_ptr=source_arr;  //pointer to source_arr
int *dest_ptr=dest_arr;    //pointer to dest_arr
int *end_ptr;

//input size and element in source array

printf("Enter size of array:");
scanf("%d",&size);
printf("Enter element in array:");
for(i=0;i<size;i++)
{
scanf("%d",(source_ptr+i));
}
//pointer to last element of source_arr
end_ptr=&source_arr[size-1];

//print source and destination array before copying
printf("\nSource array before copying:");
printArray(source_arr,size);
printf("\nDestination array before copying:");
printArray(dest_arr,size);
// run loop till source_ptr exists in source_arr memeory range

while(source_ptr<=end_ptr)
{
*dest_ptr=*source_ptr;
//Increment source_ptr and dest_ptr

source_ptr++;
dest_ptr++;
}
//print source and destination array after copying
printf("\n\nSource Array after copying:");
printArray(source_arr,size);

return 0;
}
//function to print array elements
//@arr Integer array to print
//@size size of array
void printArray(int *arr,int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d ,",*(arr+i));
}
}
