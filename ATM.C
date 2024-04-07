#include<stdio.h>
#include<conio.h>

int  main()
{
  float amo = 0, temp = 0;
  char op;
  // clrscr();
  printf("\n\t Welocome to  Atm Bank ");
  printf("\n\n\t Enter your Amount ; ");
  scanf("%f", &amo);
  printf("\n\t Select an Orptions (Press:C/D/B)\n\t C for Credit\n\t D for Debit\n\t B for Balance\n");
  fflush(stdin);
  scanf("%c", &op);
  switch (op)
  {
  case 'c':
    printf("\n\t You choose C option that is you want to credit the amount\n\t ");
    scanf("%3f", &temp);
    amo += temp;
    printf("\n\t Your Updated Aomount is %3f", amo);
    break;
  case 'd':
    printf("\n\t you choose D option that is debit the amount\n\t");
    scanf("%3f", &temp);
    amo -= temp;
    printf("\n\t Your Updated Aomount is %3f", amo);
    break;
  case 'b':
    printf("\n\t You Choose b option that is  Current Balance\n\t");
    printf("\n\t Your Current Balance is %3f", amo);
    break;
  default:
    printf("\n\t you enter Wrong Input!!");
    break;
  }
  return 0;
}