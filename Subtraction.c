#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, difference;

    clrscr();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    difference = a - b;

    printf("Subtraction = %d", difference);

    getch();
    return 0;
}
