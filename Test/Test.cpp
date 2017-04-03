// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../RemoveExtraSp/RemoveExtraSpaces.h"
#include <boost/test/unit_test.hpp>

using namespace std;

BOOST_AUTO_TEST_CASE(EmptyString)
{
	BOOST_CHECK(RemoveExtraSpaces("") == "");
}

BOOST_AUTO_TEST_CASE(StringWithOnlySpaces)
{
	BOOST_CHECK(RemoveExtraSpaces("        ") == "");
}

BOOST_AUTO_TEST_CASE(SolidString)
{
	BOOST_CHECK(RemoveExtraSpaces("solid_string") == "solid_string");
}

BOOST_AUTO_TEST_CASE(StringWithCharacters)
{
	BOOST_CHECK(RemoveExtraSpaces("string with characters") == "string with characters");
}

BOOST_AUTO_TEST_CASE(StringWithMultipleSpaces)
{
	BOOST_CHECK(RemoveExtraSpaces(" string   with multiple     characters     ") == "string with multiple characters");
}
