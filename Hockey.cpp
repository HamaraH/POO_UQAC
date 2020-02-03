#include <iostream>
#include <string>
#include "Hockey.hpp"

using namespace std;

    Hockey::Hockey(string histoire, string couleur,vector<Joueur> liste){
        this->Histoire=histoire;
        this->Couleur=couleur;
        this->Liste_joueurs = liste;
    }

    void Hockey::printHistoire(){
        cout <<this->Histoire;
    }

    string Hockey::getHistoire(){

        return Histoire;
    }

    void Hockey::setHistoire(string histoire){

        Histoire = histoire;
    }

    string Hockey::getCouleur(){

        return Couleur;
    }

    void Hockey::setCouleur(string couleur){

       Couleur = couleur;
    }

    string Hockey::getDate(){

        return Date;
    }

    void Hockey::setDate(string date){

       Date = date;
    }

    vector<Joueur> Hockey::getListeJoueurs(){
        return this->Liste_joueurs;
    }

    void Hockey::setListeJoueurs(vector<Joueur> liste){

        this->Liste_joueurs = liste;
    }


