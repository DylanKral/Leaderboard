#include <iostream>
#include <iomanip>
#include "LeaderBoard.h"
#include "Athlete.h"
#include <iterator>
using namespace std;

void LeaderBoard::addAthlete(const Athlete& a) {
  // add the new Athlete object at the end of the vector records_
    this-> records_.push_back(a);
  
}

double LeaderBoard::getAverageScore() const {
  // you need to implement this function
  double temp, average;

  vector<Athlete>::const_iterator itr = records_.begin();

  while(itr!=records_.end())
  {
    temp=itr->getPoints();
    average+=temp;
    itr++;
  }
  
  average=average/records_.size();

  return average;
}

void LeaderBoard::display() const {
  if (this->records_.empty())
    cout << "No athlete available" << endl;
  else {
    for (int i = 0; i < this->records_.size(); i++) {
      cout << setw(25) << this->records_[i].getName();
      cout << this->records_[i].getPoints() << endl;
    } //end of for
  } //end of else
}
