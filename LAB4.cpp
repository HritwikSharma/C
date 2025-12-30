#include <stdio.h>
void h(int n, char a, char b, char c) {
    if(n == 1) {
        printf("%c -> %c\n", a, c);
        return;
    }
    h(n - 1, a, c, b);
    printf("%c -> %c\n", a, c);
    h(n - 1, b, a, c);
}
int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    h(n, 'A', 'B', 'C');
    return 0;
}
