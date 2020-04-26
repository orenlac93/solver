#include"solver.hpp"
#include<iostream>

using namespace std;
using namespace solver;

RealVariable::RealVariable()
{
    this->a = 0;
    this->b = 1;
    this->c = 0;

    
}

RealVariable::RealVariable(double a , double b , double c)
{
    this->a = a;
    this->b = b;
    this->c = c;

    
}

RealVariable RealVariable::operator+(RealVariable& var)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = this->a + var.a;
    ans.b = this->b + var.b;
    ans.c = this->c + var.c;

    return ans;
}


RealVariable RealVariable::operator-(RealVariable& var)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = this->a - var.a;
    ans.b = this->b - var.b;
    ans.c = this->c - var.c;

    return ans;
}

RealVariable RealVariable::operator()(RealVariable& var)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b;
    ans.c = var.c;

    return ans;

}

/*
##### friend operators #####  
*/

RealVariable solver::operator + (RealVariable const & var1 , RealVariable const & var2)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var1.a + var2.a;
    ans.b = var1.b + var2.b;
    ans.c = var1.c + var2.c;

    return ans;

}

RealVariable solver::operator + (RealVariable const & var , double num)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b;
    ans.c = var.c + num;

    return ans;
}

RealVariable solver::operator - (RealVariable const & var , double num)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b;
    ans.c = var.c - num;

    return ans;
}

        
RealVariable solver::operator + (double num , RealVariable const & var)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b;
    ans.c = num + var.c;

    return ans;
}
        
RealVariable solver::operator - (double num , RealVariable const & var)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b;
    ans.c = num - var.c;

    return ans;
}

RealVariable solver::operator ^ (RealVariable const & var , double pow)
{
    if(pow > 2)
        throw std::invalid_argument("power can't be greater than 2\n");

    RealVariable ans;
    ans.b = 0;

    ans.a = 1;
    ans.b = 0;
    ans.c = var.c;

    return ans;
}

RealVariable solver::operator * (double num , RealVariable const & var)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = num*var.b;
    ans.c = var.c;

    return ans;

}

RealVariable solver::operator / (RealVariable const & var , double num)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b / num;
    ans.c = var.c;

    return ans;

}

RealVariable solver::operator == (RealVariable const & var , double num)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var.a;
    ans.b = var.b;
    ans.c = var.c + -1*(num);

    return ans;

}

RealVariable solver::operator == (RealVariable const & var1 , RealVariable const & var2)
{
    RealVariable ans;
    ans.b = 0;

    ans.a = var1.a + -1*(var2.a);
    ans.b = var1.b + -1*(var2.b);
    ans.c = var1.c + -1*(var2.c);

    return ans;

}




double solver::solve(RealVariable var)
{
    cout << "a = " << var.a << endl;
    cout << "b = " << var.b << endl;
    cout << "c = " << var.c << endl;
    
    return 0;
}









