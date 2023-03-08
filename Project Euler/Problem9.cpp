long long int		square(int number)
{
	return (number * number);
}

void  	special_pythagorean_triplet()
{
	int		a;
	int		b;
	int		c;
	
	a = 1;
	while (a <= 332)
	{
		b = a + 1;
		while (b <= 499)
		{
			c = 1000 - b - a;
			if (square(c) == square(a) + square(b))
				return (a * b * c);
			else
				b++;
		}
		a++;
	}
}

/*
200 + 375 + 425 = 1000
40000 + 140625 = 180625
*/


