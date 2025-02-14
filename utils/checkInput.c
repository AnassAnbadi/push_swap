#include "./includes/push_swap.h"

int is_number(char *arg)
{
    	int	i;

	i = 0;
	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_double_num(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int checkArgs(int ac ,char **av)
{
    char    **args;
    int     i;
    long    n;

    if (ac == 2)
    {
        args = ft_split(av[1],' ');
        i = 0;
    }
    else
    {
        args = av;
        i = 1;
    }
	while (args[i])
	{
		n = ft_atoi(args[i]);
		if (!is_number(args[i]))
			ft_error("Error");
		if (check_double_num(n, args, i))
			ft_error("Error");
		if (n < -2147483648 || n > 2147483647)
			ft_error("Error");
		i++;
	}
	if (ac == 2)
		ft_free(args);
    
}