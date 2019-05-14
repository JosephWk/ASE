#define BOOST_TEST_MODULE rational_number_test_suite
#include <boost/test/included/unit_test.hpp>

#include <iostream>
#include "rational.h"

using namespace ExactArithmetic;


using std::cout;
using std::cin;
using std::endl;

BOOST_AUTO_TEST_CASE(normalise_test)
{
	Rational n = Rational(3, 9);
	BOOST_CHECK_EQUAL(n, Rational(1, 3));
}

BOOST_AUTO_TEST_CASE(addtion_resut_test) {
	Rational x = Rational(4, 9);
	Rational y = Rational(1, 3);
	BOOST_CHECK_EQUAL((x + y), Rational(7 , 9));
}

BOOST_AUTO_TEST_CASE(substraction_resut_test) {
	Rational x = Rational(4, 9);
	Rational y = Rational(1, 3);
	BOOST_CHECK_EQUAL((x - y), Rational(1,9));
}

BOOST_AUTO_TEST_CASE(multiplication_resut_test) {
	Rational x = Rational(4, 9);
	Rational y = Rational(1, 3);
	BOOST_CHECK_EQUAL((x * y), Rational(4,27));
}

BOOST_AUTO_TEST_CASE(division_resut_test) {
	Rational x = Rational(4, 9);
	Rational y = Rational(1, 3);
	BOOST_CHECK_EQUAL((x / y), Rational(4,3));
}

// Compound Assignment operators
BOOST_AUTO_TEST_CASE(addtion_compound_assign_test) {
	Rational y = Rational(1, 3);
	Rational z = Rational(1, 3);
	z += y;
	BOOST_CHECK_EQUAL(z, Rational(2, 3));
}

BOOST_AUTO_TEST_CASE(substration_compound_assign_test) {
	Rational y = Rational(1, 3);
	Rational z;
	z-= y;
	BOOST_CHECK_EQUAL(z, Rational(0));
}
BOOST_AUTO_TEST_CASE(multiplication_compound_assign_test) {
	Rational z;
	z *= Rational(1, 3);
	BOOST_CHECK_EQUAL(z, Rational(1, 9));
}
BOOST_AUTO_TEST_CASE(division_compound_assign_test) {
	Rational y = Rational(1, 3);
	Rational z;
	z /= y;
	BOOST_CHECK_EQUAL(z, Rational(1));
}



// Comparison operators

BOOST_AUTO_TEST_CASE(more_than_test) {
	Rational a = Rational(2, 3);
	Rational b = Rational(1, 3);
	BOOST_CHECK_EQUAL(( a > b ), true);
}

BOOST_AUTO_TEST_CASE(less_than_test) {
	Rational a = Rational(1, 3);
	Rational b = Rational(2, 3);
	BOOST_CHECK_EQUAL((a < b), true);
}
BOOST_AUTO_TEST_CASE(less_than_or_equal_test) {
	Rational a = Rational(1, 3);
	Rational b = Rational(2, 3);
	BOOST_CHECK_EQUAL((a <= b), true);
}

BOOST_AUTO_TEST_CASE(more_than_or_equal_test) {
	Rational a = Rational(2, 3);
	Rational b = Rational(1, 3);
	BOOST_CHECK_EQUAL((a >= b), true);
}

BOOST_AUTO_TEST_CASE(equal_to_test) {
	Rational a = Rational(1, 3);
	Rational b = Rational(1, 3);
	BOOST_CHECK_EQUAL((a == b), true);
}
BOOST_AUTO_TEST_CASE(not_equal_to_test) {
	Rational a = Rational(4, 9);
	Rational b = Rational(1, 3);
	BOOST_CHECK_EQUAL((a != b), true);
}




// Negation


/*
BOOST_AUTO_TEST_CASE(division_resut_test) {
	Rational a = negate(Rational(1, 3));
	Rational b = Rational(-1, -3);
	BOOST_CHECK_EQUAL(a, b);

}

BOOST_AUTO_TEST_CASE(division_resut_test) {
	BOOST_CHECK_EQUAL((negate(negativeR), );
}





BOOST_AUTO_TEST_CASE(cin_operator_overload_test)) {
	
}

BOOST_AUTO_TEST_CASE(cout_operator_overload_test) {
	
}


*/