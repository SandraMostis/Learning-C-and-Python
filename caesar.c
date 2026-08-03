#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

bool digits(string s);

int main(int argc, string argv[])
{
 string s = argv[1];

 if (argc != 2)
 {
   printf("Wrong number of arguments.\n");
   return 1;
 }
 else if (!digits(s))
 {
   printf("Usage: ./caesar key\n");
   return 1;
 }
 else
 {
   int k = atoi(argv[1]); // convert string into an integer

   string plaintext = get_string("Plaintext:  ");  // get text to encode
   printf("Ciphertext: ");
   for (int i = 0, n = strlen(plaintext); i < n; i++) // counts the length of the plaintext
    {
     if (isupper(plaintext[i]))  // checks for upper letters
     {
       char cipher = ((plaintext[i] - 'A') + k) % 26 + 'A';
       printf("%c", cipher);
     }
     else if (islower(plaintext[i])) // checks for lower letters
     {
       char cipher = ((plaintext[i] - 'a') + k) % 26 + 'a';
       printf("%c", cipher);
     }
     else
     {
       printf("%c", plaintext[i]); // returns numbers as they are
     }
    }
       printf("\n");
       return 0;
}
}

bool digits(string s) //bool function
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i])) //checks for digits
        {
        return false;
        }
    }
    return true;
}