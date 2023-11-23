#ifndef PASSAGER_H_INCLUDED
#define PASSAGER_H_INCLUDED

#include"INDIVIDU.h"

class PASSAGER : public INDIVIDU
{

         int numpass;

    public:
         PASSAGER(string="",string="",string="",string="",int=11);
         ~PASSAGER(void);
         friend istream& operator>>(istream&  , PASSAGER& );
         friend ostream& operator<<(ostream&  , PASSAGER& );
         int getnumpass(){return numpass;}


        static void creerFichierPASSAGER(fstream&);
        static void RemplirFichierPassager(fstream&,PASSAGER );
        static void lirePassagerDuFichier(fstream&,PASSAGER);
};


#endif // PASSAGER_H_INCLUDED
