#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');
    if( output == 'T')
    {
    printf("%.1f hours\n", calc_hours(hours, weeks, output));}
    else
    {
    printf("%.1f hours\n", calc_hours(hours, weeks, output)/weeks);
    }
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    int sum = 0;
    for(int i =0; i<weeks; i++)
    {
        sum += hours[i];
    }
    return sum;

}