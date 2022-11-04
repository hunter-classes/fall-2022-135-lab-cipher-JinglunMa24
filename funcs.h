#pragma once
#include <vector>

// add prototypes here
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
double distance(std::vector<double> alphaFre, std::vector<double> strFre);
std::vector<double> string_frequency(std::string s);
std::string solve(std::string encryptStr);