
#include<stdio.h>
#include<conio.h>

void main()
{
    int battery;
    clrscr();

    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    if(battery > 20)
    {
        printf("Robot Ready");
    }
    else
    {
        printf("Low Battery");
    }

    getch();
}
