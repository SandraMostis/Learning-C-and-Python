#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<math.h>

int main(void)

{
    int temperature_reading[30][24] = {};
    int average=0;
    for(int i=0; i<30; i++)
     {
        for(int j=0; j<24; j++)
         {
            average += temperature_reading[i][j];
         }
     }
     printf("agerage temp is: %d \n", average/(30*24));
     return 0;
}