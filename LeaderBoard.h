#ifndef LEADER_BOARD_H
#define LEADER_BOARD_H
#include <vector>
#include "Athlete.h"
#include <iterator>
using namespace std;

class LeaderBoard{
  private:
    vector<Athlete> records_;
  public:
    void addAthlete(const Athlete& a);
    double getAverageScore() const;
    void display() const;
};

#endif
