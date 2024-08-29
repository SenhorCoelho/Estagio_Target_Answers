#include <stdio.h>

int main(void)
{
	int indice;
	int soma;
	int k;

	indice = 12;
	soma = 0;
	k = 1;

	while(k < indice)
	{
		k = k + 1;
		soma = soma + k;
		printf("%i\n", soma); 
	}
	printf("%i\n", soma);
}