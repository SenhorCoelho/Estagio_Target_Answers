#include <stdio.h>
#include <stdlib.h>

int fibonacci_find(int current, int next, int nbr);

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Uso: ./fibonacci numero\n");
		return 1;
	}
	int nbr = atoi(argv[1]);
	if (nbr < 0)
	{
		printf("Somente números positivos\n");
		return 1;
	}
	if(!fibonacci_find(0, 1, nbr))
		printf("Número pertence à sequência fibonacci.\n");
	else
		printf("Número não pertence à sequência fibonacci.\n");
	return 0;
}

// Retorna 0 em caso de sucesso por convenção do C.
int fibonacci_find(int current, int next, int nbr)
{
	if (current > nbr)
		return 1;
	if (current == nbr)
		return 0;
	fibonacci_find(next, current + next, nbr);
}