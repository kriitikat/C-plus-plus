#include<iostream>

int main(){
    int n1 , n2 , result ;
    std::cout << "Enter 2 digits: " <<  std:: endl;
    std::cin >> n1 >> n2;
    try{
        if(n2 == 0){
            throw "Denominator is zero.";
        }
        result = n1/n2;
        std:: cout << "Division is:" << result ;
    }
    catch(const char *msg){
        std::cerr << "Error:" << msg << std::endl;
    }
    return 0;
}