#include<stdio.h>
#include<cs50.h>
#include<math.h>

int digit(int n, int k);

int main(void)
{
    printf("%d \n", digit(801, 1));
}


int digit(int n, int k) {

    while (k-- > 1) {
        if ((n /= 10) <= 0)
            return 0;
    }
    return n % 10;
}