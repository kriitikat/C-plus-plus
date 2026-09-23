#include<iostream>
template <class T>
class Great{
    T a, b;
  public:
  Great(T x, T y)
  {
    a = x;
    b = y;
}
void display(){
    if(a > b){
        std::cout<< a << " is greater than " << b << std::endl;
    }
    else{
        
        std::cout<< b << " is greater than " << a << std::endl;
    }
    
}
};
int main(){
Great<int> obj(10,56);

obj.display();
return 0;
}