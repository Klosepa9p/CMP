int		even_fibonacci()
{
	long long int		even;	
	long long int		tmp, fib1, fib2;

	fib1 = 0;
	fib2 = 1;
	even = 0;
	while (fib2 <= 4000000)
	{
		tmp = fib2;
		fib2 = fib2 + fib1;
		fib1 = tmp;
		if (fib2 % 2 == 0)
		{
			even += fib2;
		}
	}
	return (even);
}
