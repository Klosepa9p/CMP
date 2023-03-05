int		is_prime(long number)
{
	int		i;
	
	i = 2;
	while (i <= number / i) // should be <= bcs  of 4 is not prime! 
	{
		if (number % i == 0)
			return (0);	
		i++;
	}
	return (1);
}

long	prime_10001st()
{
	long	number;
	int		counter;
	long 	tmp;
	
	number = 2;
	counter = 0;
	while(counter < 10001)
	{
		if(is_prime(number))
		{
			counter++;
			tmp = number;	
		}
		number++;
	}
	return (tmp); // or return (number - 1)
}
