#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, sum;

    clrscr();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Addition = %d", sum);

    getch();
    return 0;
}
