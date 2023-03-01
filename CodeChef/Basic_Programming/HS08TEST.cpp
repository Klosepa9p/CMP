//multiple 5 X
// each successfull withdraw -0.50 $
//calculate after all attemps.

// X -> wishes to withdraw
// Y -> initial account balance
//with two digits of precision
//float veri tipi
//setprecision fixed

//fixed ne boka yarýyor--setprecision detaylý bak--baþka yöntemlerle çözülebilir mi

/*fixed özelliði, sayýnýn tamamýnýn gösterilmesini saðlar. setprecision() fonksiyonuna verilen parametre, virgülden sonraki basamak sayýsýný belirtir.
*/
//fixed yuvarlama iþlemi yapar.
//yuvarlama iþlemlerinde float yerine double kullanmak hata oranýný düþürür
//virgüllü sayýlarý bitlere sýkýþtýramýyoruz. Yaklaþk bir referans deðeri alýp karþýlaþtýrmalarýný yapýyoruz
//virgüllü sayýlarda her zaman bir hata payý vardýr. O yüzden bizim minimize edeceðimiz bir referans deðerle arasýndaki (birdeb fazla deðer olabilir) eþitliklerini sorgulamamýz gerekir.

//abs(result-result2) <0.00000001 ? eþit : eþit deðil ||| gibi 




#include <iostream>
#include <iomanip>

int main(void)
{
	
	int		X;
	float	Y;
	
	std::cin >> X >> Y;
	
	if (X % 5 == 0 && X <= Y - 0.50)
		Y = Y - X - 0.50;
	std::cout << std::fixed << std::setprecision(2) << Y << std::endl;	
	return (0);
		
}
