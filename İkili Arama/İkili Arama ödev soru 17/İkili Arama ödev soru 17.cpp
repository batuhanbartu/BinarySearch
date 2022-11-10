#include <iostream>
#include <clocale>
//BATUHAN BARTU 21040101027
//İKİLİ ARAMA
using namespace std;

int binarySearch(int dizi[], int enDusuk, int enYuksek, int arananDeger)
{
    while (enDusuk <= enYuksek)
    {       
        int ortadakiSayi = enDusuk + (enYuksek - enDusuk) / 2;

        if (dizi[ortadakiSayi] == arananDeger)
            return ortadakiSayi;

        if (dizi[ortadakiSayi] < arananDeger)
            enDusuk = ortadakiSayi + 1;
        else
            enYuksek = ortadakiSayi - 1;
    }

    return -1;
}

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[] = { 1,2,3,4,5 };

    cout << "Arama yapılacak dizi: ";

    for (int i = 0; i < 5; i++)
    {
        cout << " " << sayilar[i];
    }
    cout << endl;

    int boyut = sizeof(sayilar) / sizeof(int);
    int aranilanSayi;

    while (1)
    {
        cout << "Aranacak sayı: ";
        cin >> aranilanSayi;

        int aramaSonucu = binarySearch(sayilar, 0, boyut - 1, aranilanSayi);

        if (aramaSonucu >= 0)
            cout << "Aranan sayı " << aranilanSayi << " olup dizide bulundu ve bu sayının dizideki konumu: " << aramaSonucu << endl;
        else
            cout << "Aranan sayı " << aranilanSayi << " olup dizide bulunamadı!" << endl;
    }
}

