#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
char name[10];
int id;
int age;
};
void main()
{
struct student st;
FILE *fptr;
fptr=fopen("student.txt","r");
if(fptr == NULL)
{
printf("Error opening:\n");
exit(1);
}
while(fread(&st,sizeof(struct student),1,fptr))

printf("name=%s \n id=%d \n age=%d \n",st.name,st.id,st.age);
//fprintf(fptr,"%d.%s\n", i, str);

fclose(fptr);
}
