#include"CLIENT.h"
#include"INDIVIDU.h"
#include<iostream>
using namespace std;
#include<fstream>
CLIENT::CLIENT(string ali,string kharraf , string manouba , string n, int c):INDIVIDU(ali,kharraf,manouba,n)
     {
         code=c ;
     }


ostream& operator<<(ostream& out  , CLIENT& c)
{

     cout<<"code   " ;
    out<<c.code<<endl;
    INDIVIDU *q=&c;
    out<<*q;

    return out;

}
 istream& operator>>(istream& in , CLIENT& c)
 {
     INDIVIDU *q=&c;
     in>>*q;
     cout<<"code"<<endl;
     in>>c.code;
     return in ;
 }

 CLIENT::~CLIENT()
 {

 }
void CLIENT::creerFichierClient(fstream&f)
{
     int choix ;
     cout<<"*choix 1* : creer un nouveau fichier *choix 2* : modifier fichier ";
     cin>>choix;
     if (choix==1)
     {
     f.open("d:\\fichierClient.txt",ios::in |ios::out |ios::trunc);
     if (!f.is_open()) exit(-1);
     }
     else if (choix==2)
     {
     f.open("d:\\fichierClient.txt",ios::in |ios::out  );
     if (!f.is_open()) exit(-2);
     }
}
void CLIENT:: RemplirFichierClient(fstream&f,    CLIENT c )
{


  f<<c<<endl;


}
 void CLIENT:: lireClientDuFichier(fstream& f ,CLIENT c)
 {
     f>>c ;
     cout<<c;
 }
