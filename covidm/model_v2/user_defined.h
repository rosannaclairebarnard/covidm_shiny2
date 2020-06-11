// user_defined.h

// Declarations of C++ functions which require definition by the user

#ifndef USER_DEFINED_H
#define USER_DEFINED_H

#include <vector>
#include "parameters.h"
using namespace std;

// Declarations of C++ functions which require definition by the user
void CppChanges(const vector<double>& x, Parameters& P);
double CppLogLikelihood(const vector<double>& x, Reporter& dyn);
bool CppObserver(Parameters& P, Reporter& dyn, double t);

#endif