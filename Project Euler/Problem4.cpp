int		largest_3d_palindrome_productx2()
{
	int number;
	int arr[6];
	int 	i;
	int		i2;
	int		tmp;
	int		index;
	
	i = 999;
	while(i >= 900)
	{	
		i2 = 999;
		while(i2 >= 900)
		{
			tmp = i * i2; 		
			number = tmp;
			index = 0;
			while(tmp > 0)
			{
				arr[index] = tmp % 10;
				tmp /= 10;
				index++;	
			}			
			if (arr[0] == arr[5] && arr[1] == arr[4] && arr[2] == arr[3])
				return (number);    	//return(i) -> 993 && return(i2) -> 913 		
			i2--;
		}
		i--;
	}
	return (0);
}

/*#include <iostream>
int main(void)
{
	std::cout << largest_3d_palindrome_productx2()<<std::endl;
}
*/

//find product of two numbers which 3 digits and the product have to be #palindrome#
//i2 deðiþkenini 900 ile sýnýrlandýrdýk. En büyük istediði için i'nin deðerini en büyük tutmalýyým. 
//i2 deðeri en küçük 3 basamaklý sayý olan 100 yapýlýrsa i2 583'de kýrýlýyor. 583 x 999 -> bu en büyük deðeri vermez.

 
