#include <stdio.h>

compute(int x, int y) {
    return x * y;
}

greet(int num) {
    printf("hello %d\n", num);
    return num + 1;
}

main() {
    int number = greet(10);
    printf("%d\n", number);
    int result = compute(2, 3);
    printf("%d\n", result);
    return 0;
}