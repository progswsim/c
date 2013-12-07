#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;




//KLASA ZWIERZE*****************************************************************
class zwierze{
      
      private:        
      string nazwaPolska;
      string nazwaLacinska;
      string gatunek;
      double sredniWiek;
      
      
      public:
      static int liczbaOsobnikow;     
//Konstruktory******************************************************************
      zwierze()
      {
               nazwaPolska = "Kot";
               nazwaLacinska = "Kot Lac";
               gatunek = "Pantera";
               sredniWiek = 16.3;
               liczbaOsobnikow = 0;
      }
      
      zwierze(string nazwaPolska, string in_nazwaLacinska, string in_gatunek, double in_sredniWiek, int in_liczbaOsobnikow)
      {
               this -> nazwaPolska = nazwaPolska;
               nazwaLacinska = in_nazwaLacinska;
               gatunek = in_gatunek;
               sredniWiek = in_sredniWiek;
               liczbaOsobnikow = in_liczbaOsobnikow;
      }   
      
         
//Funkcje***********************************************************************

      static void rozmnoz(int ile)
      {
             liczbaOsobnikow = ile;
      }
                                                                                
      string podajNazwe()
      {
             return nazwaPolska;
      }
      
      string podajNazweLac()
      {
             return nazwaLacinska;
      }
      
      void wyswietlZwierze()
      {
           cout <<"\n"<<"Nazwa polska: "<<nazwaPolska<<"\nNazwa lacinska: "<<nazwaLacinska<<
                "\nGatunek: "<<gatunek<<"\nSredni wiek: "<<sredniWiek<<"\n"<<"Ilosc: "<<liczbaOsobnikow<<"\n";
      }
      
      void wpiszNazwe(string in_nazwaPolska)
      {
           nazwaPolska = in_nazwaPolska;
      }
      
      
      void wpiszNazwe(string in_nazwaPolska, string in_nazwaLacinska);
      
     
      
};
//KONIEC KLASY ZWIERZE**********************************************************

//KLASA SSAK********************************************************************
class ssak : public zwierze {
      
      private:
              string typ;
      public:
      ssak()
      {
            typ = "Ladowy";
      }
      
      ssak(string in_typ)
      {
           typ = in_typ;
      }
      
      void wyswietlSsak()
      {
           wyswietlZwierze();
           cout << "Typ: " << typ << "\n";
      }
      
      void rozmnoz(int ile)
      {
           liczbaOsobnikow = ile+2;
      }
                  
      
};
//KONIEC KLASY SSAK*************************************************************


void zwierze::wpiszNazwe(string in_nazwaPolska, string in_nazwaLacinska)
{
     nazwaPolska = in_nazwaPolska;
     nazwaLacinska = in_nazwaLacinska;
}

int zwierze::liczbaOsobnikow;
void zwierze::rozmnoz(int ile);
      
int main(int argc, char *argv[])
{
    zwierze kot, pies("Pies", "Pies Lac", "Wilk", 35.8, 3);
    kot.wyswietlZwierze();
    pies.wyswietlZwierze();
    
    cout << "\nPo rozmnozeniu kota.\n";
    kot.rozmnoz(7);
    pies.wyswietlZwierze();
    
    ssak mobydick("Wodny");
    mobydick.wyswietlSsak();
    
    mobydick.rozmnoz(10);
    mobydick.wyswietlSsak();

    
    system("PAUSE");
    return EXIT_SUCCESS;
}


