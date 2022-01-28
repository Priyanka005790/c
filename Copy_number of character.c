#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr;
char ch;
fptr=fopen("Priyanka.txt","w");
printf("Enter your Details:\n");
while((ch=getchar())!='\n')
{
putc(ch,fptr);
}
fclose(fptr);
fopen("Priyanka.txt","r");
printf("\n File content:\n\n");
while((ch=getc(fptr))!=EOF)
{
printf("%c",ch);
}
printf("\n End of Priyanka File\n\n");
fclose(fptr);
{
printf("-----------------------------------------\n\n");
char ch[100],fname[20];
int n;
printf("Enter number of characters to read froom the file you want:\n");
scanf("%d",&n);

FILE *fp;
printf("Enter the name of the file:\t");
scanf("%20s",fname);//get a string with max 20 chars from stdin

fp=fopen(fname,"r");
if(fread(ch,1,n,fp)==n)
{                        //check that the desired number of chars was read
ch[n]='\0';              //null terminate before printing
puts(ch);                //print a string to stdout and a line feed after
}
fclose(fp);
}
return 0;
}
