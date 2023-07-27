#include <stdio.h>

int main() {
    int a[] = {94, 55, 98, 67, 89};
    int *p = a;
  
    // Add the new line of code below this line
    printf("a[2] = %d\n", *(p + 2));

    printf("a = %p\n", a);
    printf("p = %p\n", p);
  
    return 0;
}

