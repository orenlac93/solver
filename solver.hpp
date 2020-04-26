
#pragma once

#include<iostream>
#include<complex>

namespace solver
{
    /* ax^2 + bx + c = 0 */
    class RealVariable
    {
        public: 
            double a , b , c ;
            
            /* empty constructor */
            RealVariable();
            /* parameters constructor */
            RealVariable(double a , double b , double c);
            /* addition of RealVars */
            RealVariable operator+(RealVariable& var);
            /* subtraction of RealVars */
            RealVariable operator-(RealVariable& var);
            /* (x^2) */
            RealVariable operator()(RealVariable& var);


        friend RealVariable operator + (RealVariable const & var1 , RealVariable const & var2);    
            
        /* x + n */
        friend RealVariable operator + (RealVariable const & var , double num);
        /* x - n */
        friend RealVariable operator - (RealVariable const & var , double num);  
        /* n + x */
        friend RealVariable operator + (double num , RealVariable const & var);
        /* n - x */
        friend RealVariable operator - (double num , RealVariable const & var);
        /* x ^ n */  
        friend RealVariable operator ^ (RealVariable const & var , double pow);
        /* n * x */    
        friend RealVariable operator * (double num , RealVariable const & var); 
        /* x / n */
        friend RealVariable operator / (RealVariable const & var , double num); 
        /* x == n */
        friend RealVariable operator == (RealVariable const & var , double num); 
        /* x == x */ 
        friend RealVariable operator == (RealVariable const & var1 , RealVariable const & var2); 

        

           

    };

    class ComplexVariable
    {

    };



    double solve(RealVariable var);

    //double solve(ComplexVariable var);
}








