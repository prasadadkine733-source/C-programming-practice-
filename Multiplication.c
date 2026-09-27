#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, mul;

    clrscr();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    mul = a * b;

    printf("Multiplication = %d", mul);

    getch();
    return 0;
}
