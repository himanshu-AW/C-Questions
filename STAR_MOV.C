#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{ int i,x=38,y=12;
  char aro;
  clrscr();
  gotoxy(x,y);
  printf("*");
  scanf("%c",&aro);
  switch(aro)
  {
	case 'a':
		for(i=x;i>=1;i--)
		{ gotoxy(i,y);
		  printf("*");
		  delay(150);
		  clrscr();
		}
	break;
	case 's':
	      for(i=y;y<=23;i++)
	      { gotoxy(x,i);
	      printf("*");
	      delay(150);
	      clrscr();
	      }
	break;
	case 'd':
	  for(i=x;i<=76;i++)
	  { gotoxy(i,y);
	    printf("*");
	    delay(150);
	    clrscr();
	  }
	break;
	case 'w':
	for(i=y;i>=1;i--)
	{ gotoxy(x,y);
	  printf("*");
	  delay(150);
	  clrscr();
	}
	break;
  }
 getch();
}