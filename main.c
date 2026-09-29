#include <stdio.h>

int main(void)
{
    int a, b;
    int result_add;
    int result_sub;
    int result_mul;
    int result_div;
    int result_mod;

    scanf("%i %i", &a, &b);

    result_add = a + b;
    result_sub = a - b;
    result_mul = a * b;
    result_div = a / b;
    result_mod = a % b;

    printf("result + is %i\n", result_add);
    printf("result - is %i\n", result_sub);
    printf("result * is %i\n", result_mul);
    printf("result / is %i\n", result_div);
    printf("result %% is %i\n", result_mod);

    return 0;
}
