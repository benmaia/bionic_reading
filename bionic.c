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
			if (strlen(matriz[i]) <= 3)
				printf(BOLD"%s", matriz[i]);
			else
			{
					tmp = ft_substr(matriz[i], 0, (strlen(matriz[i]) / 2)); // gets the first half of the word
					printf("\033[1m%s", tmp);												// and prints it BOLD text
					tmp2 = ft_substr(matriz[i], (strlen(matriz[i]) / 2), strlen(matriz[i])); // gets the last half of the word
					printf(RESET"%s", tmp2); 																	  // and prints in normal text
					free (tmp2);
					free(tmp);
			}
	}
}


int main()
{
	/*char *ex = "On the other hand, we denounce with righteous indignation and dislike men who are so beguiled and demoralized by the charms of pleasure of the moment, so blinded by desire, that they cannot foresee the pain and trouble that are bound to ensue; and equal blame belongs to those who fail in their duty through weakness of will, which is the same as saying through shrinking from toil and pain. These cases are perfectly simple and easy to distinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided. But in certain circumstances and owing to the claims of duty or the obligations of business it will frequently occur that pleasures have to be repudiated and annoyances accepted. The wise man therefore always holds in these matters to this principle of selection: he rejects pleasures to secure other greater pleasures, or else he endures pains to avoid worse pains.";*/

	char *ex = "Ola eu e ele gostamos de agua";
	bionic(ex);
	return (0);

}
