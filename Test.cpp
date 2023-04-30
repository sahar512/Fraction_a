#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace std; 
namespace ariel{
    TEST_CASE("test 0: fraction with zero dinominator"){
        CHECK_THROWS(Fraction(2,0)); 
        CHECK_THROWS(Fraction(-2,0));

    }
    TEST_CASE("test 1: "){
        CHECK_THROWS( Fraction(0,2)); 
        CHECK_THROWS(Fraction(0,-2)); 
        CHECK_THROWS(Fraction(-2,2)); 
        CHECK_THROWS(Fraction(-2,-2)); 
    }
    TEST_CASE("test 2: boolian operators"){
        Fraction a (1,2); 
        Fraction b (-1,-2); 
        Fraction c (2,4); 
        Fraction d (3,6); 
        Fraction e (-3,-6);
        float f = 0.5; 
        CHECK( a==b ); 
        CHECK( a==c ); 
        CHECK( c==b ); 
        CHECK( a==d ); 
        CHECK( d==b ); 
        CHECK( a==e );
        CHECK( e==b ); 
        CHECK( e==d );
        CHECK( a==f ); 
        CHECK( b==f ); 
        CHECK( c==f ); 
        CHECK( d==f );
        CHECK( e==f ); 
        CHECK( a<=b ); 
        //CHECK( a>=c ); 
    }
    TEST_CASE("TEST 3: "){
        Fraction a (10,5); 
        Fraction b (5,10); 
        CHECK((a>b)== true); 
        CHECK((a<b)== false); 
        CHECK(a == Fraction(4,2)); 
        CHECK((a>=b)== true); 
        CHECK((a<=b)== false); 

    }
    TEST_CASE( "test 4:"){
        Fraction z (1,4); 
        Fraction o (4,1); 
        Fraction one (1,1); 
        CHECK_EQ(z,o); 
        CHECK_EQ(one * o , z); 
        CHECK_EQ(one * z,o); 

    }


}

