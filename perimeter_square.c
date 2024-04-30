#include <stdio.h>
void main() {
  float side, perimeter, area;
  printf("Enter the length of the side of the square:\n");
  scanf("%f", & side);
  perimeter = 4 * side;
  printf("Perimeter of the Square : %0.4f\n", perimeter);
  area = side * side;
  printf("Area of the square : %0.4f\n", area);
  printf("Thank You...");
}
