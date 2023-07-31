#include "iostream"
int main(){
    std::cout<<"50-100 Integers are added:"<<std::endl;
    int val = 50,sum = 0;
    while(val<=100){
        sum=sum+val;
       // ++val; 二者输出一样
       val++;
    }
    std::cout<<sum<<std::endl;
    return 0;
}