#include <stdio.h>

int main() {
  int sum = 0;
  for (int i = 30; i <= 120; i++) {
    int index = i;
    // printf("%d\n",index);

    if (index % 3 == 0 && index % 5 == 0) {
      sum = sum+index;
      printf("%d\n", sum);
    }
  }

  return 0;
}
