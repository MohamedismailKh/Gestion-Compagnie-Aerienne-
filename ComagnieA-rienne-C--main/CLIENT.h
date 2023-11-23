#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include<iostream>
#include<string>
#include"INDIVIDU.h"

using namespace std;

class CLIENT :public INDIVIDU
{
    int code;
public:
     CLIENT(string="",string="",string="",string="", int=0);
     ~CLIENT();
     friend ostream& operator<<(ostream& , CLIENT&);
     friend istream& operator>>(istream& , CLIENT&);

     friend ostream& operator<<(ostream& , CLIENT*);
     friend istream& operator>>(istream& , CLIENT*);
     int getcode(){return code;}

     static void creerFichierClient(fstream&);
     static void RemplirFichierClient(fstream& ,CLIENT);
     static void lireClientDuFichier(fstream&,CLIENT);


};

#endif // CLIENT_H_INCLUDED
