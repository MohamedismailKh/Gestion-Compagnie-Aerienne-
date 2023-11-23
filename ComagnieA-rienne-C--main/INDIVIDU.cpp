#include<iostream>
using namespace std;
#include"INDIVIDU.h"
#include<string>
INDIVIDU::INDIVIDU(string a,string b , string c, string n)
{
    /*cout<<"Appel au constructeur individu"<<endl;*/
    nom=a;
    prenom=b;
    adresse=c;
    numtel=n;
}

INDIVIDU::~INDIVIDU()
{

}

void INDIVIDU::saisie()
{
    cout<<"nom "<<endl;
    cin>>nom;
    cout<<" prenom "<<endl;
    cin>>prenom;
    cout<<"adresse:"<<endl;
    cin>>adresse;
    cout<<" numero de telephone:"<<endl;
    cin>>numtel;

}
void INDIVIDU::afficher()
{
    cout<<"le nom est:"<<nom<<endl;
    cout<<"le prenom est:"<<prenom<<endl;
    cout<<"l adresse est:"<<adresse<<endl;
    cout<<"le numero de telephone:"<<numtel<<endl;


}
istream& operator>>(istream& in  , INDIVIDU& i)
{
    cout<<"nom "<<endl;
    in>>i.nom;
    cout<<" prenom "<<endl;
    in>>i.prenom;
    cout<<"adresse:"<<endl;
    in>>i.adresse;
    cout<<" numero de telephone:"<<endl;
    in>>i.numtel;
    return in;

}

ostream& operator<<(ostream& out  , INDIVIDU& i)
{
    out<<i.nom<<endl;
    out<<i.prenom<<endl;
    out<<i.adresse<<endl;
    out<<i.numtel<<endl ;
    return out;

}
