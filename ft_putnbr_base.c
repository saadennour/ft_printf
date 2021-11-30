#include "libft.h"

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_base(int nbr, unsigned int baz, char *base)
{
	unsigned int	cnv;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	cnv = nbr;
	if (cnv > baz)
	{
		print_base(cnv / baz, baz, base);
		ft_putchar(base[cnv % baz]);
	}
	else
		ft_putchar(base[cnv]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	size_t	baz;

	baz = ft_strlen(base);
	if (check_base(base))
	{
		print_base(nbr, baz, base);
	}
}