#include<stdio.h>
int main(void)
{
struct employeeDetails
{
char Ename[255];
char Eid[20];
char Edesignation[255];

struct
{
char dname[255];
char did[255];
}department;
struct
{
char dv1[255];
char dv2[255];
}division;

};
//create structure variable
struct employeeDetails emp;

//take employeeDetails data
printf("Enter Employee Details:\n");
printf("Enter Ename:\n");
gets(emp.Ename);
printf("Enter Eid:\n");
gets(emp.Eid);
printf("Enter Edesignation:\n");
gets(emp.Edesignation);

printf("Enter the department Details :\n");
printf("Enter did:\n");
gets(emp.department.did);
printf("Enter dname:\n");
gets(emp.department.dname);

printf("Enter the department division\n");
printf("Enter dv1:\n");
gets(emp.division.dv1);
printf("Enter dv2:");
gets(emp.division.dv2);

printf("Display the Employee Details\n");
printf("\nEname:%s",emp.Ename);
printf("\nEid:%s",emp.Eid);
printf("\nEdesignation:%s",emp.Edesignation);
printf("\ndid:%s",emp.department.did);
printf("\ndname:%s",emp.department.dname);
printf("\ndv1:%s",emp.division.dv1);
printf("\ndv1:%s",emp.division.dv2);
}
