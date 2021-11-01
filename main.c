#include <stdio.h>

greet(int num) {
    printf("hello %d\n", num);
    return num + 1;
}

main() {
    int number = greet(10);
    printf("%d\n", number);
    return 0;
}