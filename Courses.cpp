#include <string>
#include <iostream>
#include "Courses.h"


void Courses::classer(){


}

void Courses::remplaceScore(){
    if (int i < _score1){
        _score3 = _score2;
        _score2 = _score1;
        _score1 = i;
    }
    if (int i <_score2 && int i >_score1){ 
         _score3 = _score2;
         _score2 = i;
    }
    if (int i <_score3 && (int i >_score2){
        _score3 = i;
    }

}

std::string Courses::getNomCourse(){
    return _nomCourse;
}

std::string Courses::getNomMeilleurScore(){
    return _nomMeilleurScore;
}

void Courses::moyenne(){
    moyenne = (_score1 + _score2 + _score3)/3
    std:: cout << "Le temps moyen sur cette course est de "moyenne" secondes" << std::endl;
}
void Courses::remplaceScoreJ({
    if(int i < _scorej)
        _scorej = i;
}

void Courses::blockScore(){
    if (int i >999){
        i =999;
    }
}

void Courses::noScore(){
    if (_score1 = nul){
        _score1 = -1;
        _score2 = -1;
        _score3 = -1;
    }
     if (_score2 = nul){
        _score2 = -1;
        _score3 = -1;
    }
     if (_score3 = nul){
        _score3 = -1;
    }
}

void Courses::getNomMeilleurScore(){
    std::cout << _score1;
    std::cout << _nomMeilleurScore << std::endl;
}

void Courses::afficheClassement(){
    std::cout << _score1;
    std::cout << _nomMeilleurScore << std::endl;
    std::cout <<_score2 <<std::endl;
    std::cout <<_score3 <<std::endl;
}

