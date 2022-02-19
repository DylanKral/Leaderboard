#include <iostream>
#include <fstream>
#include <iomanip>
#include "library.h"
using namespace std;

void add_athlete(vector<Athlete>& v, const Athlete& a) {
  v.push_back(a);
} //end of build

void display_all(const vector<Athlete>& v) {
  cout << left;
  cout << "Athletes and their points:\n";
  for (int i = 0; i < v.size(); i++) {
    cout << setw(25) << v[i].getName();
    cout << v[i].getPoints() << endl;
  }
} //end of display
