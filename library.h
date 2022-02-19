#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "Athlete.h"

void add_athletes(vector<Athlete>& v, const string& file);
void display_all(const vector<Athlete>& v);
void update_all(vector<Athlete>);
#endif
