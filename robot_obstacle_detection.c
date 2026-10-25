#include <stdio.h>

int main()
{
    int distance, i;

    printf("Robot Obstacle Detection System\n");

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter Distance in cm: ");
        scanf("%d", &distance);

        if(distance < 0)
        {
            printf("Invalid Distance!\n");
        }
        else if(distance <= 10)
        {
            printf("Obstacle Very Close!\n");
            printf("Robot Stopped!\n");
        }
        else if(distance <= 30)
        {
            printf("Obstacle Detected!\n");
            printf("Robot Moving Slowly.\n");
        }
        else if(distance <= 50)
        {
            printf("Safe Distance!\n");
            printf("Robot Moving Forward.\n");
        }
        else
        {
            printf("No Obstacle!\n");
            printf("Robot Moving Fast.\n");
        }
    }

    printf("\nScanning Completed!");

    return 0;
}
