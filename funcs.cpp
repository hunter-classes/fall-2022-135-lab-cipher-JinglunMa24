#include <iostream>
#include "funcs.h"
#include <vector>
#include <cmath>
#include <cfloat>

// add functions here

char shiftChar(char c, int rshift) {
	char output;

	if (!isalpha(c)) {
		return c;
	}

	else if (isupper(c)) {
		output = (c - 'A' + rshift) % 26 + 'A';
	}

	else {
		output = (c - 'a' + rshift) % 26 + 'a';
	}

	return output;
}


std::string encryptCaesar(std::string plaintext, int rshift) {
	std::string output;

	for (int i = 0; i < plaintext.length(); i++) {
		output += shiftChar(plaintext[i], rshift);
	}

	return output;
}


double distance(std::vector<double> alphaFre, std::vector<double> strFre) {
	double sum = 0;

	for (int i = 0; i < alphaFre.size(); i++) {
		sum += pow(alphaFre[i] - strFre[i], 2);
	}

	return sqrt(sum);
}


std::vector<double> string_frequency(std::string s) {
	std::vector<double> encryptFre(26, 0);
	int count = 0;

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < encryptFre.size(); j++) {
			if (isalpha(s[i])) {
				count++;

				if (isupper(s[i])) {
					if (j == s[i] - 'A') {
						encryptFre[j] += 1;
					}
				}

				else {
					if (j == s[i] - 'a') {
						encryptFre[j] += 1;
					}
				}
			}
		}
	}

	for(int k = 0; k < encryptFre.size(); k++) {
		encryptFre[k] = encryptFre[k] / count;
	}

	return encryptFre;
}


std::string solve(std::string encryptStr) {
	std::vector<double> alphaFre{0.084966, 0.020720, 0.045388, 0.033844, 0.111607, 0.018121, 0.024705, 0.030034, 0.075448, 0.001964, 0.011016, 0.054893, 0.030129, 0.066544, 0.071635, 0.031671, 0.001962, 0.075809, .057351, 0.069509, 0.036308, 0.010074, 0.012899, 0.002902, 0.017779, 0.002722};
	double currentDis, minDis = DBL_MAX;
	int answershift;

	for (int i = 0; i < 26; i++) {
		std::vector<double> encryptStr_Freq = string_frequency(encryptCaesar(encryptStr, i));
		currentDis = distance(alphaFre, encryptStr_Freq);

		if (currentDis < minDis) {
			answershift = i;
			minDis = currentDis;
		}
	}

	return encryptCaesar(encryptStr, answershift);
}