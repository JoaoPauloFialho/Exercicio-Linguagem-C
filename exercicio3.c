#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d   %d", x, y);

    x = x + y;
    y = x - y;
    x -= y;


    printf("\n%d   %d", x, y);
    return 0;
}