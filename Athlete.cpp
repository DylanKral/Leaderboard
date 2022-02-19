#include <string>
#include <iostream>
#include "Athlete.h"
using namespace std;

Athlete::Athlete() : name_("unknown"), points_(0) {
}

Athlete::Athlete(string name, unsigned points)
: name_(name), points_(points) { 
}

void Athlete::setName(string name) {
  this->name_ = name;
}

void Athlete::setPoints(unsigned val) {
  this->points_ = val;
}
void Athlete::addPoints(unsigned val) {
  this->points_ += val;
}

string Athlete::getName() const {
  return this->name_;
}

unsigned Athlete::getPoints() const {
  return this->points_;
}
