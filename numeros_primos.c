#include <stdio.h>

int main() {

	
	int numero, esPrimo;
	int i = 2, j;
	
	printf("Ingrese un n�mero:\n");
	scanf("%d", &numero);
	
	printf("Los n�meros primos entre 1 y %d son: \n", numero);
	
	while (i <= numero) {
		esPrimo = 1;
		
		j=2;
		while (j<i) {
			if (i%j == 0) {
				esPrimo = 0;
				break;
			}
			j++;
		}
		switch (esPrimo){
			case 1:
				printf("El n�mero %d es primo\n", i);
				break;
			default:
				break;
			}
		i++;
		
	}

	
	
	printf("Fin del programa.");
	
	
	return 0;
}

