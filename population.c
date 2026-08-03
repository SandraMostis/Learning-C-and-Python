#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int llama;
  do
  {
      llama = get_int("Positive Integer: ");
  }
  while (llama < 9); // Prompt for start size

     int size;
    do
    {
        size = get_int("what is the population number: ");
    }
    while (size <= 9); // Prompt for end size

    int year = 0;
    for (int i = llama; llama < size; i++)
    {
        llama = llama + llama / 3 - llama / 4;
        year++;
    } // Calculate number of years until we reach threshold

    printf("The number is %i\n", year);

}