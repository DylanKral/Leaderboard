
#include <iostream>
#include <iomanip>
#include <vector>
#include "Athlete.h"
#include "library.h"
#include "LeaderBoard.h"
using namespace std;

int main() {
  LeaderBoard demo;

  Athlete *aPtr;
  string name;

  int size,score;

  cout << "Enter the size of the array: \n";
  cin >> size;

  aPtr = new Athlete[size];

for (int i = 0; i < size; i++)
{
  cin.ignore();
  cout << "Enter a name\n";
  getline(cin,name);
  
  cout << "Enter a score:\n";
  cin >> score;
  
  aPtr[i].setName(name);
  aPtr[i].setPoints(score);
}
  
aPtr[1].addPoints(5);

cout << "\n\nName" << setw(20) << "Points\n";
cout << "-------------------------\n";


for (int i = 0; i < size; i++)
{
  cout <<setw(20) << left << aPtr[i].getName();
  cout << setw(20) << left << aPtr[i].getPoints() << endl;
}
/*
  // add an Athlete object to LeaderBoard object 
  Athlete a1("Matthew Fraser", 984);
  demo.addAthlete(a1);
  
  // add another Athlete object
  a1.setName("Noah Ohlsen");
  a1.setPoints(949);
  demo.addAthlete(a1);

  // add another Athlete object
  demo.addAthlete(Athlete("Bjorgvin Gudmundsson",888));  
  
  // add another Athlete object
  Athlete a2("Scott Panchik", 795);
  demo.addAthlete(a2);

  // call display function to display all athletes data 
  cout << "leaderboard object:\n";
  demo.display();

  double temp;

  temp=demo.getAverageScore();

  cout << "The Average is: " << temp;
*/
delete [] aPtr;
  return 0;
}
