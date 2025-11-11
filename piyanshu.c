#include <stdio.h>
int main() {
    int n, flag = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 2) flag = 0;
    else {
        for (int i = 2; i <= n/2; i++)
            if (n % i == 0)
                flag = 0;
    }
    if (flag)
        printf("Prime\n");
    else
        printf("Not a prime\n");
    return 0;
}
