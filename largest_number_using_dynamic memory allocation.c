#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,num;
float *data;

printf("Enter total number of element [1 to 100]:");
scanf("%d",&num);

//allocates the memory for number elements
data=(float*)calloc(num,sizeof(float));
if(data==NULL)
{
printf("Error memory not allocated");
exit(0);
}
printf("\n");

//store the number Entered by user
for(i=0;i<num;i++)
{
printf("Enter element %d:",i+1);
scanf("%f",data+i);
}
//store largest number at address data
for(i=0;i<num;i++)
{
if(*data<*(data+i))
*data=*(data+i);
}
printf("largest element=%.2f",*data);
free(data);
return 0;
}
