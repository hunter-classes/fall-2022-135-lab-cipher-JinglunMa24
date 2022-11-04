#include <iostream>
#include <vector>
#include <fstream>
#include "funcs.h"

int main() {
	std::string s = encryptCaesar("Life is real.", 5);
	std::cout << "Encrypted string: " << s << " = " << solve(s) << '\n';

	return 0;
}
