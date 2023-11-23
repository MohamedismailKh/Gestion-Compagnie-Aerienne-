#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED

#include"DATEE.h"
#include"CLIENT.h"
#include"PASSAGER.cpp"
#include<iostream>
using namespace std;
class RESERVATION
{
        int numres;
        DATEE dateres;
        CLIENT reserveur;
        int nbpassager;
        PASSAGER * tab;

    public:
        RESERVATION(int ,DATEE,CLIENT ,int);
        ~RESERVATION( void);
        RESERVATION(const RESERVATION &);

        int getnumres(){return numres;}
        CLIENT getreserveur(){return reserveur;}
        int getnbpassager(){return nbpassager;}
        void setnumres(int n ){numres=n;}
        void setdate(DATEE d ){dateres=d;}
        friend ostream& operator <<(ostream& , RESERVATION&);
        friend istream& operator>>(istream& , RESERVATION&);


       static void creerFichierReservation(fstream&);
       static void RemplirFichierReservation(fstream&,RESERVATION);
       static void lireReservationDuFichier(fstream&,RESERVATION);

};


#endif // RESERVATION_H_INCLUDED
