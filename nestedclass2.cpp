#include<iostream>
using namespace std;
class Gun{
    public:
  int damage;
  int scope;
};
class player{
    
    class Helmet{
        int hp;
        int level;
        public:
        void sethp(int hp){
            this->hp=hp;
        }
         void setlevel(int level){
            this->level=level;
        }
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }

    };

    int score;
    int health;
    Gun gun;
    Helmet helmet;

    public:
    void sethealth(int health){
        this->health=health;
    }
     void setscore(int score){
        this->score=score;               //class = parameter
    }
     Gun setgun(Gun gun){
       this->gun=gun;
    }
     void sethelmet(int level){
         Helmet *helmet=new Helmet;
         helmet->setlevel(level);
           int health=0;
            if(level==1){
              health=25;
            }
             else if(level==2){
               health=50;
            }
            else if(level==3){
               health=100;
            }
            else {
              cout<<"error,ivalid level";
            }
        helmet->sethp(health);

      this->helmet=*helmet;
        
    }
    int gethealth(){
        return health;
    }
     int getscore(){
       return score;
    }
    Gun getgun(){
        return gun;
    }
   void gethelmet(){
    cout<<"level : "<< helmet.getlevel()<<endl;
    cout<<"hp : "<< helmet.gethp();               //why endl not used
   }
   

};

  int main(){
    player abhi ,raghav;

     Gun akw;
    akw.damage=45;
    akw.scope=78;

     Gun akwa;
    akwa.damage=95;
    akwa.scope=72;
    
    abhi.setscore(34);
    abhi.sethealth(67);
    abhi.setgun(akwa);
    abhi.sethelmet(3);

    raghav.setscore(74);
    raghav.sethealth(67);
    raghav.setgun(akw);
    raghav.sethelmet(2);

    abhi.gethelmet();
    // cout<<endl;
    raghav.gethelmet();
  }