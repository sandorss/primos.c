// labo4, paso 1

//Números primos.

#include <stdio.h>

int main() {

	int numero, primo = 1;

	printf("Ingrese un número entero positivo: ");
	scanf("%d", &numero);

	if (numero <= 1) {
		primo = 0;
	} else {
		for (int i =2; i *i <= numero; i++) {
			if (numero %i == 0) {
				primo = 0;
				break;
			}
		}
	}
	if (primo) {
		printf("d es un número primo.\n:", numero);
	} else {
		printf("%d no es un número primo.\n", numero);
	}
	return 0;
}

