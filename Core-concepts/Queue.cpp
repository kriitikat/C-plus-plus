#include<iostream>
#include <stdexcept>

class Queue{
    public:
    virtual void insert (int value)=0;
    virtual void remove()=0;
    virtual int front()=0;
    virtual int rear()=0;
    virtual ~Queue(){}
};
class ArrayQueue:public Queue{
    private:
    int *arr;
    int frontindex,rearindex,capacity,count;

    public:
    ArrayQueue(int size){
        capacity = size;
        arr = new int[capacity];
        frontindex = 0;
        rearindex = -1;
        count = 0;
    }
    virtual void insert(int value)override{
if(count == capacity){
    throw std::overflow_error ("Queue is full");
}
rearindex = (rearindex+1) % capacity;
arr[rearindex]=value;
count++;
    }
    virtual void remove()override{
        if(count == 0)
        throw std::underflow_error ("Queue is empty") ;
        std::cout << arr[frontindex] << "is removed" <<std::endl;
        frontindex=(frontindex+1)%capacity;
        count -- ;
    }
    virtual int front()override{
        if(count == 0){
        throw std::underflow_error ("Queue is empty") ;
        }
        return arr[frontindex];
    }
    virtual int rear()override{
        if(count == 0)
        throw std::underflow_error ("Queue is empty") ;
        return arr[rearindex];
        }
        ~ArrayQueue(){
            delete[] arr;
        }
};
int main(){
    ArrayQueue a(6);
    try{
    a.insert(20);
    a.insert(15);
    a.insert(25);
    a.insert(19);
    a.insert(45);
    a.remove();
    std::cout<<"Front is:" <<a.front() ;
    std::cout<<"Last is:" <<a.rear() ;
    }
    catch(std::exception &e){
        std::cout << e.what() <<std::endl;
    }
    return 0;
}