#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"Enter a number : " ;
    int a {} ;
    std::cin>> a  ;
    std::cout<<"Enter another number : " ;
    int b {} ;
    std::cin>> b  ;
    std::cout<<"The sum of "<<a <<" and " <<b <<" is: "<< a + b  ;
    return 0;
}
