//Author: Sarthak Singh sxs6666@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int digit_sum(int n) {
  if (n/10 == 0){
    return 0;
  } else{
    int sum = (n % 10) + (digit_sum(n/10));
    return sum;
  }
}



int main(void) {
  char*number= readline("Enter an int: ");
  int intnumber =atoi(number);
  printf("sum of digits of %d is %d}.\n",intnumber, digit_sum(intnumber));
 
}