#include<iostream>

void calculate(double x , char op , double y){
    switch (op)
    {
    case '+':
        std::cout<< x << '+' << y <<"is: "<< x + y  ;
        return;
    case '-':
        std::cout<< x << '-' << y <<"is: "<< x - y  ;
        return;
    case '*':
        std::cout<< x << '*' << y <<"is: "<< x * y  ;
        return;
    case '/':
        std::cout<< x << '/' << y <<"is: "<< x / y  ;
        return;
    
    default: 
    std::cout<<"Enter the right operator!!" ;
    return ; 
        
    }
}


int main(int argc, char const *argv[])
{
    std::cout<<"Enter a number: " ;
    double x {} ;
    std::cin>> x  ;

    std::cout<<"Enter another number: " ;
    double y {} ;
    std::cin>> y  ;

    std::cout<<"Enter the mathematical operator(+ , - , * , /) :"; 
    char oper {} ;
    std::cin>> oper ;

    calculate(x , oper , y) ;
    return 0;
}

