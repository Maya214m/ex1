/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int number, position;
 
  // What bit
  printf("What bit:\n");
  // Asking the user to enter a number
  printf("Please enter a number:\n");
  scanf("%d", &number);
  
  // Asking the user to enter a position
  printf("Please enter a position:\n");
  scanf("%d", &position);
  
  int bit = (number >> position) & 1;
  // what bit in the position of the number
  printf("The bit in position %d of number %d is: %d", position, number, bit);
  
  // Set bit
  printf("\nSet bit:\n");
  // Asking the user to enter a number
  printf("Please enter a number:\n");
  scanf("%d", &number);

  // Asking the user to enter a position
  printf("Please enter a position:\n")
  scanf("%d" ,&position);

  int bit = 
  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
