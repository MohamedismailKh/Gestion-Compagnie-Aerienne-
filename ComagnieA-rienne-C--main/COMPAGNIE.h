#ifndef COMPAGNIE_H_INCLUDED
#define COMPAGNIE_H_INCLUDED

#include <map>
#include<string>
#include<iostream>
#include "PASSAGER.h"
#include "CLIENT.h"
#include "VOL.h"
#include"RESERVATION.h"
#include<fstream>


using namespace std ;
class COMPAGNIE
{
    string nom ;

    map<int,PASSAGER> mp;
    map<int,CLIENT> mc;
    map<int,VOL> mv;
    map<int,RESERVATION> mr;


public :


        COMPAGNIE ( string=" ");
        ~COMPAGNIE();
        friend ostream& operator<< (ostream& ,COMPAGNIE* );
        friend istream& operator>>(istream& ,VOL* );

        map<int,PASSAGER>::iterator RecherchePassager (int);
        void ajouterPassager(pair<int,PASSAGER>);
        void supprimerPassager(int);
        void afficherListePassager ();

        void supprimerVol(int);
        void  AjouterVol (pair<int,VOL> );
        map<int,VOL>::iterator RechercheVOL (int);
        void afficherListeVol ();

        void ajouterReservation(pair<int,RESERVATION>);
        void afficherListeReservation ();
        map<int,RESERVATION>::iterator  RechercherRes(int );
        void supprimerReservation  (int);

        map<int,CLIENT>::iterator  RechercheClient (int);
        void ajouterClient(pair<int,CLIENT>);
        void afficherListeClient ();
        void supprimerClient(int);


        static void creerFichierVol  (fstream&);
        static void creer_fichierPassager  (fstream&);
         static void creer_fichierReservation  (fstream&);
        static void creerFichierCLIENT(fstream&);
        static void ajouterCLientFichier(fstream&,CLIENT);

        static fstream creerFichier();
        static void GererFichierClient(fstream&);
        static void GererFichierPassager(fstream&);
        static void GererFichierVol(fstream&f);
        static void GererFichierReservation(fstream&);
};

#endif // COMPAGNIE_H_INCLUDED
