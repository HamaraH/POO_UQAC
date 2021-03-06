
#include "..\HPP\Entraineur.hpp"
#include "..\HPP\Sportif.hpp"

#include <string>

    Entraineur::Entraineur(){

    }

    Entraineur::Entraineur(std::string nom, std::string prenom, std::string lieu_grade, std::vector<Titre_gagne*> liste_titre) : Sportif(nom, prenom){

        this->lieu_grade=lieu_grade;
        this->titres = liste_titre;

    }

    Entraineur::Entraineur(std::string nom,std::string prenom,std::string lieu_grade){

        this->setNom(nom);
        this->setPrenom(prenom);
        this->setLieuGrade(lieu_grade);
        
    }

    Entraineur::~Entraineur(){
        while(!this->titres.empty()){
            this->titres.back()->~Titre_gagne();
            this->titres.pop_back();
        }
    }

    void Entraineur::addTitre(Titre_gagne* titre){
        this->titres.push_back(titre);
    }

    std::vector<Titre_gagne*> Entraineur::getTitreClub(Club* club){
        std::vector<Titre_gagne*> titre_du_club;
        for(int i=0;i<this->titres.size();i++){
            if(this->titres[i]->getClub()==club){
                titre_du_club.push_back(this->titres[i]);
            }
        }
        return titre_du_club;
    }

    std::vector<Titre_gagne*> Entraineur::getTitrePalmares(std::string titre){
        std::vector<Titre_gagne*> titre_du_club;
        for(int i=0;i<this->titres.size();i++){
            if(this->titres[i]->getPalmares()->getTitre()==titre){
                titre_du_club.push_back(this->titres[i]);
            }
        }
        return titre_du_club;
    }

    std::string Entraineur::getLieuGrade(){
        return this->lieu_grade;
    }

    void Entraineur::setLieuGrade(std::string lieu_grade){
        this->lieu_grade=lieu_grade;
    }

    std::vector<Titre_gagne*> Entraineur::getTitres(){
        return this->titres;
    }

    void Entraineur::setTitres(std::vector<Titre_gagne*> titres){
        this->titres=titres;
    }