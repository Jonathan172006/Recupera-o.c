#include <stdio.h>
#include <stdlib.h>

int idade[2];
int i;

int main() {

for (i = 0; i < 2; i++) {
    do {
    printf("\nDigite uma idade: \n");
    scanf("%d",&idade[i]);

    if (idade[i] >= 18) {
        printf("Maior Idade: %d \n", idade[i]);
    } else {
        printf("Menor Idade: %d \n", idade[i]);
    }
} while (idade > 130);
}

return 0;
}