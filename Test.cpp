#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;


#include <string>
#include <algorithm>
using namespace std;


string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

/////////hats
//string hat1 = "       \n === "; 
//string hat2 = "  _  \n ..... \n";
//string hat3 = "   _   \n  /_\\  ";
//string hat4 = "  _  \n (*) ";

/////////nose
// string nose1 = ",";
// string nose2 = ".";
// string nose3 = "_";
// string nose4 = " ";

// /////////left eye
// string lefteye1 = ".";
// string lefteye2 = "o";
// string lefteye3 = "O";
// string lefteye4 = "-";

// /////////right eye
// string righteye1 = ".";
// string righteye2 = "o";
// string righteye3 = "O";
// string righteye4 = "-";

// /////////left arm
// string leftarm1 = "<";
//string leftarm2 = "\";
//string leftarm3 = "/";
//string leftarm4 = "";

// /////////right arm
// string rightarm1 = ">";
// string rightarm2 = "/";
// string rightarm3 = "\";
// string rightarm4 = "";

// /////////turso
// string turso1 = "( : )";
// string turso2 = "(] [)";
// string turso3 = "(> <)";
// string turso4 = "(   )";

// /////////base
// string base1 = "( : )";
// string base2 = "(\" \")";
// string base3 = "(_)";
// string base4 = "";




TEST_CASE("Good snowman code") {
CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(21114411)) == nospaces(" _ \n.....\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(31114411)) == nospaces("_ \n/_\\\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(41114411)) == nospaces(" _\n(*)\n(.,.)\n( : )\n( : )"));

CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(. .)\n( : )\n( : )"));


CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(0,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(-,.)\n( : )\n( : )"));

CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11124411)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
CHECK(nospaces(snowman(11134411)) == nospaces("_===_\n(.,0)\n( : )\n( : )"));
CHECK(nospaces(snowman(11144411)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));

CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : )\n( : )"));
CHECK(nospaces(snowman(11112411)) == nospaces("_===_\n\\(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11113411)) == nospaces("_===_\n(.,.)\n/( : )\n( : )"));
CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11114211)) == nospaces("_===_\n(.,.)/\n( : )\n( : )"));
CHECK(nospaces(snowman(11114311)) == nospaces("_===_\n(.,.)\n( : )\\\n( : )"));
CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11114421)) == nospaces("_===_\n(.,.)\n( ] [)\n( : )"));
CHECK(nospaces(snowman(11114431)) == nospaces("_===_\n(.,.)\n( > < )\n( : )"));
CHECK(nospaces(snowman(11114441)) == nospaces("_===_\n(.,.)\n(  )\n( : )"));

CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n( " " )"));
CHECK(nospaces(snowman(11114413)) == nospaces("_===_\n(.,.)\n( : )\n(___)"));
CHECK(nospaces(snowman(11114414)) == nospaces("_===_\n(.,.)\n( : )\n(  )"));

}

    TEST_CASE("Bad snowman code") {
 CHECK_THROWS(snowman(01));
 CHECK_THROWS(snowman(012));
 CHECK_THROWS(snowman(0123));
 CHECK_THROWS(snowman(01234));
 CHECK_THROWS(snowman(012345));
 CHECK_THROWS(snowman(0123456));
 CHECK_THROWS(snowman(01234567));
 CHECK_THROWS(snowman(12345678));
 CHECK_THROWS(snowman(123456781));
 CHECK_THROWS(snowman(-1-2034));
 CHECK_THROWS(snowman(011112434));
 CHECK_THROWS(snowman(-1));

    }