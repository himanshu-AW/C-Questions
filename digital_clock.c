#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int hour, minute, second;
    //int delay = 1000;
    printf("\nEnter the Clock Time (HH:MM:SS) : ");
    scanf("%d%d%d", &hour, &minute, &second);
    if (hour > 13 || minute > 60 || second > 60)
    {
        printf("\nError in your Time !! ");
        exit(0);
    }
    while (1)
    {
        second++;
        if (second > 59)
        {
            minute++;
            second + 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }
        system("cls");
        printf("\n\t\tClock -> %02d : %02d : %02d ", hour, minute, second);
        sleep(1000);
    }
    return 0;
}