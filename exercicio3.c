#include <stdio.h>

int main() {
    int n;
       printf("Digite um numero inteiro positivo: ");
       scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido.");
        return 1;
    }

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            printf("Pim ");
        }

        else if (i % 3 == 0) {
            printf("Pam ");
        }
        else if (i % 2 == 0 && i % 3 == 0) {
            printf("Pim Pam ");
        }
         else {
            printf("%d ", i);
        }
    }

    return 0;
}
