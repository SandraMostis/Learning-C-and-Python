#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyramid_height = 0;
    do
    {
        pyramid_height = get_int("Introduce a heigth number between 1 and 8 inclusive: "); //I'm asking for a specific input

        if ((pyramid_height < 1) || (pyramid_height > 8)) //Ensuring that the number is from 1 to 8
        {
            printf("Sorry, please try again!\n");      // Warning if the number is wrong
        }
    }
    while ((pyramid_height < 1) || (pyramid_height > 8));


    //the pyramid
    for (int i = 1; i <= pyramid_height; i++)
    {
        int j = 0;
        for (j = pyramid_height; j > i; j--) // void area at the begining of the pyramid
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("#"); // condition for # left hand-side of the pyramid
        }

        printf("  "); //void in the middle of the pyramid

        for (j = 1; j <= i; j++)
        {
            printf("#");  // condition for # right hand-side of the pyramid
        }

        printf("\n");
    }

}