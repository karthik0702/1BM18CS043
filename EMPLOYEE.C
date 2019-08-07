#include<conio.h>
#include<stdio.h>
void main()
{
  struct emp
  {
    struct doj
    {
      int d,m,y;
    }date;
    char name[25],empid[25],dep[25];
    }emp1;
    clrscr();
    printf("Name: ");
    gets(emp1.name);
    printf("Employee ID: ");
    gets(emp1.dep);
    printf("Date (dd mm yyyy): ");
    scanf("%d%d%d",&emp1.date.d,&emp1.date.m,&emp1.date.y);
    printf("Name : %s", emp1.name);
    printf("\nEmployee ID: %s",emp1.empid);
    printf("\nDepartment: %s", emp1.dep);
    printf("\nDate (dd mm yyyy): %d/%d/%d",emp1.date.d,emp1.date.m,emp1.date.y);
    getch();
}
