#include"PASSAGER.h"
#include<fstream>

 PASSAGER::PASSAGER(string nom ,string prenom,string ad,string numtel,int pass):INDIVIDU(nom,prenom,ad,numtel)
 {
     numpass=pass;
 }

PASSAGER::~PASSAGER()
{

}
istream& operator>>(istream& in  , PASSAGER& pa)
{
    INDIVIDU *q=&pa;
     in>>*q;
     cout<<"numero passeport :";
     in>>pa.numpass;
    return in;

}


ostream& operator<<(ostream& out  , PASSAGER& pa)
{
    INDIVIDU *q=&pa;
    out<<*q;
    out<<pa.numpass;
    return out;

}
void PASSAGER::creerFichierPASSAGER(fstream&f)
{
int choix ;
     cout<<"*choix 1* : creer un nouveau fichier *choix 2* : modifier fichier ";
     cin>>choix;
     if (choix==1)
     {
     f.open("d:\\fichierPassager.txt",ios::in |ios::out |ios::trunc);
     if (!f.is_open()) exit(-1);
     }
     else if (choix==2)
     {
     f.open("d:\\fichierPassager.txt",ios::in  |ios::out );
     if (!f.is_open()) exit(-2);
     }
}
void PASSAGER:: RemplirFichierPassager(fstream&f,    PASSAGER p )
{


  f<<p<<endl;


}
void PASSAGER:: lirePassagerDuFichier(fstream& f ,PASSAGER p)
{


     f>>p ;
     cout<<p;
 }
