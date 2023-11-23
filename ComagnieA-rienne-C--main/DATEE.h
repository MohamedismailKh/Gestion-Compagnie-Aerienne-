#ifndef DATEE_H_INCLUDED
#define DATEE_H_INCLUDED

#include<iostream>

using namespace std;

class DATEE
{
    int   heure ;
    int   minute ;
    int jour  ;
    int mois ;
    int annee ;

    public:
        DATEE (int=0,int=0,int=0,int=0 ,int=0);
        ~DATEE ();
        DATEE  saisir();
       void affiche() ;

       int getHeure(){return heure;}
       int getMin(){return minute;}
       int getJour(){return jour; }
       int getMois (){return mois;}
       int getAnnee(){return annee;}

       void setHeure(int h){heure=h;}
       void setMin(int mi){minute=mi;}
       void setJour(int j){jour=j; }
       void setMois (int m){mois=m;}
       void setAnnee(int a){annee=a;}


       friend istream& operator>>(istream& ,DATEE& );
       friend ostream& operator<< (ostream& ,DATEE& );

};

#endif // DATEE_H_INCLUDED
