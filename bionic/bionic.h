#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BOLD  "\e[1m"
#define RESET   "\e[m"

char	**ft_split(char const *s, char c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
