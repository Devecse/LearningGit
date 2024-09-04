#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"Enter a number : " ;
    double a {} ;
    std::cin>> a  ;
    std::cout<<"Enter another number : " ;
    double b {} ;
    std::cin>> b  ;
    double  sum = a+ b ;
    std::cout<<"The sum of "<<a <<" and " <<b <<" is: "<<sum   ;
    return 0;
}
