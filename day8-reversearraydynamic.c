#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int num, *arr, i;
  int *p;
  p = &num;
  scanf ("%d", p);
  arr = (int *) malloc (num * sizeof (int));
  for (i = 0; i < num; i++)
	{
	  scanf ("%d", arr + i);
	}

  for (i = num - 1; i >= 0; i--)
	{
	  printf ("%d ", *(arr + i));
	}
  free (arr);
  return 0;
}
