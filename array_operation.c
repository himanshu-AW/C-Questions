#include<stdio.h>
#include<conio.h>
void main()
{int a[10],size;
  printf("\n Enter the size of array ");
  scanf("%d",&size);
  printf("/n Enter elements of array\n");
  for (int i =0;i<size;i++)
  scanf("%d",&a[i]);
  // let insert a element in this array i.e, index :4 & element :25
  int pos =4, num=25;
  printf("\n Enter the data  u wnats to be insert ");
  printf("\nEnter the element : "); scanf("%d",&num);
  printf("\n Enter the position : "); scanf("%d",&pos);
    for( int i=size-1;i>pos;i--)
    { a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
  printf("inserted an element in an array\n");
  for(int i=0;i<size;i++)
  printf("\t%d",a[i]);

    getch();
}