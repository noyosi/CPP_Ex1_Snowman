/**
 * 
 * AUTHORS: Noy Osi
 * 
 * Date: 2021-03
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(11114411)) == nospaces("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
	CHECK(nospaces(snowman(11444413)) == nospaces("       \n _===_ \n (-,-) \n ( : ) \n (___) "));
	CHECK(nospaces(snowman(14114444)) == nospaces("       \n _===_ \n (. .) \n (   ) \n (   ) "));
	CHECK(nospaces(snowman(12114444)) == nospaces("       \n _===_ \n (...) \n (   ) \n (   ) "));
	CHECK(nospaces(snowman(22114444)) == nospaces("  ___  \n ..... \n (...) \n (   ) \n (   ) "));
	CHECK(nospaces(snowman(34231122)) == nospaces("   _   \n  /_\\  \n (o O) \n<(] [)>\n (\" \") "));
	CHECK(nospaces(snowman(43441134)) == nospaces("  ___  \n (_*_) \n (-_-) \n<(> <)>\n (   ) "));
	CHECK(nospaces(snowman(11323211)) == nospaces("       \n _===_ \n (O,o)/\n/( : ) \n ( : ) "));
	CHECK(nospaces(snowman(11323311)) == nospaces("       \n _===_ \n (O,o) \n/( : )\\\n ( : ) "));
	CHECK(nospaces(snowman(11322311)) == nospaces("       \n _===_ \n\\(O,o) \n ( : )\\\n ( : ) "));
	CHECK(nospaces(snowman(12341234)) == nospaces("       \n _===_ \n (O.-)/\n<(> <) \n (   ) "));
	CHECK(nospaces(snowman(12344321)) == nospaces("       \n _===_ \n (O.-) \n (] [)\\\n ( : ) "));
	CHECK(nospaces(snowman(11111111)) == nospaces("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(22222222)) == nospaces("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
	CHECK(nospaces(snowman(33333333)) == nospaces("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
	CHECK(nospaces(snowman(44444444)) == nospaces("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
}

TEST_CASE("Hat test") {
	CHECK(nospaces(snowman(21111111)) == nospaces("  ___  \n ..... \n (.,.) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(31111111)) == nospaces("   _   \n  /_\\  \n (.,.) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(41111111)) == nospaces("  ___  \n (_*_) \n (.,.) \n<( : )>\n ( : ) "));
}

TEST_CASE("Nose test") {
	CHECK(nospaces(snowman(12111111)) == nospaces("       \n _===_ \n (...) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(13111111)) == nospaces("       \n _===_ \n (._.) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(14111111)) == nospaces("       \n _===_ \n (. .) \n<( : )>\n ( : ) "));
}

TEST_CASE("Left eye test") {
	CHECK(nospaces(snowman(11211111)) == nospaces("       \n _===_ \n (o,.) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(11311111)) == nospaces("       \n _===_ \n (O,.) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(11411111)) == nospaces("       \n _===_ \n (-,.) \n<( : )>\n ( : ) "));
}

TEST_CASE("Right eye test") {
	CHECK(nospaces(snowman(11121111)) == nospaces("       \n _===_ \n (.,o) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(11131111)) == nospaces("       \n _===_ \n (.,O) \n<( : )>\n ( : ) "));
	CHECK(nospaces(snowman(11141111)) == nospaces("       \n _===_ \n (.,-) \n<( : )>\n ( : ) "));
}

TEST_CASE("Left arm test") {
	CHECK(nospaces(snowman(11112111)) == nospaces("       \n _===_ \n\\(.,.) \n( : )>\n ( : ) "));
	CHECK(nospaces(snowman(11113111)) == nospaces("       \n _===_ \n (.,.) \n/( : )>\n ( : ) "));
	CHECK(nospaces(snowman(11114111)) == nospaces("       \n _===_ \n (.,.) \n ( : )>\n ( : ) "));
}

TEST_CASE("Right arm test") {
	CHECK(nospaces(snowman(11111211)) == nospaces("       \n _===_ \n (.,.)/\n<( : ) \n ( : ) "));
	CHECK(nospaces(snowman(11111311)) == nospaces("       \n _===_ \n (.,.) \n<( : )\\\n ( : ) "));
	CHECK(nospaces(snowman(11111411)) == nospaces("       \n _===_ \n (.,.) \n<( : ) \n ( : ) "));
}

TEST_CASE("Torso test") {
	CHECK(nospaces(snowman(11111121)) == nospaces("       \n _===_ \n (.,.) \n<(] [)>\n ( : ) "));
	CHECK(nospaces(snowman(11111131)) == nospaces("       \n _===_ \n (.,.) \n<(> <)>\n ( : ) "));
	CHECK(nospaces(snowman(11111141)) == nospaces("       \n _===_ \n (.,.) \n<(   )>\n ( : ) "));
}

TEST_CASE("Base test") {
	CHECK(nospaces(snowman(11111112)) == nospaces("       \n _===_ \n (.,.) \n<( : )>\n (\" \") "));
	CHECK(nospaces(snowman(11111113)) == nospaces("       \n _===_ \n (.,.) \n<( : )>\n (___) "));
	CHECK(nospaces(snowman(11111114)) == nospaces("       \n _===_ \n (.,.) \n<( : )>\n (   ) "));
}

TEST_CASE("Less digits") {
	CHECK_THROWS(snowman(1)); 
	CHECK_THROWS(snowman(11)); 
	CHECK_THROWS(snowman(111)); 
	CHECK_THROWS(snowman(1111)); 
	CHECK_THROWS(snowman(11111)); 
	CHECK_THROWS(snowman(111111)); 
	CHECK_THROWS(snowman(1111111)); 
	CHECK_THROWS(snowman(1234123)); 
}

TEST_CASE("Too much digits") {
	CHECK_THROWS(snowman(111111111));
	CHECK_THROWS(snowman(123412341));
}

TEST_CASE("Negative input") {
	CHECK_THROWS(snowman(-12341234));
	CHECK_THROWS(snowman(-11111111));
	CHECK_THROWS(snowman(-22222222));
	CHECK_THROWS(snowman(-33333333));
	CHECK_THROWS(snowman(-44444444));
}

TEST_CASE("Out of range") {
	//5 is out of range
	CHECK_THROWS(snowman(52341234));
	CHECK_THROWS(snowman(15341234)); 
	CHECK_THROWS(snowman(12541234)); 
	CHECK_THROWS(snowman(12351234)); 
	CHECK_THROWS(snowman(12345234)); 
	CHECK_THROWS(snowman(12341534)); 
	CHECK_THROWS(snowman(12341254)); 
	CHECK_THROWS(snowman(12341235)); 
	CHECK_THROWS(snowman(55555555));

	//0 is out of range
	CHECK_THROWS(snowman(02341234)); 
	CHECK_THROWS(snowman(12340234)); 
	CHECK_THROWS(snowman(12341230)); 
	CHECK_THROWS(snowman(00000000));
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(555)); 
	CHECK_THROWS(snowman(1234555));
	CHECK_THROWS(snowman(111111110)); 
	CHECK_THROWS(snowman(011111111)); 
	CHECK_THROWS(snowman(511111111)); 
	CHECK_THROWS(snowman(111111115)); 
	CHECK_THROWS(snowman(555555555)); 
	CHECK_THROWS(snowman(000000000)); 
	CHECK_THROWS(snowman(-1234123)); 
	CHECK_THROWS(snowman(-123412341)); 
	CHECK_THROWS(snowman(-5555555)); 
	CHECK_THROWS(snowman(-55555555)); 
	CHECK_THROWS(snowman(-123401234)); 
}