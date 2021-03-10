#include <string>
#include <iostream>

class Courses{ 
    private:
        std::string _nomCourse;
        std::string _nomMeilleurScore;
        int _score1;
        int _score2;
        int _score3;
        int _scorej;

    public:
        std::string getNomCourse();
        std::string getNomMeilleurScore();
        void afficheClassement();
        void classer();
        void moyenne();
        void getNomMeilleurScore();
        void remplaceScore();
        void blockScore();
        void noScore();
        void remplaceScoreJ();
            
};