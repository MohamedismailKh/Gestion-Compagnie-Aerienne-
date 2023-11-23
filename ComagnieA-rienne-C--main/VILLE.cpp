#include "VILLE.h"
#include <string>
#include <iostream>
using namespace std;

 VILLE::VILLE( int c , string n , string a , string d )
{
    code=c ;
    nom=n;
    aeroport=a;
    description=d;
}
VILLE::~VILLE()
{

}
void  VILLE::affiche()
{
    cout << "le code de la ville : " << code <<endl;
    cout << "le nom de la ville : " << nom <<endl;
    cout << "l'aeroport de cette ville : " << aeroport  <<endl;
    cout << "Description de la ville :  : " << description  <<endl;


}
VILLE  VILLE::saisir()
{
    int c ;
    string n,a,d;
    cout << "saisir le code de la ville : " <<endl ;
    cin >> c ;
    cout << "saisir le nom de la ville : " <<endl ;
    cin >> n ;
    cout << "saisir le nom de l areoport de cette ville  : " <<endl ;
    cin >> a ;
    cout << "saisir une description  de la ville : " <<endl ;
    cin >> d ;
    VILLE v(c,n,a,d);
    return v ;

}

istream& operator>>(istream& in ,VILLE& v)

    {
        cout<<"code :";
        in>> v.code;
        cout<<"nom :";
        in>> v.nom;
        cout<<"aeroport  :";
        in>> v.aeroport;
      cout<<"description :";
        in>>v.description;
        return in;
    }
ostream& operator<< (ostream& out ,VILLE&v )
{


        cout<<"code : ";out<< v.code<<endl;
        cout<<"nom : ";out<< v.nom<<endl;
        cout<<"aeroport : ";out<< v.aeroport<<endl;
        cout<<"description : ";out<<v.description<<endl;
        return out;

}
