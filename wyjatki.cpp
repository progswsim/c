#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class Wektor
{
      public:
             double przesX;
             double przesY;
             
      Wektor()
      {
              przesX = 0;
              przesY = 0;
      }
      
      Wektor(double przesX, double przesY)
      {
              this->przesX = przesX;
              this->przesY = przesY;      
      }
      
      Wektor operator* (const double &skalar)
      {
             return Wektor (this->przesX * skalar, this->przesY * skalar);
      }
      
      bool operator< (const Wektor &w)
      {
           double dlugoscLewy = sqrt(pow(this->przesX, 2) + pow(this->przesY, 2));
           double dlugoscPrawy = sqrt(pow(w.przesX, 2) + pow(w.przesY, 2));
           
           if(dlugoscLewy<dlugoscPrawy) { return true; } else { return false; }
      }
      
      bool operator> (const Wektor &w)
      {
           double dlugoscLewy = sqrt(pow(this->przesX, 2) + pow(this->przesY, 2));
           double dlugoscPrawy = sqrt(pow(w.przesX, 2) + pow(w.przesY, 2));
           
           if(dlugoscLewy>dlugoscPrawy) { return true; } else { return false; }
      }
     
};

class Punkt 
{
      public:
             double wspX;
             double wspY;
      
      Punkt()
      {
       wspX = 0;
       wspY = 0;    
      }
      
      Punkt( double wspX, double wspY)
      {
             this->wspX = wspX;
             this->wspY = wspY;
      }
      
      Punkt operator+ (const Wektor &w)
      {
             return Punkt (this->wspX + w.przesX, this->wspY + w.przesY);
      }
      
      bool operator< (const Punkt &p)
      {
           double odlegloscLewy = sqrt(pow(this->wspX, 2) + pow(this->wspY, 2));
           double odlegloscPrawy = sqrt(pow(p.wspX, 2) + pow(p.wspY, 2));
           
           if(odlegloscLewy<odlegloscPrawy) { return true; } else { return false; }
      }
      
       bool operator> (const Punkt &p)
      {
           double odlegloscLewy = sqrt(pow(this->wspX, 2) + pow(this->wspY, 2));
           double odlegloscPrawy = sqrt(pow(p.wspX, 2) + pow(p.wspY, 2));
           
           if(odlegloscLewy>odlegloscPrawy) { return true; } else { return false; }
      }
             
      
};

//Funkcja szablonowa
template <typename Typ>
Typ mniejsza( Typ a, Typ b)
{
     if(a < b) { return a;} else {return b; }
}

int main(int argc, char *argv[])
{
    
    
    Punkt p1 = Punkt(1,2);
    Wektor w1 = Wektor(2,5);
    
    

    cout << "Wspolrzedne punktu p1\nX: "<<p1.wspX<<"\nY: "<<p1.wspY<<"\n";
    cout << "Wspolrzedne wektora w1\nX: "<<w1.przesX<<"\nY: "<<w1.przesY<<"\n";
    
    Punkt p2 = p1 + w1;
    
    cout << "Wspolrzedne punktu p2 (p1+w1)\nX: "<<p2.wspX<<"\nY: "<<p2.wspY<<"\n";
    
    Wektor w2 = w1 * 2;
    
    cout << "Wspolrzedne wektora w2 (w1*2)\nX: "<<w2.przesX<<"\nY: "<<w2.przesY<<"\n";
    
    Punkt p3 = p2 + w2;
    
    cout << "Wspolrzedne punktu p3 (p2+w2)\nX: "<<p3.wspX<<"\nY: "<<p3.wspY<<"\n";
    
    // Zastosowanie funkcji szablonowej
    
    Wektor w3 = mniejsza(w1, w2);
    cout << "w1 i w2, wspolrzedne mniejszego\nX: "<<w3.przesX<<"\nY: "<<w3.przesY<<"\n";
    
    Punkt p4 = mniejsza(p3, p2);
    cout << "p2 i p3, wspolrzedne mniejszego\nX: "<<p4.wspX<<"\nY: "<<p4.wspY<<"\n";
    
    
    Punkt p5 = Punkt(20, 100);
    
    try
    {
          p5.wspX +=100;
          
          if(p5.wspX > 100) { throw p5; }
          if(p5.wspY > 100) { throw p5; }
    }
    
    catch (Punkt p)
    {
          if(p.wspX>100) { cout<<"Wystapil wyjatek, za duza wartosc wspX > 100: "<<p.wspX<<"\n"; }
          if(p.wspY>100) { cout<<"Wystapil wyjatek, za duza wartosc wspY > 100: "<<p.wspY<<"\n"; }
    }

        
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
