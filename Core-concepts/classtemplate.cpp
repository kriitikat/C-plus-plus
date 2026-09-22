#include<iostream>
template<class T>
class Array{
    
    public:
    T arr[5];
    void sort(){
        for(int i=0 ;i<5 ;i++){
        for( int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    }

    T max()
    {
        return arr[4];
    }

    void display(){
        for(int i=0 ;i<5;i++){
            std::cout << arr[i] << " " ;
        }
        std::cout << std::endl;
    }
};
int main(){
    Array <int>obj;
    std::cout << "Enter 5 elements:" << std::endl;
    for(int i=0;i<5;i++){
        std:: cin >> obj.arr[i];
    }
    obj.display();
    obj.sort();
    obj.display();
    std::cout<< "Maximum is :" << obj.max();
    return 0;
}
