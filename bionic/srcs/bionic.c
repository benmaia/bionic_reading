#include "bionic.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	bionic(char *s)
{
	char **matriz;
	matriz = ft_split(s, ' '); //splits the words in a an two-dimensional array
	int i = -1, j = -1;
	char *tmp, *tmp2;

	while (matriz[++i])
	{
			strcat(matriz[i], " "); //concatenates the word in the array with a space in the end
			tmp = ft_substr(matriz[i], 0, (strlen(matriz[i]) / 2)); // gets the first half of the word
			printf(BOLD"%s**", tmp);										  // and prints it BOLD text
			tmp2 = ft_substr(matriz[i], (strlen(matriz[i]) / 2), strlen(matriz[i])); // gets the last half of the word
			printf("%s", tmp2); 																		 // and prints in normal text
			free (tmp2);
			free(tmp);
	}
}

char	*name(char *name)
{
	char	*new;
	int i = -1;

	while (name[++i] != '.'){}
	new = ft_substr(name, 0, i);
	strcat(new, ".md"); 
	return (new);
}

int main(int argc, char **argv)
{
	int pipe[2];
	pid_t pid;
	int	fd = open(argv[argc - 1], O_RDONLY);
	char	*ex = get_next_line(fd);
	int	out = open (name(argv[argc - 1]), O_RDWR | O_CREAT | O_TRUNC, 0666);

	if (argc != 2)
	{
		printf("Wrong input: ./bionic file1");
		exit(1);
	}
	dup2 (out, STDOUT_FILENO);
	while (ex)
	{
			bionic(ex);
			ex = get_next_line(fd);
	}
	return (0);
}
