#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++) {
        
        if (i == 1) {
            printf("%d ", a);
        } 
        else if (i == 2) {
            printf("%d ", b);
        } 
        else {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
    }

    return 0;
}
