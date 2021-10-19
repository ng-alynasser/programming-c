/**
 * Write a program that computes the volume of a sphere where the user can enter the radius,
 * using formula v = 4/3 * PI * r * r * r.
 */

#include <stdio.h>

#define PI 3.141592

int main(void)
{
  float radius, volume;

  printf("Enter the radius of a sphere: ");
  scanf("%f", &radius);

  if (radius < 0)
  {
    volume = 0;
  }
  else
  {
    volume = (4.0f / 3.0f) * PI * radius * 3;
  }
  printf("Volume of the sphere = %.2f meters\n", volume);

  return 0;
}