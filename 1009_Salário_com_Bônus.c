#include <stdio.h>

int main() {
    char nome;
    double s, v;
    scanf("%s", &nome);
    scanf("%lf", &s);
    scanf("%lf", &v);
    printf("TOTAL = R$ %.2f\n", s+v*0.15);
    return 0;
}
