#include <iostream>
int is_prime(int number)
{
	int		i;
	
	i = 2;
	while (i <= number / i) // attention -> i < number / i (number == 9 && i == 3) == 1 not TRUE!!
	{
		if (number % i == 0)
			return (0);
		i++;
	}
	return (1);
}

long long int sum_primes_below(int number)
{
	long long int sum;
	
	sum = 0;
	while (number >= 2)
	{
		if(is_prime(number))
			sum += number;
		number--;
	}
	return (sum);
}
