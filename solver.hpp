
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

        /* x + x */
        friend RealVariable operator + (RealVariable const & var1 , RealVariable const & var2);    
        /* x - x */
        friend RealVariable operator - (RealVariable const & var1 , RealVariable const & var2);     
        /* x + n */
        friend RealVariable operator + (RealVariable const & var , double num);
        /* x - n */
        friend RealVariable operator - (RealVariable const & var , double num);  
        /* n + x */
        friend RealVariable operator + (double num , RealVariable const & var);
        /* n - x */
        friend RealVariable operator - (double num , RealVariable const & var);
        /* x ^ n */  
        friend RealVariable operator ^ (RealVariable const & var , int pow);
        /* n * x */    
        friend RealVariable operator * (double num , RealVariable const & var);
        /* x * n */    
        friend RealVariable operator * (RealVariable const & var , double num);  
        /* x / n */
        friend RealVariable operator / (RealVariable const & var , double num); 
        /* x == n */
        friend RealVariable operator == (RealVariable const & var , double num); 
        /* x == x */ 
        friend RealVariable operator == (RealVariable const & var1 , RealVariable const & var2);
        /* n == x */
        friend RealVariable operator == (double num , RealVariable const & var); 

        

           

    };

    class ComplexVariable
    {
        public: 
            std::complex<double> a , b , c ;
            
            /* empty constructor */
            ComplexVariable();
            
            /* (x^2)  done   */   
            ComplexVariable operator()(ComplexVariable& var);

        /* x + x  done  */
        friend ComplexVariable operator + (ComplexVariable const & var1 , ComplexVariable const & var2);
        /* x - x   done */
        friend ComplexVariable operator - (ComplexVariable const & var1 , ComplexVariable const & var2);    
            
        /* x + n  done  */
        friend ComplexVariable operator + (ComplexVariable const & var , double num);
        /* x - n  done  */
        friend ComplexVariable operator - (ComplexVariable const & var , double num);
        /* x + (a+bi)  done  */
        friend ComplexVariable operator + (ComplexVariable const & var , std::complex<double> num);
        /* x - (a+bi)   done */
        friend ComplexVariable operator - (ComplexVariable const & var , std::complex<double> num); 

        /* n + x done */
        friend ComplexVariable operator + (double num , ComplexVariable const & var);
        /* n - x */
        friend ComplexVariable operator - (double num , ComplexVariable const & var);
        /* (a+bi) + x */
        friend ComplexVariable operator + (std::complex<double> num , ComplexVariable const & var);
        /* (a+bi) - x */
        friend ComplexVariable operator - (std::complex<double> num , ComplexVariable const & var);

        /* x ^ n  done  */  
        friend ComplexVariable operator ^ (ComplexVariable const & var , int pow);
        /* n * x  done */    
        friend ComplexVariable operator * (double num , ComplexVariable const & var); 
        /* x / n done */
        friend ComplexVariable operator / (ComplexVariable const & var , double num); 

        /* x == n   done  */
        friend ComplexVariable operator == (ComplexVariable const & var , double num); 
        /* x == x done */ 
        friend ComplexVariable operator == (ComplexVariable const & var1 , ComplexVariable const & var2);     

    };



    double solve(RealVariable var);

    std::complex<double> solve(ComplexVariable var);
}








