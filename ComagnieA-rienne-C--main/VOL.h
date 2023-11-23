#ifndef VOL_H_INCLUDED
#define VOL_H_INCLUDED


#include<iostream>
#include<string>
#include"VILLE.h"
#include"DATEE.h"

using namespace std ;
class VOL
{

    int numVol;
    string etatVol;
    VILLE ville_depart;
    VILLE ville_arrivee;
    DATEE date_depart;
    DATEE date_arrivee;
    float prix;
    int nbplaces;


public:
    VOL(int ,string , VILLE , VILLE ,DATEE ,DATEE ,float , int);
     ~VOL();
    friend ostream& operator<< (ostream& ,VOL& );
    friend istream& operator>>(istream& ,VOL& );

    void afficher();
    void ouvrir_vol();
    void fermer_vol();
    VOL saisirVol();

    int getnumVol(){return numVol; }
    int getnbplaces(){return nbplaces; }
    float getprix(){return prix; }
    string getetatvol(){return etatVol; }
    VILLE getVilleDepart(){return ville_depart; }
    VILLE getVilleArrivee(){return ville_arrivee; }
    DATEE  getDateDepart(){return date_depart; }
    DATEE getDateArrivee(){return date_arrivee; }

    void setnumVol(int n){ numVol=n; }
    void setnbplaces(int nb){nbplaces=nb; }
    float setprix(float p){prix=p; }
    void setetatvol(string e){etatVol=e; }
    void setVilleDepart(VILLE vd){ ville_depart=vd; }
    void setVilleArrivee(VILLE va){ville_arrivee=va; }
    void setDateDepart(DATEE dd){ date_depart=dd; }
    void setDateArrivee(DATEE da){ date_arrivee=da; }

    static void creerFichierVol (fstream&);
    static void RemplirFichierVol(fstream&,VOL);
    static void lireVolDuFichier(fstream&,VOL );
};
#endif // VOL_H_INCLUDED
