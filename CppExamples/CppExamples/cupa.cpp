#include "cupa.h"
#include <ctime>

using namespace std;

void randomize()
{
	srand(static_cast<unsigned>(time(nullptr)));
}

string rs()
{
	const char * const p[] = { "Necati", "Ahmet", "Turgut", "Selami", "Kayhan", "Zeliha",
		"Yesim", "Albert", "Frank", "Metin", "Enes", "Kamil", "Atif", "Abdullah",
		"Kazim", "Ali", "Cem", "Murat", "Muazzez", "Saadettin", "Erol", "Kamuran",
		"Fadime", "Keriman", "Sibel", "Salih", "Ayhan", "Ozan", "Tekin", "Ezgi",
		"Emine", "Ismail", "Tan", "Kaan", "Gurbuz", "Nurullah", "Fethullah", "Al",
		"Su", "Ece", "Ata", "Oya", "Alp", "Berk", "Mert", "Cenk", "Bora",
		"Huseyin", "Sina", "Edip", "Eylem", "Bekir", "Ceren", "Gizem", "Yagmur", "Fergan",
		"Cumhur", "Recep", "Devlet", "Tugrul", "Jale", "Tijen", "Julide",
		"Quassimado", "Wolfgang", "Jose", "Abdulmuttalip", "Seyfullah", "Sadullah", "Giyasettin",
		"Baris", "Emrullah", "Steven", "Deniz", "Fatma", "Nurcan" };

	return p[rand() % (sizeof(p) / sizeof(*p))];
}

ostream &sl(ostream &os)
{
	return os << "*******************************************************************************" << endl;
}

bool isprime(int val)
{
	if (val <= 2)		return false;
	if (val % 2 == 0)	return false;
	if (val % 3 == 0)	return false;
	for (int i = 3; i*i <= val; i++) {
		if (val%i == 0)	return false;
	}
	return true;
}