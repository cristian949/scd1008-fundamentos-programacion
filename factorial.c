                /*
                 * Cálculo de factorial utilizando iteración y recursión.
                 * Este ejemplo demuestra estructuras de control básicas en C.
                 */
                #include <stdio.h>

                long factorial_iterativo(int n) {
                    long resultado = 1;
                    for (int i = 1; i <= n; i++) {
                        resultado *= i;
                    }
                    return resultado;
                }

                    long factorial_recursivo(int n) {
                    if (n <= 1) return 1;
                    return n * factorial_recursivo(n - 1);
                }

                int main() {
                    int numero;
                    printf("Introduce un número entero: ");
                    scanf("%d", &numero);
                    printf("Factorial iterativo de %d = %ld
", numero, factorial_iterativo(numero));
                    printf("Factorial recursivo de %d = %ld
", numero, factorial_recursivo(numero));
                    return 0;
                }
