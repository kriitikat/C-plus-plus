#include<iostream>
template<class T>
void sort(T arr[], int n){
    for(int i=0 ;i<n ;i++){
        for( int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <class T>
T max(T arr[], int n){
    T maximum = arr[0];
    for (int i=0;i<n;i++)
    {
      if(arr[i] > maximum)
        maximum = arr[i];
          }
    return maximum;
}

template<class T>
T min(T arr[],int n){
    sort(arr,n);
    for(int i=0;i<n ;i++){
    return arr[0];
}
}
template <class T>
void display(T arr[] , int n){
    for (int i=0 ;i<n; i++){
        std::cout << arr[i] <<" " ;
        }
        std ::cout << std::endl;
    }
    
    int main(){
        int arr[]={7,9,3,5,1};
        display(arr,5);
        sort(arr,5);
        display(arr,5);
        std::cout << "Maximum is :" << max(arr,5) << std:: endl;
        std::cout << "Minimum is :" << min(arr,5);
        return 0;
    }