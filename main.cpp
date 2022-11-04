#include <iostream>
#include <vector>
#include <fstream>
#include "funcs.h"

int main() {
	std::string s = encryptCaesar("Possibilities of cons", 5);
	std::cout << "Encrypted string: " << s << " = " << solve(s) << '\n';

	return 0;
}
