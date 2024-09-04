#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"Enter a number : " ;
    double a {} ;
    std::cin>> a  ;
    std::cout<<"Enter another number : " ;
    double b {} ;
    std::cin>> b  ;
   
    std::cout<<"The diffrence of "<<a <<" and " <<b <<" is: "<< a - b    ;
    return 0;
}
