#include <stdio.h>
#include <math.h>

int binarioParaDecimal(long long binario) {
    int decimal, base = 1;
    int resto;

    while (binario > 0) {
        resto = binario % 10;
        decimal += resto * base;
        base *= 2;
        binario /= 10;
    }

    return decimal;
}

int main() {
    long long binario;
    printf("Digite um numero binario: ");
    scanf("%lld", &binario);

    printf("Decimal: %d\n", binarioParaDecimal(binario));

    return 0;
}