#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class owoc
{
      protected:
              double waga;
              int rozmiar;
              
      public:
          
             
             
             virtual string obierz(){};
             virtual void zasadz(){};
};

//BANAN
class banan : public owoc
{
      private:
              int dlugosc;
              
      public:
             banan()
             {
                        dlugosc = 20;
             }

             banan(int in_dlugosc)
             {
                        dlugosc = in_dlugosc;
             }
             string obierz()
             {
                  return "Obrano banana.\n";
             }
             
             void zasadz()
             {
                  cout << "Zasadzono banana.\n";
             }
             
             void info()
             {
                  cout<<"Waga: "<<waga<<"\nRozmiar: "<<rozmiar<<"\nDlugosc: "<<dlugosc<<"\n\n";
             }
      
};
//JABŁKO
class jablko : public owoc
{
      private:
              int iloscPestek;
              
      public:
             jablko()
             {
                        iloscPestek = 5;
             }
             
             string obierz()
             {
                  return "Obrano jablko.\n";
             }
             
             void zasadz()
             {
                  cout << "Zasadzono jablko.\n";
             }
             
             void info()
             {
                  cout<<"Waga: "<<waga<<"\nRozmiar: "<<rozmiar<<"\nIlosc pestek: "<<iloscPestek<<"\n\n";
             }
      
};
//TRUSKAWKA/
class truskawka : public owoc
{
      private:
              int iloscPlamek;
              
      public:
             truskawka()
             {
                        iloscPlamek = 30;
             }
             string obierz()
             {
                  return "Obrano truskawke.\n";
                  
             }
             
             void zasadz()
             {
                  cout << "Zasadzono truskawke.\n";
             }
             
             void info()
             {
                  cout<<"Waga: "<<waga<<"\nRozmiar: "<<rozmiar<<"\nIlosc plamek: "<<iloscPlamek<<"\n\n";
             }
      
};

int main(int argc, char *argv[])
{
    
    int i, rnd;
    
    owoc *w[10];
    jablko j1;
    banan b1;
    truskawka t1;
    
    string plik;
    cout << "\nPodaj nazwe pliku: ";
    cin >> plik;
    ofstream pisz(plik.c_str());
    for(i=0; i<10;i++)
    {
    rnd = rand() % 300;
    if(rnd<100){         
        w[i] = &j1;
        pisz << w[i] -> obierz();
        
    }
    if(rnd>100 && rnd < 200){         
        w[i] = &b1;
        pisz << w[i] -> obierz();
    }
    
     if(rnd > 200){         
        w[i] = &t1;
        pisz << w[i] -> obierz();
    }
    }
  
  
  
  
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
/*
owoc -> 3rozne owoce banan jablko truskawka z metodami zasadz obierz
w main tablica na owoce 10

*/
