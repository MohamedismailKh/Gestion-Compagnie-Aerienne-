#ifndef INDIVIDU_H_INCLUDED
#define INDIVIDU_H_INCLUDED

#include<iostream>
using namespace std;
#include<string>
#include<iostream>

class INDIVIDU
{
protected:
    string nom;
    string prenom;
    string adresse;
    string numtel;
public:
     INDIVIDU(string="",string="",string="",string="");
    ~INDIVIDU();
     virtual void saisie();
     virtual void afficher();
    friend istream& operator>>(istream&  , INDIVIDU& );
    friend ostream& operator<<(ostream&  , INDIVIDU& );

};

#endif // INDIVIDU_H_INCLUDED
