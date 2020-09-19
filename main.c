//Author: Sarthak Singh sxs6666@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int digit_sum(int n) {
  if (n/10 != 0){
    return 0;
  } else{
    int sum = (n % 10) + (digit_sum(n/10));
    return sum;
  }
}



int main(void) {
  char*n= readline("Enter an int: ");
  int number =atoi(n);
  printf("sum of digits of %d is %d}.\n",number, digit_sum(number));
 
}