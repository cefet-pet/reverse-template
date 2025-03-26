#include <student.h>
#include <stdio.h>

int main(void)
{
  int number1, reverseNumber;
  scanf("%d", &number1);
  reverseNumber = reverse(number1);
  printf("%d\n", reverseNumber);
  return 0;
}
