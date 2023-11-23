#include"RESERVATION.h"
#include"DATEE.h"
#include"CLIENT.h"
#include"PASSAGER.h"
#include<iostream>
#include<fstream>

using namespace std;

RESERVATION::RESERVATION(int n,DATEE d,CLIENT c ,int nb)
{
 numres=n;
 dateres=d;
 reserveur=c;
 nbpassager=nb;

}

RESERVATION::RESERVATION(const RESERVATION &w)
{

 numres=w.numres;
 dateres=w.dateres;
 reserveur=w.reserveur;
 nbpassager=w.nbpassager;
 tab=new PASSAGER [nbpassager];
 for( int i=0; i<nbpassager; i++)
 tab[i]=w.tab[i];
}

RESERVATION::~RESERVATION()
{
   /* delete[] tab;*/

}

ostream& operator <<(ostream& out , RESERVATION& r){

 out<<" numero reservation : "<< r.numres<<endl;
 out<<" date reservation :" << r.dateres<<endl;
 out<<"client :"<<r.reserveur<<endl;
 out<<"nbrePassagers:"<<r.nbpassager<<endl;
 for(int i=0;i<r.nbpassager;i++)
    out<<r.tab[i]<<" "<<endl;

 return out ;

 }

istream& operator >>(istream& in , RESERVATION& r)
{
cout<<"num reservation : ";
in>> r.numres;
cout<<"date  reservation : ";

in>> r.dateres;
cout<<"infos du client : ";

in>>r.reserveur;
cout<<"nbre pssagers : ";

in>>r.nbpassager;
r.tab= new PASSAGER [r.nbpassager];
for(int i=0;i<r.nbpassager;i++)
   {

     cout<<"saisir infos du passager "<<endl ;
    in>>r.tab[i];
   }
return in;
}
void RESERVATION::creerFichierReservation(fstream&f)
{

     int choix ;
     cout<<"*choix 1* : creer un nouveau fichier *choix 2* : modifier fichier ";
     cin>>choix;
     if (choix==1)
     {
     f.open("d:\\fichierReservation.txt",ios::in |ios::out |ios::trunc);
     if (!f.is_open()) exit(-1);
     }
     else if (choix==2)
     {
     f.open("d:\\fichierReservation.txt",ios::in | ios::out  );
     if (!f.is_open()) exit(-2);
     }
}
void RESERVATION::RemplirFichierReservation(fstream&f,RESERVATION r )
{

  f<<r<<endl;

}
void RESERVATION:: lireReservationDuFichier(fstream& f ,RESERVATION r)
{


     f>>r;
     cout<<r;
 }
