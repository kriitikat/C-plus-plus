#include <iostream>
#include <cmath>
int main() {
    double arr[10]; 
    double sum = 0;
    double s = 0;
    int num;
    std::cout<<"Enter number of elements:";
    std::cin>>num;
    std::cout<<"Enter " << num << " numbers:"<<std::endl;
    for(int i=0;i<num;i++) {
        std::cin>>arr[i];
        sum+=arr[i]; 
    }
    double mean=sum/num; 
    for(int i=0;i<num;i++) {
        s +=pow(arr[i]-mean,2);
    }
    double deviation =sqrt(s/(num - 1));
    std::cout<<"Standard deviation is:"<<deviation<<std::endl;
    return 0;
}
