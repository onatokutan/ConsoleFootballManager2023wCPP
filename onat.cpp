#include <iostream>
#include <stdlib.h>     
#include <time.h>      
#include <string>

using namespace std;
string oyuncuAd[]={//36
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
"MUSTAFA"
};


class oyuncu
{
    private:
        string oyuncuAdi;
        int oyuncuGucu;
        short int oyuncuNo;
    public:
    oyuncu()
    {
        oyuncuAdi=" ";
        oyuncuGucu=0;
        oyuncuNo=0;
    }
    void oyuncuGucAta(int guc)
    {
        oyuncuGucu=guc;
    }
    int oyuncuGucGoster()
    {
        return oyuncuGucu;
    }
    void oyuncuNoAta(int no)
    {
        oyuncuNo=no;
    }
    int oyuncuNoGoster()
    {
        return oyuncuNo;
    }
    void oyuncuAdiAta(string pAd)
    {
        oyuncuAdi=pAd;
    }
    string oyuncuAdiGoster()
    {
        return oyuncuAdi;
    }

};
class takim 
{
 
    private :
        string takimAdi;
        int takimPuan;
        oyuncu oyuncular[11];
    public :
    takim()
    {
        takimAdi = " ";
        takimPuan=0;
    }
    void takimPuanAta(int puan)
    {
        takimPuan=takimPuan+puan;
    }
    int takimPuanGoster()
    {
        return takimPuan;
    }
    void takimAdiAta(string pAd)
    {
        takimAdi = pAd ;       
    }
    string takimAdiGoster()
    {
        return takimAdi;
    }
    void oyuncuekle()
    {
        for(int i=0;i<11;i++)
        {
            oyuncular[i].oyuncuAdiAta(oyuncuAd[rand()%36]+" "+oyuncuAd[rand()%36]);
            oyuncular[i].oyuncuNoAta(rand()%100);
            oyuncular[i].oyuncuGucAta(rand()%5+1);
        }
    }
    void oyuncuGoster()
    {
        for(int i=0;i<11;i++)
        {
            if(oyuncular[i].oyuncuNoGoster()<10){
                cout<<"Numara:"<<oyuncular[i].oyuncuNoGoster()<<"  - "<<oyuncular[i].oyuncuAdiGoster();
                for(int j=0;j<oyuncular[i].oyuncuGucGoster();j++)
                    cout<<"*";
                cout<<endl;
            }
            else{
                cout<<"Numara:"<<oyuncular[i].oyuncuNoGoster()<<" - "<<oyuncular[i].oyuncuAdiGoster();
                for(int j=0;j<oyuncular[i].oyuncuGucGoster();j++)
                    cout<<"*";
                cout<<endl;
            }
        }
    }
    int takimGucuHesapla()
    {
        int takimGucu=0;
        for(int i=0;i<11;i++)
            takimGucu=takimGucu+oyuncular[i].oyuncuGucGoster();
        return takimGucu;
    }
    
};

string takimAd[] ={
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
"Zonguldak"
};

string takimAd2[]{
"United","Wanderers","FC","Kings","Hotspurs","Saint-Germain","City","Wednesday","Forest","Town"
};

int main()
{

    int takimSayisi = 0;
    int kacTakim = 0;
    srand (time(NULL));

    cout<<"Hosgeldin. Baslamadan once ligde kac takim olsun?:\nKac takim:";
    cin>>kacTakim;
    system("cls");
    takim** takimim = new takim*[kacTakim];
    for( int  i = 0; i < kacTakim; ++i )
    {
       takimim[i] = new takim();
       takimim[i]->takimAdiAta(takimAd[rand() %81] +" "+ takimAd2[rand()%10]);
       takimim[i]->oyuncuekle();
       cout<<"["<<i<<"] - "<<takimim[i]->takimAdiGoster()<<"\tTakim Gucu : "
       <<takimim[i]->takimGucuHesapla()<<endl;       
    }
    cout<<"Takimlar olusturuldu."<<endl;
    string tmp;
    string basla;
    cout<<"Baslamak icin 'basla' yazin : \n";
    cin>>basla;
    system("cls");
    int fiksturSayac=0;
    while(basla=="basla")
    {
            string siralama[kacTakim];
            cout<<"1- Lig puan durumu\n2- Hafta ilerle\n3- Oyunculari Goruntule\n";
            cin>>tmp;
            system("cls");
            if(tmp=="1"){
                for(int i=0;i<kacTakim;i++){
              /*          for(int j=0;j<kacTakim-1;j++)
                        {
                            if(takimim[j]->takimPuanGoster()>=takimim[j+1]->takimPuanGoster())
                            {
                                siralama[j]=takimim[j+1]->takimAdiGoster();
                                siralama[j+1]=takimim[j]->takimAdiGoster();
                            }
                        }
                    }
                    for(int i=0;i<kacTakim;i++){
                       cout<<i<<" - "<<siralama[i]<<" "<<takimim[i]->takimPuanGoster()<<" puan"<<endl;
                */  
                    cout<<takimim[i]->takimAdiGoster()<<" "<<takimim[i]->takimPuanGoster()<<endl;               
                }
            }
            if(tmp=="2"){
                {
                    int macSkor[2];
                    for(int i=fiksturSayac;i<kacTakim+fiksturSayac;i=i+2){
                        if(takimim[i%kacTakim]->takimGucuHesapla() > takimim[(i+1)%kacTakim]->takimGucuHesapla())
                        {
                            takimim[i%kacTakim]->takimPuanAta(3);
                            macSkor[0] = rand()%6;
                            macSkor[1] = rand()%6;
                            while(macSkor[0]==macSkor[1])
                            {
                                macSkor[0] = rand()%6;
                                macSkor[1] = rand()%6;
                            }
                            if(macSkor[0]>macSkor[1])
                                cout<<takimim[i%kacTakim]->takimAdiGoster()<<" "<<macSkor[0]<<" - "
                                <<macSkor[1]<<" "<<takimim[(i+1)%kacTakim]->takimAdiGoster()<<endl;
                            else 
                                cout<<takimim[i%kacTakim]->takimAdiGoster()<<" "<<macSkor[1]<<" - "
                                <<macSkor[0]<<" "<<takimim[(i+1)%kacTakim]->takimAdiGoster()<<endl;

                        }
                        else if(takimim[i%kacTakim]->takimGucuHesapla() == takimim[(i+1)%kacTakim]->takimGucuHesapla())
                        {
                            takimim[i%kacTakim]->takimPuanAta(1);
                            takimim[(i+1)%kacTakim]->takimPuanAta(1);
                            macSkor[0] = rand()%6;
                            cout<<takimim[i%kacTakim]->takimAdiGoster()<<" "<<macSkor[0]<<" - "
                            <<macSkor[0]<<" "<<takimim[(i+1)%kacTakim]->takimAdiGoster()<<endl;
                        }
                        else if(takimim[i%kacTakim]->takimGucuHesapla() < takimim[(i+1)%kacTakim]->takimGucuHesapla()) 
                        {
                            takimim[(i+1)%kacTakim]->takimPuanAta(3);
                            macSkor[0] = rand()%6;
                            macSkor[1] = rand()%6;
                            while(macSkor[0]==macSkor[1])
                            {
                                macSkor[0] = rand()%6;
                                macSkor[1] = rand()%6;
                            }
                            if(macSkor[0]>macSkor[1])
                                cout<<takimim[i%kacTakim]->takimAdiGoster()<<" "<<macSkor[1]<<" - "
                                <<macSkor[0]<<" "<<takimim[(i+1)%kacTakim]->takimAdiGoster()<<endl;
                            else 
                                cout<<takimim[i%kacTakim]->takimAdiGoster()<<" "<<macSkor[0]<<" - "
                                <<macSkor[1]<<" "<<takimim[(i+1)%kacTakim]->takimAdiGoster()<<endl;

                        }
                        
                    }
                    fiksturSayac++;
                }
            }
            if(tmp=="3"){
                cout<<"Hangi takimin oyunculari goruntulensin? ID sini yaz.\n";
                for(int i=0;i<kacTakim;i++)
                    cout<<"ID:"<<i<<" "<<takimim[i]->takimAdiGoster()<< "\tTakim Gucu : "
                    <<takimim[i]->takimGucuHesapla()<<endl;
                cin>>tmp;
                takimim[stoi(tmp)]->oyuncuGoster();
            }
    }
    return 1;
}