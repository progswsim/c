#include <cstdlib>
#include <iostream>

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
             
      
};


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
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
