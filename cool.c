#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include<ctype.h>

int main(void)

{
    char cool[] = "Hey dude, C is really cool !";
    int length = strlen(cool);

    for(int i = 0; i<length; i++)
    {
        if(cool[i] == 'e')
       {
        cool[i] = '3'; }
        else if(cool[i] == 's')
        {
            cool[i] = '5';
        }
        else if(cool[i] == 'o')
        {
            cool[i] = '0';
            }
        else if (islower(cool[i]))
        {
            cool[i]=toupper(cool[i]);
            }
    }
    printf("%s", cool);
    printf("\n");
    return 0;
}