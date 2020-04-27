#include <iostream>
#include <string>
#include<complex>
#include "doctest.h"
#include "solver.hpp"

using namespace std;

using solver::solve, solver::RealVariable, solver::ComplexVariable;

/* Test 1 - 10 */
TEST_CASE("simple tests")
{
	RealVariable x;
    
    CHECK(solve(x == 10) == 10);	
	CHECK(solve(2*x == 10) == 5);
    CHECK(solve((x^2) == 9) == 3);	
    CHECK(solve(x-4 == 8) == 12);	
    CHECK(solve((x^2) + 6*x == -5) == -5);

    CHECK(solve(x + 4*x == 2*x - 10) == -3.3333);	
    CHECK(solve(2*x/2 == 3) == 3);	
    CHECK(solve(x + x + x == 6) == 2);	
    CHECK(solve(100*x == 200) == 2);	
    CHECK(solve(33*x == 107) == 3.2424);		

}

TEST_CASE("another tests")
{
    RealVariable x;

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);
    CHECK(solve(x == 0) == 0);

}