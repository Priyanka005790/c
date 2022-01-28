#include<stdio.h>
int main()
{
struct student//create a student structure
{
char Stuname[255];
char Stuid[20];
};
//char Edesignation[255];

struct staff
{
char Sid[20];
char Sname[255];
};
struct nonstaff//create a non staff structure
{
char Nid[255];//create array in char type
char Nname[255];
};
struct admin  //in this structure access the all structure
{
struct student std[3];
struct staff st[3];
struct nonstaff nst[3];
};
//create structure variable
struct admin ad;   //declare structure variable
int i;

for(i=0;i<3;i++)
{
printf("Enter Stuname:\n");
gets(ad.std[i].Stuname);
printf("Enter stuid:\n");
gets(ad.std[i].Stuid);

//printf("\n Enter the student details:\n");
printf("Enter sid:\n");
gets(ad.st[i].Sid);
printf("Enter sname:\n");
gets(ad.st[i].Sname);

printf("Enter nid:\n");
gets(ad.nst[i].Nid);
printf("Enter nname:\n");
gets(ad.nst[i].Nname);
}
for(i=0;i<3;i++)
{
printf("Display Details\n");
printf("\nsname:%s",ad.std[i].Stuname);
printf("\nsid:%s",ad.std[i].Stuid);
printf("\Sname:%s",ad.st[i].Sname);
printf("\Sid:%s",ad.st[i].Sid);
printf("\nNid:%s",ad.nst[i].Nid);
printf("\nNname:%s",ad.nst[i].Nname);
}

}
