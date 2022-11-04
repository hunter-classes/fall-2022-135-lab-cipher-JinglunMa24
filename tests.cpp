#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("solve()") {
	CHECK(solve(encryptCaesar("I can't believe we did it!", 10)) == "I can't believe we did it!");
	CHECK(solve(encryptCaesar("These candie are very good.", 5)) == "These candie are very good.");
	CHECK(solve(encryptCaesar("I can't handle this anymore, please help!", 50)) == "I can't handle this anymore, please help!");
	CHECK(solve(encryptCaesar("You are the best my friend.", 3)) == "You are the best my friend.");
	CHECK(solve(encryptCaesar("Be water, my friend!", 100)) == "Be water, my friend!");
	CHECK(solve(encryptCaesar("Do nothing by halves.", 55)) == "Do nothing by halves.");
	CHECK(solve(encryptCaesar("The shortest way to do many things is to only one thing at a time.", 24)) == "The shortest way to do many things is to only one thing at a time.");
	CHECK(solve(encryptCaesar("Doubt is the key to knowledge.", 91)) == "Doubt is the key to knowledge.");
}