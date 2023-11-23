#ifndef VILLE_H_INCLUDED
#define VILLE_H_INCLUDED



#include <string>
#include <iostream>
using namespace std;

class VILLE
{
    int code ;
    string nom ;
    string aeroport ;
    string description ;

public :
     VILLE(int= 0 , string=" ",string=" ",string=" ");
     ~VILLE ();
     VILLE  saisir();
     void affiche() ;

     int  getCode(){return code;}
     string getNom(){return nom;}
     string getAero(){return aeroport;}
     string getDescription(){return description;}

     void setCode(int c ){code=c;}
     void setNom(int n){nom=n;}
     void setAero(int a){ aeroport=a;}
     void setDescription(int d){ description=d;}

      friend istream& operator>>(istream& ,VILLE& );
       friend ostream& operator<< (ostream& ,VILLE& );


};

#endif // VILLE_H_INCLUDED
