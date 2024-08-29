#include <ctype.h>
#include <stdio.h>
#include <string.h>

int find_char(char c, char* str);

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Uso: ./count_chara string caracter\n");
		return 1;
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Escolha apenas 1 caracter para contar.\n");
		return 1;
	}
	printf("A letra '%c' ocorre %i vezes na string.\n",  argv[2][0], find_char(argv[2][0], argv[1]));
}

int find_char(char c, char* str)
{
	char cases[2];
	int counter;

	counter = 0;
	cases[0] = toupper(c);
	cases[1] = tolower(c);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == cases[0] || str[i] == cases[1])
			counter++;
	}
	return counter;
}