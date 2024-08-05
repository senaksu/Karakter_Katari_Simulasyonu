

#include<iostream>
#include<time.h>
#include <windows.h>

using namespace std;

class Karakter {  // karakter  sinifi
public:
	char harf;
	int renk;

	Karakter() {        //karakter yapmak icin fonksiyon
		harf = 'A' + rand() % 26;               //A ile Z arasindan harf
		renk = 9 + rand() % 6;                 //  9 ve 15 arasi renkler
	}
};

enum RENKLER { // renkler 
	WHITE = 7, // beyaz
	LIGHTBLUE = 9, // mavi
	LIGHTGREEN = 10, // yesil
	LIGHTCYAN = 11, // cyan
	LIGHTRED = 12, // kirmizi
	LIGHTMAGENTA = 13, // magenta
	YELLOW = 14,  // sari
};

char DUZCIZGI = 205;
char SOLUSTKOSE = 201;
char SAGUSTKOSE = 187;
char DIKEYCIZGI = 186;
char ASAGIAYRAC = 203;
char SOLALTKOSE = 200;
char SAGALTKOSE = 188;
char YUKARIAYRAC = 202;

class Katar {               // katar class(sinif) tanimi
public:
	int numberOfCharacter();
	void karakterEkle();
	void karakterCikar();
	void yazdir();
	Katar()
	{
		karakterSayisi = 0;
	};

private:
	int karakterSayisi;
	Karakter karakterler[50];   //50 karakterli dizi ile olusur

};

int Katar::numberOfCharacter()       //fonksiyon katardaki eleman sayisi verir
{
	return karakterSayisi;
};

void Katar::karakterEkle()     // katara karakter ekleme
{
	Karakter newKarakter;
	if (karakterSayisi < 50)    // eger karakter sayisi 50'den az ise yeni karakter ekle
	{
		karakterler[karakterSayisi] = newKarakter;
		karakterSayisi = karakterSayisi + 1;
	}
};

void Katar::karakterCikar()       //karakter cikarma 
{
	if (0 == karakterSayisi)   // eger karakter sayisi 0'a esit ise cikarma yapilamaz yazar
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, LIGHTRED);
		cout << "Cikarma Yapilamaz" << endl << endl;
		SetConsoleTextAttribute(hConsole, WHITE);
	}
	else     // karakter sayisi 0'a esit degil ise 1 cikarilir
	{
		karakterSayisi = karakterSayisi - 1;       // karakter sayisi 1 eksiltilir karaktersayisi=-karaktersayisi
	}
}

void Katar::yazdir()          // yazdirma islemi
{
	if (karakterSayisi == 0)     // karakter sayisi 0 'a esit ise boþ kare yapar
	{
		cout << SOLUSTKOSE;
		cout << DUZCIZGI;
		cout << DUZCIZGI;
		cout << SAGUSTKOSE;
		cout << endl;
		cout << DIKEYCIZGI;
		cout << " ";
		cout << " ";
		cout << DIKEYCIZGI;
		cout << endl;
		cout << SOLALTKOSE;
		cout << DUZCIZGI;
		cout << DUZCIZGI;
		cout << SAGALTKOSE;
		cout << endl;
	}
	else     //eger karakter sayisi 0 esit degil ise    
	{
		for (int i = 0; i < karakterSayisi; i++)   //Bu for dongusu 0 dan baslayip karakter sayisina kadar doner karenin ustunu yapar
		{
			cout << SOLUSTKOSE;
			cout << DUZCIZGI;
			cout << DUZCIZGI;
			cout << SAGUSTKOSE;
		}
		cout << endl;
		for (int j = 0; j < karakterSayisi; j++)  // bu for dongusu 0 dan baslayip karakter sayisina kadar doner
		{
			cout << DIKEYCIZGI;   // dikey cizgi yazdirir 
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, karakterler[j].renk);         // renk kodu 
			cout << karakterler[j].harf;            // harfleri renkli yazar
			SetConsoleTextAttribute(hConsole, WHITE);     //renk kodunu beyaza ayarlama
			cout << " ";
			cout << DIKEYCIZGI; // dikey cizgi yazdirir
		}
		cout << endl; // alt satir 
		for (int k = 0; k < karakterSayisi; k++) // for dongusu 0 dan baslayip karakter sayisina kadar doner karenin altini olusturur   
		{
			cout << SOLALTKOSE;
			cout << DUZCIZGI;
			cout << DUZCIZGI;
			cout << SAGALTKOSE;
		}
	}
	cout << endl;   // alt satir 
};

int main()
{
	Katar newKatar;
	srand(time(NULL));

	int secim;
	cout << "Islem Seciniz" << endl;
	cout << "1- Karakter Ekle" << endl;   // harf ekleme
	cout << "2- Karakter Cikar" << endl;  // harf cikarir
	cout << "3- Programdan Cikis" << endl;      // programdan cikar 

	cin >> secim; //

	do {

		switch (secim) {         // swich case ile secim durumlarý
		case 1:       //  1 secilirse 
		{
			cout << "Onceki Durum - Eleman Sayisi=";    //  Onceki durum yazdirilir
			cout << newKatar.numberOfCharacter();
			cout << endl;
			newKatar.yazdir();

			if (50 != newKatar.numberOfCharacter())// eger karakter sayisi 50 den az ise ekleriz
				newKatar.karakterEkle();
			cout << "Yeni Durum - Eleman Sayisi=";    //     Yeni durumu yazdirir
			cout << newKatar.numberOfCharacter();
			cout << endl;   // alt satýr
			newKatar.yazdir();
			break;
		}
		case 2:  // 2 secilirse
		{
			cout << "Onceki Durum - Eleman Sayisi=";    //Onceki durum yazdirilir.
			cout << newKatar.numberOfCharacter();
			cout << endl;
			newKatar.yazdir();
			newKatar.karakterCikar();         //  eleman cikarma islemi yapar
			cout << "Yeni Durum - Eleman Sayisi=";       // yeni durum yazdirir
			cout << newKatar.numberOfCharacter();
			cout << endl; // alt satýr
			newKatar.yazdir();
			break;
		}
		case 3:  // 3 secilirse program kapanir
		{
			cout << "program cýkýs" << endl;
			break;
		}
		}
		//  bir  islem bittikten sonra siradaki icin menu yazma ve secim yapma yazdirir
		cout << "Islem Seciniz" << endl;
		cout << "1- Karakter Ekle" << endl;
		cout << "2- Karakter Cikar" << endl;
		cout << "3- Programdan Cikis" << endl;

		cin >> secim;
	} while (secim != 3);  // eger 3 secilirse program kapanýr secilmezse dongu tekrar doner
}