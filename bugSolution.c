#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;
  int newValue = 20; 
  if (newValue > INT_MAX || newValue < INT_MIN) {
    fprintf(stderr, "Error: Integer overflow will occur. Please enter a value within the range of %d to %d\n", INT_MIN, INT_MAX);
    return 1; // Indicate an error
  } else {
    *ptr = newValue; 
    printf("%d\n", x);
  }
  return 0;
} 