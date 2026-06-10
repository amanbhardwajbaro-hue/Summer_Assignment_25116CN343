// Convert decimal to binary
#include <stdio.h>
void decimaltoBinary(int n)
{
  if (n == 0)
  {
    printf("0");
    return;
  }
  int binary[32];
  int i = 0;
  int isNegative = 0;
  if (n < 0)
  {
    isNegative = 1;
    n = -n;
  }
  while (n > 0)
  {
    binary[i] = n % 2;
    n /= 2;
    i++;
  }

  if (isNegative)
    printf("-");
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d",binary[j]);
  }
}
int main()
{
  int num;
  printf("Enter a decimal number: ");
  scanf("%d", &num);
  printf("Binary form : ");
  decimaltoBinary(num);
  printf("\n");
  return 0;
}