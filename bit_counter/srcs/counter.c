/* Created by dtheo      */
/* To use with counter.h */

void	fill_binary(char *binary, long n, int bc) // Fill *binary with n in binary base
{
	int i;
	
	i = bc - 1;
	while (i >= 0)
	{
		if (i % 5 == bc % 5)
			*(binary + i) = ' ';
		else
		{
			*(binary + i) = n % 2 + '0';
			n /= 2;
		}
		i--;
	}
	*(binary + bc) = '\0';
}

long	ft_pow2(int e) // Return 2^e
{
	if (e == 0)
		return (1);
	return (2 * ft_pow2(e - 1));
}

int		ft_atoi(char *str) // Return number in str (no error supported);
{
	int r;
	
	r = 0;
	while (*str)
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (r);
}

int		total_length(int bc) // Return length of binary number including spaces
{
	int r;
	
	r = bc;
	r += bc / 4;
	if (bc % 4 == 0)
		r--;
	return (r);
}