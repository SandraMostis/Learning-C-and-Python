#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
int n = get_int("intr: ");

if (n >= 0 && n <= 9)
   {
    printf("The number has 1 digit\n");
    }
else if(n >= 10 && n < 100)
    {
     printf("The number has 2 digits\n");
    }
}