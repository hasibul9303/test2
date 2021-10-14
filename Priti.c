// binary search in array
#include <stdio.h>
int main() {
  int n, a[n], i, l, h, m, item;
  printf("enter size:");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("enter element to the array:");
    scanf("%d", &a[i]);
  }
  printf("enter the item to be searched:");
  scanf("%d", &item);
  l = 0;
  h = n - 1;
  while (h >= l) {
    m = (l + h) / 2;
    if (a[m] == item) {
      printf("item found at the position %d", m + 1);
      break;
    } else if (a[m] < item)
      l = m + 1;
    else
      h = m - 1;
  }
  if (h < l)
    printf("item not found");
}
