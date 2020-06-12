#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;
string oyuncuAd[] = { //36
    "ONAT",
    "ALI",
    "MAHMUT",
    "MANSUR KURSAD",
    "GAMZE",
    "MIRAC",
    "YUCEL",
    "KUBILAY",
    "HAYATI",
    "SERDAR",
    "BIRSEN",
    "SERDAL",
    "BUNYAMIN",
    "OZGUR",
    "FERDI",
    "ILHAN",
    "SEMIH",
    "ERGUN",
    "FATIH",
    "SENAY",
    "SERKAN",
    "EMRE",
    "BAHATTIN",
    "BARIS",
    "FATIH",
    "FUAT",
    "GOKHAN",
    "ORHAN",
    "MEHMET",
    "EVREN",
    "OKTAY",
    "HARUN",
    "YAVUZ",
    "MEHMET",
    "UMUT",
    "MUSTAFA"};

class oyuncu
{
private:
    string oyuncuAdi;
    int oyuncuGucu;
    short int oyuncuNo;

public:
    oyuncu()
    {
        oyuncuAdi = " ";
        oyuncuGucu = 0;
        oyuncuNo = 0;
    }
    void oyuncuGucAta(int guc)
    {
        oyuncuGucu = guc;
    }
    int oyuncuGucGoster()
    {
        return oyuncuGucu;
    }
    void oyuncuNoAta(int no)
    {
        oyuncuNo = no;
    }
    int oyuncuNoGoster()
    {
        return oyuncuNo;
    }
    void oyuncuAdiAta(string pAd)
    {
        oyuncuAdi = pAd;
    }
    string oyuncuAdiGoster()
    {
        return oyuncuAdi;
    }
};
class takim
{

private:
    string takimAdi;
    int takimPuan;
    int takimId;
    oyuncu oyuncular[11];

public:
    takim()
    {
        takimAdi = " ";
        takimPuan = 0;
    }
    void takimIdAta(int id)
    {
        takimId = id;
    }
    int takimIdGoster()
    {
        return takimId;
    }
    void takimPuanAta(int puan)
    {
        takimPuan = takimPuan + puan;
    }
    int takimPuanGoster()
    {
        return takimPuan;
    }
    void takimAdiAta(string pAd)
    {
        takimAdi = pAd;
    }
    string takimAdiGoster()
    {
        return takimAdi;
    }
    void oyuncuekle()
    {
        for (int i = 0; i < 11; i++)
        {
            oyuncular[i].oyuncuAdiAta(oyuncuAd[rand() % 36] + " " + oyuncuAd[rand() % 36]);
            oyuncular[i].oyuncuNoAta(rand() % 100);
            oyuncular[i].oyuncuGucAta(rand() % 5 + 1);
        }
    }
    void oyuncuGoster()
    {
        for (int i = 0; i < 11; i++)
        {
            if (oyuncular[i].oyuncuNoGoster() < 10)
            {
                cout << "Numara:" << oyuncular[i].oyuncuNoGoster() << "  - " << oyuncular[i].oyuncuAdiGoster();
                for (int j = 0; j < oyuncular[i].oyuncuGucGoster(); j++)
                    cout << "*";
                cout << endl;
            }
            else
            {
                cout << "Numara:" << oyuncular[i].oyuncuNoGoster() << " - " << oyuncular[i].oyuncuAdiGoster();
                for (int j = 0; j < oyuncular[i].oyuncuGucGoster(); j++)
                    cout << "*";
                cout << endl;
            }
        }
    }
    int takimGucuHesapla()
    {
        int takimGucu = 0;
        for (int i = 0; i < 11; i++)
            takimGucu = takimGucu + oyuncular[i].oyuncuGucGoster();
        return takimGucu;
    }
};
class mac
{
private:
    int home;
    int away;
    int round;
    int homeScore;
    int awayScore;

public:
    mac(int homeTakim, int awayTakim, int macRound)
    {
        home = homeTakim;
        away = awayTakim;
        round = macRound;
        homeScore = 0;
        awayScore = 0;
    }
    mac(int phomeScore, int pawayScore)
    {
        homeScore = phomeScore;
        awayScore = pawayScore;
    }
    int getRound()
    {
        return round;
    }
    int getAwayScore()
    {
        return awayScore;
    }
    int getHomeScore()
    {
        return homeScore;
    }
    int getAwayId()
    {
        return away;
    }
    int getHomeId()
    {
        return home;
    }
};
string takimAd[] = {
    "Adana",
    "Adiyaman",
    "Afyonkarahisar",
    "Agri",
    "Aksaray",
    "Amasya",
    "Ankara",
    "Antalya",
    "Ardahan",
    "Artvin",
    "Aydin",
    "Balikesir",
    "Bartin",
    "Batman",
    "Bayburt",
    "Bilecik",
    "Bingol",
    "Bitlis",
    "Bolu",
    "Burdur",
    "Bursa",
    "Canakkale",
    "Cankiri",
    "Corum",
    "Denizli",
    "Diyarbakir",
    "Duzce",
    "Edirne",
    "Elazig",
    "Erzincan",
    "Erzurum",
    "Eskisehir",
    "Gaziantep",
    "Giresun",
    "Gumushane",
    "Hakkari",
    "Hatay",
    "Igdir",
    "Isparta",
    "Istanbul",
    "Izmir",
    "Kahramanmaras",
    "Karabuk",
    "Karaman",
    "Kars",
    "Kastamonu",
    "Kayseri",
    "Kirikkale",
    "Kirklareli",
    "Kirsehir",
    "Kilis",
    "Kocaeli",
    "Konya",
    "Kutahya",
    "Malatya",
    "Manisa",
    "Mardin",
    "Mersin",
    "Mugla",
    "Mus",
    "Nevsehir",
    "Nigde",
    "Ordu",
    "Osmaniye",
    "Rize",
    "Sakarya",
    "Samsun",
    "Siirt",
    "Sinop",
    "Sivas",
    "Sanliurfa",
    "Sirnak",
    "Tekirdag",
    "Tokat",
    "Trabzon",
    "Tunceli",
    "Usak",
    "Van",
    "Yalova",
    "Yozgat",
    "Zonguldak"};

string takimAd2[]{
    "United", "Wanderers", "FC", "Kings", "Hotspurs", "Saint-Germain", "City", "Wednesday", "Forest", "Town"};

int main()
{

    int takimSayisi = 0;
    int kacTakim = 0;
    srand(time(NULL));

    cout << "Hosgeldin. Baslamadan once ligde kac takim olsun?:\nKac takim:";
    cin >> kacTakim;
    system("cls");
    takim **takimim = new takim *[kacTakim];
    int kacMac = (kacTakim / 2) * (kacTakim - 1) * 2;
    mac **maclar = new mac *[kacMac];

    for (int i = 0; i < kacTakim; ++i)
    {
        takimim[i] = new takim();
        takimim[i]->takimAdiAta(takimAd[rand() % 81] + " " + takimAd2[rand() % 10]);
        takimim[i]->oyuncuekle();
        takimim[i]->takimIdAta(i);
        cout << "[" << i << "] - " << takimim[i]->takimAdiGoster() << "\tTakim Gucu : "
             << takimim[i]->takimGucuHesapla() << endl;
    }
    cout << "Takimlar olusturuldu." << endl;
    //fikstur olusturma kismi
    int macsayisi = 0;
    for (int round = 0; round < kacTakim - 1; round++)
    {
        for (int match = 0; match < kacTakim / 2; match++)
        {
            int home = (round + match) % (kacTakim - 1);
            int away = (kacTakim - 1 - match + round) % (kacTakim - 1);

            if (match == 0)
                away = kacTakim - 1;
            maclar[macsayisi] = new mac(takimim[home]->takimIdGoster(), takimim[away]->takimIdGoster(), round);
            macsayisi++;
        }
    }
    //
    string tmp;
    string basla;
    cout << "Baslamak icin 'basla' yazin : \n";
    cin >> basla;
    system("cls");
    int fiksturSayac = 0;
    while (basla == "basla")
    {
        string siralama[kacTakim];
        cout << "1- Lig puan durumu\n2- Fikstur Goster\n3- Oyunculari Goruntule\n";
        cin >> tmp;
        system("cls");
        if (tmp == "1")
        {
            int temp;
            int tempArray[kacTakim];
            string str;
            string tempTakim[kacTakim];
            for (int i = 0; i < kacTakim; i++)
            {
                tempArray[i] = takimim[i]->takimPuanGoster();
                tempTakim[i] = takimim[i]->takimAdiGoster();
            }
            for (int i = 0; i < kacTakim; i++)
            {
                for (int j = i + 1; j < kacTakim; j++)
                {
                    if (tempArray[i] < tempArray[j])
                    {
                        temp = tempArray[i];
                        tempArray[i] = tempArray[j];
                        tempArray[j] = temp;

                        str = tempTakim[i];
                        tempTakim[i] = tempTakim[j];
                        tempTakim[j] = temp;
                    }
                }
            }
            for(int i=0;i<kacTakim;i++)
            {
                cout<<i+1<<" . - " <<tempTakim[i]<<" - "<<tempArray[i]<<" pts"<<endl;
            }
        }
        if (tmp == "2")
        {
            bool ilkHafta = 0;
            for (int i = 0; i < macsayisi; i++)
            {
                if (i == 0)
                {
                    cout << "Hafta - " << maclar[i + 1]->getRound() + 1 << endl;
                }
                else if (maclar[i]->getRound() != maclar[i - 1]->getRound())
                {
                    cout << "Hafta - " << maclar[i + 1]->getRound() + 1 << endl;
                }

                cout
                    << takimim[maclar[i]->getHomeId()]->takimAdiGoster()
                    << "| | | "
                    << takimim[maclar[i]->getAwayId()]->takimAdiGoster()
                    << endl;
            }
        }
        if (tmp == "3")
        {
            cout << "Hangi takimin oyunculari goruntulensin? ID sini yaz.\n";
            for (int i = 0; i < kacTakim; i++)
                cout << "ID:" << i << " " << takimim[i]->takimAdiGoster() << "\tTakim Gucu : "
                     << takimim[i]->takimGucuHesapla() << endl;
            cin >> tmp;
            takimim[stoi(tmp)]->oyuncuGoster();
        }
    }
    return 1;
}