#include<stdio.h>
#include<conio.h>
struct student
  {
    char name[20];
    int roll_no;
    float marks;
  };
void floatlink()
  { float a,*b;
     a=23.34;
     b=&a;
     a=*b;
  }
void main()
 {
    struct student s1 , *p ;
    clrscr();
    p = & s1 ;
    printf("\n Enter the name : ") ;
    scanf("%s",p->name);
    printf("\n Enter the Roll_no : ");
    scanf("%d",&p->roll_no);
    printf("\n Enter Marks : ");
    scanf("%f",&p->marks);
    printf("\n NMAE : %s ", p->name);
    printf("\n ROLL_NO. : %d ", p->roll_no);
    printf("\n MARKS : %f ", p->marks);
    getch();
 }
