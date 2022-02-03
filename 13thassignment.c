 #include <stdio.h>
int main()
{
  int a[100], n, c, d, pos, t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter integers in array\n");
  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);
  for (c = 0; c < (n - 1); c++)
  {
    pos = c;
    for (d = c + 1; d < n; d++)
    {
      if (a[pos] < a[d])
        pos = d;
    }
    if (pos != c)
    {
      t = a[c];
      a[c] = a[pos];
      a[pos] = t;
    }
  }
  printf("Sorted list in Descending order:\n");
  for (c = 0; c < n; c++)
    printf("%d ", a[c]);
  return 0;
}
