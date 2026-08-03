#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)

{ int m=get_int("");
  int n=get_int("");
  int r;

 { while(m>=n && n != 0)
  {
    r = m % n;
    m = n;
    n = r;
  }
  printf("GCD is : %d\n ", m);
 }
}