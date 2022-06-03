#include "bionic.h"

void	bionic(char *s)
{
	char **matriz;
	matriz = ft_split(s, ' '); //splits the words in a an two-dimensional array
	int i = -1, j = -1;
	char *tmp, *tmp2;

	while (matriz[++i])
	{
			strcat(matriz[i], " "); //concatenates the word in the array with a space in the end
			tmp = ft_substr(matriz[i], 0, (strlen(matriz[i]) / 2) - 1); // gets the first half of the word
			printf("\033[1m%s", tmp);												// and prints it BOLD text
			tmp2 = ft_substr(matriz[i], (strlen(matriz[i]) / 2) - 1, strlen(matriz[i])); // gets the last half of the word
			printf(RESET"%s", tmp2); 																	  // and prints in normal text
	}
}


int main()
{
	char *ex = "Lorem Ipsum Idk, Peixe Lagos";

	bionic(ex);
	return (0);

}
