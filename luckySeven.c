// Write a c program to develop a game “Lucky Seven”. (sum of rolling two dices is compared against user choice of 7, below 7 or above 7 and if it matches user choice user wins else user looses)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1;
    int d2;
    printf("\nYou will be given total of n chances to roll the dice.\nYou won if the two dice numbers give the output you predict within the n chances.\nYou lost if you didn't get the predicted output within the n chances.\n");
    int n;
    printf("Enter the number of chances you want: ");
    scanf("%d", &n);
    int choice;
    printf("\nPress 1 with enter key for 7.\nPress 2 with enter key for below 7.\nPress 3 with enter key for above 7.\n");
    scanf("%d", &choice);
    while (n>0)
    {
        printf("\nPress 1 and enter key for rolling the dice.\nPress any key with enter for exit.\n");
        int sinp;
        scanf("%d", &sinp);
        if (sinp == 1)
        {
        
            printf("\nDice rolls........\n");
            d1 = rand()%6 + 1;
            d2 = rand()%6 + 1;
            printf("%d and %d", d1, d2);
            int sum = d1 + d2;
            if ((choice==1 && sum == 7) || (choice==2 && sum<7) || (choice==3 && sum>7))
            {
                printf("\nYou win.\n");
                return 0;
            }
            else
            {
                printf("\nTry Again.\n");
            }
        }
        else
        {
            return 0;
        }
        n--;
    }
    printf("\nYou lost.");

    return 0;
}