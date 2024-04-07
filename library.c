#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    char scince,commerce,humanities,stream;
    int i,cls,pass;
    clrscr();
    printf("\n Wlcom to Libraby\n");
    delay(2000);
    clrscr();
    printf("\n Enter your Class : ");
    scanf("%d",&cls);
    printf("\n Enter your Password :");
    scanf("%d",&pass);
    delay(1000);
    printf("\n\n\n\t\t\tplz Wait");
    delay(1000);
    printf("\n\n\t\t\tLOading");
    for(i=1;i<5;i++)
    {
        printf("%c",i);
    }
    if(pass==123) {
    printf("\nPassword is Matched");
    clrscr();
    switch(cls)
    {
        case 1:
        printf("subjec of class 1 =");
        break;
         case 2:
        printf("subjec of class 2 =");
        break;
         case 3:
        printf("subjec of class 3 =");
        break;
         case 4:
        printf("subjec of class 4 =");
        break;
         case 5:
        printf("subjec of class 5=");
        break;
         case 6:
        printf("subjec of class 6 =");
        break;
         case 7:
        printf("subjec of class 7 =");
        break;
         case 8:
        printf("subjec of class 8 ="); 
        break;
         case 9:
        printf("subjec of class 9 =");
        break;
    } }
    else 
    printf("\n\n\tPLz try again");



getch();
}