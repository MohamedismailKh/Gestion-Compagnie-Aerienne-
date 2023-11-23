#include <iostream>
#include <map>
#include<fstream>

#include "VOL.cpp"
#include"DATEE.cpp"
#include"VILLE.cpp"
#include"RESERVATION.cpp"
#include"COMPAGNIE.cpp"
#include<windows.h>
#include"INDIVIDU.cpp"
#include"CLIENT.cpp"

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

using namespace std;


int main()
{

DATEE d;
CLIENT cli;
RESERVATION r(1,d,cli,2);

DATEE d1(0,0,0,0,0);
VILLE v(0,"a", "b", "c");
VOL vo(1,"a", v,v,d1,d1 ,2,1);


COMPAGNIE c;
   CLIENT cl;
   PASSAGER pa ;
int cod,np,nr,nv,choixc,choixp,choixv,choixr;

fstream fc,fp,fr,fv;

system("COLOR B0");
while(1)
{
cout<<endl;
cout<<endl;

cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|                 ** COMPAGNIE AEERIENNE **                    |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-GESTION DES CLIENTS                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-GESTION DES PASSAGERS                             |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-GESTION DES RESERVATIONS                          |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-GESTION DES VOLS                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-EXIT                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
int choix ;
cin>>choix;

if (choix==1)
{

cout<<endl;
cout<<endl;

cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|                ** Gestion Des Clients **                     |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  Liste DES CHOIX                                             |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-Ajouter Client                                    |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-Rechercher Client                                 |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-Supprimer client                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-Afficher la liste des clients                    |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-Retour Menu                                       |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
CLIENT::creerFichierClient(fc);
cout<< "saisir choix du liste";
cin>>choixc;
if (choixc==1)
   {cin>>cl;
   std::pair<int,CLIENT> p =make_pair(cl.getcode(),cl) ;
   c.ajouterClient(p);
   CLIENT::RemplirFichierClient(fc,cl);

   }
 else  if (choixc==2)
  {
     cout<< "saisir le code du client";
     cin>>cod;
    cout<<(c.RechercheClient(cod))->second;

  }
else if (choixc==3)
   {
    cout<< "saisir le code du client";
    cin>>cod;
   c.supprimerClient(cod);
    }

else  if (choixc==4)
   {
       c.afficherListeClient();
       /*CLIENT::lireClientDuFichier(fc,cl);*/
   }
else if(choixc==0)
{
cout<<endl;
cout<<endl;

cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|               ** COMPAGNIE AEERIENNE **                      |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-GESTION DES CLIENTS                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-GESTION DES PASSAGERS                             |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-GESTION DES RESERVATIONS                          |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-GESTION DES VOLS                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-EXIT                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;

}
}

else if (choix==2)
{
cout<<endl;
cout<<endl;

cout<<"\t\t\t\t*********************!*************************************************"<<endl;
cout<<"\t\t\t\t***|                ** Gestion Des Passagers **                   |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-Ajouter Passager                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-Rechercher Passager                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-Supprimer Passager                                |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-Afficher la liste des passagers                   |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-Retour Menu                                       |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;

PASSAGER::creerFichierPASSAGER(fp);
cout<< "saisir choix du liste";
cin>>choixp;
if (choixp==1)
   {cin>>pa;
   std::pair<int,PASSAGER> p1 =make_pair(pa.getnumpass(),pa) ;
   c.ajouterPassager(p1);
   PASSAGER::RemplirFichierPassager(fp,pa);

   }
 else  if (choixp==2)
  {
     cout<< "saisir le numereo du passeport  du passager";
     cin>>np;
    cout<<(c.RecherchePassager(np))->second;

  }
else if (choixp==3)
   {
    cout<< "saisir le code du client";
    cin>>np;
   c.supprimerPassager(np);
    }

else  if (choixp==4)
   {
       c.afficherListePassager();
   }
else if(choixp==0)
{
cout<<endl;
cout<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|               ** COMPAGNIE AEERIENNE **                      |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-GESTION DES CLIENTS                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-GESTION DES PASSAGERS                             |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-GESTION DES RESERVATIONS                          |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-GESTION DES VOLS                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-EXIT                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;

}

}
else if (choix==3)
{
cout<<endl;
cout<<endl;

cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|                ** Gestion Des Reservations **                 |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-Reserver un Vol                                   |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-Annuler Reservation                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-Rechercher Reservation                            |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-Afficher la liste des Reservations                |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-Retour Menu                                       |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
RESERVATION::creerFichierReservation(fr);
cout<< "saisir choix du liste";
cin>>choixr;
if (choixr==1)
   {cin>>r;
   std::pair<int,RESERVATION> p2 =make_pair(r.getnumres(),r) ;
   c.ajouterReservation(p2);
   RESERVATION::RemplirFichierReservation(fr,r);

   }
 else
    if (choixr==3)
  {
     cout<< "saisir le numero du reservation";
     cin>>nr;
    cout<<(c.RechercherRes(nr))->second;

  }
else if (choixr==2)
   {
    cout<< "saisir le numero du reservation ";
    cin>>cod;
   c.supprimerReservation(cod);
    }

else  if (choixr==4)
   {
       c.afficherListeReservation();
   }

else if(choixr==0)
{
cout<<endl;
cout<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|               ** COMPAGNIE AEERIENNE **                      |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-GESTION DES CLIENTS                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-GESTION DES PASSAGERS                             |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-GESTION DES RESERVATIONS                          |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-GESTION DES VOLS                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-EXIT                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;

}
}

else if (choix==4)
{
cout<<endl;
cout<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|                  ** Gestion Des Vols **                      |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-Ouvrir  Vol                                       |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-Fermer Vol                                        |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-Rechercher Vol                                    |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-Afficher la liste des Vols                        |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-Retour Menu                                       |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
VOL::creerFichierVol(fv);
cout<< "saisir choix du liste";
cin>>choixv;
if (choixv==1)
   {
   cin>>vo;
   std::pair<int,VOL> p3 =make_pair(vo.getnumVol(),vo) ;
   c.AjouterVol(p3);
   VOL::RemplirFichierVol(fv,vo);

   }
 else  if (choixv==2)
  {
     cout<< "saisir le numero du Vol ";
     cin>>nv;
    cout<<(c.RechercheVOL(nv))->second;

  }
else if (choixv==3)
   {
    cout<< "saisir le numero du Vol ";
    cin>>nv;
   c.supprimerVol(nv);
    }

else  if (choixv==4)
   {
       c.afficherListeVol();
   }
else if(choixv==0)
{
cout<<endl;
cout<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
cout<<"\t\t\t\t***|                ** COMPAGNIE AEERIENNE **                     |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|  MENU DES CHOIX                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          1-GESTION DES CLIENTS                               |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          2-GESTION DES PASSAGERS                             |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          3-GESTION DES RESERVATIONS                          |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          4-GESTION DES VOLS                                  |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|          0-EXIT                                              |***"<<endl;
cout<<"\t\t\t\t***|                                                              |***"<<endl;
cout<<"\t\t\t\t***|______________________________________________________________|***"<<endl;
cout<<"\t\t\t\t**********************************************************************"<<endl;
}

}


else if(choix==0)
{
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"\t\t\t\t    ______________________________________________________________ "<<endl;
cout<<"\t\t\t\t   |                                                              |"<<endl;
cout<<"\t\t\t\t   |                                                              |"<<endl;
cout<<"\t\t\t\t   |                                                              |"<<endl;
cout<<"\t\t\t\t   |             ***  Merci Pour Votre Visite ***                 |"<<endl;
cout<<"\t\t\t\t   |                                                              |"<<endl;
cout<<"\t\t\t\t   |                                                              |"<<endl;
cout<<"\t\t\t\t   |                                                              |"<<endl;
cout<<"\t\t\t\t   |______________________________________________________________|"<<endl;
break ;
}

}

    return 0;
}
