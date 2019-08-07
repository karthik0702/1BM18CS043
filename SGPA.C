#include<conio.h>
#include<stdio.h>
int grade(int);
void main()
{
  struct student
  {
    char name[25],usn[25];
    float marks[5],sgpa;
  }stud1;
  int i,cre[]={4,3,5,4,4},k;
  printf("Name: ");
  gets(stud1.name);
  printf("USN: ");
  gets(stud1.usn);
  printf("Enter the marks in the following order:\n");
  stud1.sgpa=0.0;
  printf("1) C Programming \n2) Electronics\n3) Physics \n4)Mathematics \n5)Mechanical\n");
  for(i=0;i<5;i++)
  {
    scanf("%f",&stud1.marks[i]);
    k=grade(stud1.marks[i]);
    if(k==0)
    {stud1.sgpa =0.0;break;}
    stud1.sgpa += cre[i]*k/20.0;
  }
  printf("\nStudent details \n");
  printf("Name: %s",stud1.name);
  printf("\nUSN: %s",stud1.usn);
  printf("\nSGPA: %f",stud1.sgpa);
  getch();
}
int grade(int a)
{
if(a>=90.0)
return 10;
else if(a>=75.0)
return 9;
else if(a>=65.0)
return 8;
else if(a>=55.0)
return 7;
else if(a>=40.0)
return 6;
else
return 0;
}



