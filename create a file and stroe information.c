#include<stdio.h>
void main()
{
FILE *fptr;
char name[20];
int age;
int salary;
fptr=open("storedate","w");
if(fptr==NULL)
{
printf("file does not exits.\n");

}
printf("Enter the name:\n");
scanf("%s",name);
printf("Enter the age:\n");
scanf("%d",&age);
printf("Enter the salary:\n");
scanf("%d",&salary);
fclose(fptr);

}
