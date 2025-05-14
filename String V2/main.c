// Comparar duas strings ignorando maiusculas e minusculas
// Gabriel Russi

#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int i = 0, iguais = 1;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (tolower(str1[i]) != tolower(str2[i])) {
            iguais = 0;
            break;
        }
        i++;
    }

    if (iguais == 1) {
        printf("As strings sao iguais (ignorando maiusculas e minusculas)\n");
    } else {
        printf("As strings sao diferentes (ignorando maiusculas e minusculas)\n");
    }

    return 0;
}
