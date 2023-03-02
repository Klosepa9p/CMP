#define ll long long

int		ft_prime(ll int number)
{
	ll int		i;
	
	i = 2;
	while (i < number / i)
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

ll int		prime_factors(ll int number)
{
	ll int 	i;
	ll int max_div;
	
	max_div = 0;
	i = 2;
	while(i < number / i)
	{
		if (ft_prime(i) && number % i == 0)
			{
				if ( i > max_div)
					max_div = i;
			}
		i++;
	}
	return (max_div);
}

//for 600851475143

