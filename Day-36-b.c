#include <stdio.h>

int
main ()
{
  int a = 0, b = 1, c, n;
  scanf ("%d", &n);
  printf ("%d %d\t", a, b);
  for (int i = n; i >= 1; i--)
    {
      c = a + b;
      a = b;
      b = c;
      printf ("%d\t", c);
    }
  return c;
}
