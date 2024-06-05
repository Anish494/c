#include <stdio.h>

int main() {

  int n, rev = 0, rem,num;

  printf("Enter an integer: ");
  scanf("%d", &num);
  n=num;
  while (n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n =n/ 10;
  }
  if(rev==num)
  {
    printf("Palindrome number.\n");

  }
  else{
    printf("Not palindrome");
  }

  return 0;
}