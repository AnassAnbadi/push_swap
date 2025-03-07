#include "../push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_write(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_isspace(char c)
{
	return (c == 32);
}

int	ft_isallspace(char *str)
{
	size_t	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	return (i == ft_strlen(str));
}
