#ifndef ATHLETE_H
#define ATHLETE_H
#include <string>
using namespace std;

class Athlete {
  private:
    string name_;
    unsigned points_;
  public:
    Athlete();
    Athlete(string, unsigned);

    //mutators
    void setName(string);
    void setPoints(unsigned);
    void addPoints(unsigned);

    //Accessors
    string getName() const;
    unsigned getPoints() const;

};

#endif
