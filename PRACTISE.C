
#include<stdio.h>
#include<conio.h>
void main()
{ int a[]={6,5,4,3,2,1};   // how to use pointer in array
int i,*p,*o,k,z,s,d;
int ar[2][3]={1,2,3,4,5,6};

clrscr();
 printf("%p",&a);
 printf("\n%p",&o);
 printf("\n%p",&p);
 printf("\n%d",&a[4]);
 printf("\n%d",*(a+1+2));
 o=a;
 printf("\n%d",*(o+1));
 printf("\n%d",*(a+1));
 printf("\n%d\n",*a+2);
 for( i=0;i<10;i++)
 printf("\t%d",a[i]);
	 printf("\n");
 for( i=0;i<10;i++)
 printf("\t%d",*(i+o));
		      //    2_D array

printf("\n\n");		      for( i=0;i<2;i++)
			      { for(k=0; k<3;k++)
			       printf("\t%d",ar[i][k]);
			       printf("\n");
			      }
		  z=sizeof(int);
		  s=sizeof(float);
		  d=sizeof(char);
		  printf("\t%d\t%d\t%d",z,s,d);
getch();
}