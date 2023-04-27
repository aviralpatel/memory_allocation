#include <stdio.h>
#include <stdlib.h>

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int* arr = malloc(size * sizeof(int));
  if (arr == NULL) {
    printf("Error: Memory allocation failed\n");
    return 1;
  }

  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);

  return 0;
}
