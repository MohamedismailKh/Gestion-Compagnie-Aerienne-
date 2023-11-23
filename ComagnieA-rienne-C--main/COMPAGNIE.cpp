#include <map>
#include"COMPAGNIE.h"
#include "PASSAGER.h"
#include "CLIENT.h"
#include "VOL.h"
#include"RESERVATION.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;


COMPAGNIE::COMPAGNIE ( string n)
{
    nom=n;
}
COMPAGNIE::~COMPAGNIE()
{
    mv.clear();
    mc.clear();
    mp.clear();
    mr.clear();
}

map<int,VOL>::iterator COMPAGNIE ::RechercheVOL (int numvol)
{

    map<int , VOL >::iterator it ;
    it=mv.find(numvol);
       return it ;
}


void COMPAGNIE:: AjouterVol ( pair<int,VOL> v)
{
    mv.insert(v);
}

void COMPAGNIE:: supprimerVol(int numVol )
{
    mv.erase(numVol);
}

void COMPAGNIE:: afficherListeVol ()
{
    cout<<"\t*******************************************************"<<endl;
    cout<<"\t* Liste des vols  :                                   " << endl;
    map<int,VOL>::iterator it;
    for(it=mv.begin();it!=mv.end();it++)
       {

       cout<<"\t*      numero  du  vol :        " << it->first<< "                     " ;
       cout<<endl;
       cout<<"\t*         Vol :                                       "<<endl ;
       it->second.afficher();

       }
    cout<<"\t*******************************************************";
}
map<int,RESERVATION>::iterator COMPAGNIE:: RechercherRes(int n)
    {
        map<int,RESERVATION>::iterator it;
        it=mr.find(n);
        return it;
    }


void COMPAGNIE:: ajouterReservation (pair<int,RESERVATION> p)
{
    mr.insert(p);
}

void COMPAGNIE:: supprimerReservation (int numres )
{
    mr.erase(numres);
}

void COMPAGNIE ::afficherListeReservation ()
{
   cout<<" Liste des reservations  :" << endl;
    map<int,RESERVATION>::iterator i;
    for(i=mr.begin();i!=mr.end();i++)
        cout<<"cle"<<i->first<<"valeur "<<i->second<<endl;

}

map<int,CLIENT>::iterator COMPAGNIE ::RechercheClient (int num)
{
    map<int , CLIENT >::iterator it ;
    it=mc.find(num);
       return it ;
}


void COMPAGNIE:: ajouterClient (pair<int,CLIENT> p)
{
    mc.insert(p);
}

void COMPAGNIE:: supprimerClient(int code )
{
    mc.erase(code);
}

void COMPAGNIE:: afficherListeClient ()
{
    cout<<" Liste des clients  :" << endl;
    map<int,CLIENT>::iterator it;
    for(it=mc.begin();it!=mc.end();it++)
        cout<<it->first<<" "<<it->second<<endl;


}
map<int,PASSAGER>::iterator COMPAGNIE:: RecherchePassager(int n)
    {
        map<int,PASSAGER>::iterator it;
        it=mp.find(n);
        return it;
    }


void COMPAGNIE:: ajouterPassager (pair<int,PASSAGER> p)
{
    mp.insert(p);
}

void COMPAGNIE:: supprimerPassager(int numpass )
{
    mp.erase(numpass);
}

void COMPAGNIE:: afficherListePassager ()
{
    cout<<" Liste des passagers  :" << endl;
    map<int,PASSAGER>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}
 void COMPAGNIE::creer_fichierPassager  (fstream& fp)
{
    fp.open("d:\\fichierPassager.txt", ios::in | ios::out | ios::trunc);
    if (!fp.is_open ()) exit(-1);


}
 void COMPAGNIE::creer_fichierReservation  (fstream& fr)
{
    fr.open("d:\\fichierReservation.txt", ios::in | ios::out | ios::trunc);
    if (!fr.is_open ()) exit(-2);

}
void  COMPAGNIE::creerFichierCLIENT(fstream&f)
 {
      f.open("d:\\fichierClient.txt",ios::in |ios::out |ios::trunc);
         if (!f.is_open()) exit(-1);
     }
void  COMPAGNIE::creerFichierVol(fstream&f)
 {
      f.open("d:\\fichierVol.txt",ios::in |ios::out |ios::trunc);
         if (!f.is_open()) exit(-1);
     }
fstream COMPAGNIE::creerFichier()
{
    fstream fc,fp,fr,fv;
    int choix ;
    cout<<"*choix 1* : Vol *choix 2* : Client *choix 3* :Passager *choix 4* :Reservation ";
    cin>>choix ;
    if (choix ==1)
      {
      cout<<"fichier vol:"<<endl;
       VOL::creerFichierVol(fv);
       return fv ;
      }
    else if (choix ==2)
      {
      cout<<"fichierClient:"<<endl;
      CLIENT::creerFichierClient(fc);
      return fc ;
      }
    else  if (choix ==3)
      {
      cout<<"fichierPassager:"<<endl;
      PASSAGER::creerFichierPASSAGER(fp);
      return fp ;
      }
    else if (choix ==4)
      {
      cout<<"fichierReservation:"<<endl;
      RESERVATION::creerFichierReservation(fr);
      return fr;
      }

}
/*void COMPAGNIE::GererFichierClient(fstream&f)
 {
    cout<<"*choix 1* : Remplire *choix 2* : Lire" ;
    int choix;
    cin>>choix;
    if (choix ==1)

     CLIENT::RemplirFichierClient(f);
     else if (choix ==2)
    {
     f.seekg(0);
     CLIENT c ;
     CLIENT::lireClientDuFichier(f,c);
    }
 }*/
 /*void COMPAGNIE::GererFichierReservation(fstream&f)
{
    cout<<"*choix 1* : Remplire *choix 2* : Lire" ;
    int choix;
    cin>>choix;
    if (choix ==1)
    RESERVATION::RemplirFichierReservation(f);
   else if (choix ==2)
    {
    f.seekg(0);
    DATEE d;
    CLIENT c;
     RESERVATION r(1,d,c,1);
     RESERVATION::lireReservationDuFichier(f,r);
    }

}
*/
/*void COMPAGNIE::GererFichierPassager(fstream&f)
 {
     cout<<"*choix 1* : Remplire *choix 2* : Lire" ;
    int choix;
    cin>>choix;
    if (choix ==1)

     PASSAGER::RemplirFichierPassager(f,pa);
     else if (choix ==2)
    {
     f.seekg(0);
     PASSAGER p ;
     PASSAGER::lirePassagerDuFichier(f,p);
    }
 }*/

/*void COMPAGNIE::GererFichierVol(fstream&f)
{
   cout<<"*choix 1* : Remplire *choix 2* : Lire" ;
    int choix;
    cin>>choix;
    if (choix ==1)
   VOL::RemplirFichierVol(fv,vo);
   else if (choix ==2)
    {
    f.seekg(0);
   DATEE d;
  VILLE v;
  VOL a(1,"a",v,v,d,d,1,0);

     VOL::lireVolDuFichier(f,a);
    }
}
*/
