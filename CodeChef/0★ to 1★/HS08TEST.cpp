//multiple 5 X
// each successfull withdraw -0.50 $
//calculate after all attemps.

// X -> wishes to withdraw
// Y -> initial account balance
//with two digits of precision
//float veri tipi
//setprecision fixed

//fixed ne boka yar�yor--setprecision detayl� bak--ba�ka y�ntemlerle ��z�lebilir mi

/*fixed �zelli�i, say�n�n tamam�n�n g�sterilmesini sa�lar. setprecision() fonksiyonuna verilen parametre, virg�lden sonraki basamak say�s�n� belirtir.
*/
//fixed yuvarlama i�lemi yapar.
//yuvarlama i�lemlerinde float yerine double kullanmak hata oran�n� d���r�r
//virg�ll� say�lar� bitlere s�k��t�ram�yoruz. Yakla�k bir referans de�eri al�p kar��la�t�rmalar�n� yap�yoruz
//virg�ll� say�larda her zaman bir hata pay� vard�r. O y�zden bizim minimize edece�imiz bir referans de�erle aras�ndaki (birdeb fazla de�er olabilir) e�itliklerini sorgulamam�z gerekir.

//abs(result-result2) <0.00000001 ? e�it : e�it de�il ||| gibi 




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
