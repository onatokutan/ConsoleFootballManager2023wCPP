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
class taktik
{
private:
    string dizilis;
    string tarz;

public:
    taktik()
    {
        dizilis = " ";
        tarz = " ";
    }
    void dizilisAta(string pdizilis)
    {
        dizilis = pdizilis;
    }
    void tarzAta(string ptarz)
    {
        tarz = ptarz;
    }
    string dizilisGoster()
    {
        return dizilis;
    }
    string tarzGoster()
    {
        return tarz;
    }
};
class oyuncu
{
private:
    string oyuncuAdi;
    int oyuncuAtkGucu;
    int oyuncuMidGucu;
    int oyuncuDefGucu;
    short int oyuncuNo;

public:
    oyuncu()
    {
        oyuncuAdi = " ";
        oyuncuAtkGucu = 0;
        oyuncuMidGucu = 0;
        oyuncuDefGucu = 0;
        oyuncuNo = 0;
    }
    void oyuncuAtkGucAta(int guc)
    {
        oyuncuAtkGucu = guc;
    }
    int oyuncuAtkGucGoster()
    {
        return oyuncuAtkGucu;
    }

    void oyuncuMidGucAta(int guc)
    {
        oyuncuMidGucu = guc;
    }
    int oyuncuMidGucGoster()
    {
        return oyuncuMidGucu;
    }

    void oyuncuDefGucAta(int guc)
    {
        oyuncuDefGucu = guc;
    }
    int oyuncuDefGucGoster()
    {
        return oyuncuDefGucu;
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
    int takimAtkGuc;
    int takimMidGuc;
    int takimDefGuc;
    int takimPuan;
    int takimId;
    oyuncu oyuncular[11];
    taktik takimTaktik;
    bool oyuncuTakim;

public:
    takim()
    {
        takimAdi = " ";
        takimPuan = 0;
        takimAtkGuc = 0;
        takimMidGuc = 0;
        takimDefGuc = 0;
        oyuncuTakim = 0;
    }
    bool getOyuncuTakimi()
    {
        return oyuncuTakim;
    }
    void setOyuncuTakimi(bool pOyuncuTakim)
    {
        oyuncuTakim = pOyuncuTakim;
    }
    int takimAtkGucGoster()
    {
        return takimAtkGuc;
    }
    int takimMidGucGoster()
    {
        return takimMidGuc;
    }
    int takimDefGucGoster()
    {
        return takimDefGuc;
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
            oyuncular[i].oyuncuAtkGucAta(rand() % 5 + 1);
            oyuncular[i].oyuncuMidGucAta(rand() % 5 + 1);
            oyuncular[i].oyuncuDefGucAta(rand() % 5 + 1);
        }
    }
    void oyuncuGoster()
    {
        for (int i = 0; i < 11; i++)
        {
            if (oyuncular[i].oyuncuNoGoster() < 10)
            {
                cout << "Numara:" << oyuncular[i].oyuncuNoGoster() << "  - " << oyuncular[i].oyuncuAdiGoster()
                     << "  | ATK | " << oyuncular[i].oyuncuAtkGucGoster() << "/5"
                     << "  | MID | " << oyuncular[i].oyuncuMidGucGoster() << "/5"
                     << "  | DEF |" << oyuncular[i].oyuncuDefGucGoster() << "/5";

                cout << endl;
            }
            else
            {
                cout << "Numara:" << oyuncular[i].oyuncuNoGoster() << " - " << oyuncular[i].oyuncuAdiGoster()
                     << "  | ATK | " << oyuncular[i].oyuncuAtkGucGoster() << "/5"
                     << "  | MID | " << oyuncular[i].oyuncuMidGucGoster() << "/5"
                     << "  | DEF |" << oyuncular[i].oyuncuDefGucGoster() << "/5";
                cout << endl;
            }
        }
    }
    int takimGucuHesapla()
    {
        int takimGucu = 0;
        for (int i = 0; i < 11; i++)
        {
            takimAtkGuc = takimAtkGuc + oyuncular[i].oyuncuAtkGucGoster();
            takimMidGuc = takimMidGuc + oyuncular[i].oyuncuMidGucGoster();
            takimDefGuc = takimDefGuc + oyuncular[i].oyuncuDefGucGoster();
        }
        return takimGucu;
    }
    void dizilisAta(string ptaktik)
    {
        takimTaktik.dizilisAta(ptaktik);
    }
    void tarzAta(string ptarz)
    {
        takimTaktik.tarzAta(ptarz);
    }
    string dizilisGoster()
    {
        return takimTaktik.dizilisGoster();
    }
    string tarzGoster()
    {
        return takimTaktik.tarzGoster();
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
    int tmphangiTakim;
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
        takimim[i]->takimGucuHesapla();
        cout << "ID:" << i << " " << takimim[i]->takimAdiGoster() << "\t ATK : "
             << takimim[i]->takimAtkGucGoster()
             << "\t MID :"
             << takimim[i]->takimMidGucGoster()
             << "\t DEF :"
             << takimim[i]->takimDefGucGoster()
             << endl;
    }
    cout << "Takimlar olusturuldu." << endl;
    cout << "Bir takim secmek icin ID girin :" << endl;
    cin >> tmphangiTakim;
    takimim[tmphangiTakim]->setOyuncuTakimi(1);
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
        cout << takimim[tmphangiTakim]->takimAdiGoster() << endl
             << "1- Lig puan durumu\n2- Fikstur Goster\n3- Oyunculari Goruntule\n4- Taktik Ayarlari";
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
            for (int i = 0; i < kacTakim; i++)
            {
                cout << i + 1 << " . - " << tempTakim[i] << " - " << tempArray[i] << " pts" << endl;
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
                cout << "ID:" << i << " " << takimim[i]->takimAdiGoster() << "\t ATK : "
                     << takimim[i]->takimAtkGucGoster()
                     << "\t MID :"
                     << takimim[i]->takimMidGucGoster()
                     << "\t DEF :"
                     << takimim[i]->takimDefGucGoster()
                     << endl;
            cin >> tmp;
            takimim[stoi(tmp)]->oyuncuGoster();
        }
        if (tmp == "4")
        {
            system("cls");
            cout<<takimim[tmphangiTakim]->takimAdiGoster()<<" - "<<takimim[tmphangiTakim]->dizilisGoster()
            <<" - "<<takimim[tmphangiTakim]->tarzGoster()<<endl;
            cout<<"Dizilis Secin[442/433/352 vs...]"<<endl;
            //buradan devam edilecek
        }
    }
    return 1;
}