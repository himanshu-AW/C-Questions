#include<stdio.h>
#include<conio.h>
#include<dos.h>


using namespace std;

void main()
{ int x=39,y=12,i,j=0;
 char arrow;
 clrscr();
 gotoxy(x,y);
 printf("*");
 do{
    scanf("%c",&arrow);
    j++;
    switch(arrow)
    { case 'a':
	for(i=x;i>=1;i-=2)
	{ 	clrscr();
	gotoxy(i,y);
	printf("*");
	delay(200);

	}
      case 's':
	for(i=y;i<=25;i++)
	{ gotoxy(1,i);
	printf("*");
	delay(200);
	clrscr();
	}
      case 'd':
	for(i=1;i<=78;i+=2)
	{ gotoxy(i,25);
	printf("*");
	delay(200);
	clrscr();
	}
      case 'w':
	for(i=25;i>=1;i--)
	{ gotoxy(78,i);
	printf("*");
	delay(200);
	clrscr();
	}
     case 'x':
	for(i=78;i>=1;i-=2)
	{ gotoxy(i,1);
	printf("*");
	delay(200);
	clrscr();
	}

    }
   }while(j<3);


}