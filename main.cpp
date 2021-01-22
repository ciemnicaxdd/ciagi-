#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class klasa
{

public:
ifstream plik1;
ofstream plik2;

 vector<int> numbers;

 int roznica;
 int maxx=0;
 int dlugosc;
 int licznik=0;
 int liczba;

 bool czy;


 klasa()
 {
 plik1.open("plik1.txt");
 plik2.open("plik2.txt");
 }


void wczytaj()
{
 while(!plik1.eof())
    {
    plik1>>dlugosc;
    for(int i=0;i<dlugosc;i++)
    {
        plik1>>liczba;
        numbers.push_back(liczba);

    }
    roznica=numbers[1]-numbers[0];
        czy=true;
     for(int i=0;i+1<dlugosc;i++){
    if(roznica!=numbers[i+1]-numbers[i])
    {
    czy=false;
    }
     }
if(czy)
{
    licznik++;

    if(maxx<roznica)
    {
        maxx=roznica;
    }
}
numbers.clear();




    }
plik2<<maxx<<"   "<<licznik;
}


};

int main()
{
    klasa t1;
    t1.wczytaj();
    return 0;
}
