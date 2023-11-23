#include"VILLE.h"
#include"DATEE.h"
#include<iomanip>
#include<iostream>
#include"VOL.h"
#include<fstream>

using namespace std;

VOL::VOL(int n , string e , VILLE v1 , VILLE v2 ,DATEE d1 ,DATEE d2 ,float p , int nb)
{
    numVol=n;
    etatVol=e;
    ville_depart=v1;
    ville_arrivee=v2;
    date_depart=d1;
    date_arrivee=d2;
    prix=p;
    nbplaces=nb;
}

istream& operator>>(istream& in ,VOL& v)
{
    cout<<"numVol :";
    in>>v.numVol;
    cout<<"EtatVol :";
    in>>v.etatVol;
    cout<<"Ville Depart :";
    in>>v.ville_depart;
    cout<<"Ville arrivee :";
    in>>v.ville_arrivee;
    cout<<"date depart :";
    in>>v.date_depart;
    cout<<"date arrivee :";
    in>>v.date_arrivee;
    cout<<"Prix du vol :";
    in>>v.prix;
    cout<<"nombre de places :";
    in>> v.nbplaces;
    return in;
}
ostream& operator<<(ostream& out ,VOL& v)
{
    /*cout<<"numVol :";*/
    out<<v.numVol;
    /*cout<<"EtatVol :";*/
    out<<v.etatVol;
    /*cout<<"Ville Depart :"; /*
     out<<v.ville_depart;
    /*cout<<"Ville arrivee :";*/
     out<<v.ville_arrivee;
   /*cout<<"date depart :";*/
     out<<v.date_depart;
   /*cout<<"date arrivee :";*/
    out<<v.date_arrivee;
    /*cout<<"Prix du vol :";*/
    out<<v.prix;
   /* cout<<"nombre de places :";*/
    out<< v.nbplaces;
    return out;
}


    VOL VOL ::saisirVol()
    {
        int n , nb ;
        DATEE dd, da;
        VILLE vd,va;
        float p ;
        string e;
        cin>>n;
        cin>>e;
        cin>>vd;
        cin>>va;
        cin>>dd;
        cin>>da;
        cin>>p;
        cin>>nb;
        VOL v (n ,e ,vd,va,dd,da,p,nb);
        return v ;
    }



void VOL::afficher()
{


    cout<<"\t*     From  "<<ville_depart.getNom()<<"\t\t\t                      "<<endl;
    cout<<"\t*     To  "<<ville_arrivee.getNom()<<"\t\t\t                      "<<endl;
    cout<<"\t*     Departs:  "<<date_depart.getJour()<<" / ";
    cout<<date_depart.getMois()<<" ";
    cout<<" / "<<date_depart.getAnnee()<<" ";
    cout<<"\     at  "<<date_depart.getHeure();cout<<"h";
    cout<<date_depart.getMin()<<"                   "<<endl;
    cout<<"\t*     Arrives  :"<<date_depart.getJour()<<" / "<<date_depart.getMois()<<" / "<<date_depart.getAnnee()<<" "<<"       at   "<<date_depart.getHeure()<<"h"<<date_depart.getMin()<<"\t\t    "<<endl;
    cout<<"\t*     Price : "<<prix<<"\t\t\t                      "<<endl;
    cout<<"\t*     Number of places: "<<nbplaces<<"\t\t\t      "<<endl;
    cout<<"\t*                                                     "<<endl;
}


VOL::~VOL()
{

}

void VOL::creerFichierVol(fstream&f)
 {
    int choix ;
     cout<<"*choix 1* : creer un nouveau fichier *choix 2* : modifier fichier ";
     cin>>choix;
     if (choix==1)
     {
     f.open("d:\\fichierVol.txt",ios::in |ios::out |ios::trunc);
     if (!f.is_open()) exit(-1);
     }
     else if (choix==2)
     {
     f.open("d:\\fichierVol.txt",ios::in |ios::out   );
     if (!f.is_open()) exit(-2);
     }
 }
void VOL:: RemplirFichierVol(fstream&f ,VOL a)
{


  f<<a<<endl;


}
void VOL::lireVolDuFichier(fstream& f,VOL v)
{
    f>>v;
    cout<<v<<endl;
}
