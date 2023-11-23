#include "DATEE.h"
#include <iostream>
using namespace std;

DATEE ::DATEE (int h , int mi , int j , int m , int a )
{
    heure=h ;
    minute=mi;
    jour=j ;
    mois=m;
    annee=a;

}
void DATEE:: affiche()
{

    cout<< heure<< ':'<< minute<<"      " << jour << '/'<< mois <<'/'<< annee << endl ;
}
DATEE ::~DATEE ()
{
    //dtor
}
 DATEE DATEE:: saisir()
 {
     int h,mi,j,m,a;
     cout << "saisir heure heure:minutes " <<endl ;
     cin >> h >> mi ;
     cout << "saisir jour " <<endl ;
     cin >> j ;
     cout << "saisir mois " <<endl ;
     cin >> m ;
     cout << "saisir annee " <<endl ;
     cin >> a ;
     DATEE d(h,mi,j,m,a);
     return d;
 }
istream& operator>>(istream& in ,DATEE& d)

    {
        cout<<"heure: ";
        in>> d.heure;
        cout<<"minutes: ";
        in>> d.minute;
        cout<<"jour : ";
        in>> d.jour;
        cout<<"mois : ";
        in>>d.mois;
        cout<<"annee: ";
        in>>d.annee;

        return in;
    }
ostream& operator<< (ostream& out ,DATEE&d )
{
        cout<<"heure: ";
       out<< d.heure;
       cout<<"h"; out<< d.minute;
        cout<<"   ";
        out<< d.jour;
        cout<<" / ";
        out<<d.mois;
        cout<<" / ";
        out<< d.annee;

        return out;

}
