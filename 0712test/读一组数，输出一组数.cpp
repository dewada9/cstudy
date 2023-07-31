#include<iostream>
#include<vector>

int main(){
    std::vector<int>numbers;
    int num;
    std::cout<<"input(is example a b c end )a group og numbers"<<std::endl;
    while(std::cin>>num){
        numbers.push_back(num);
    }
    std::cout<<"output these inputed numbers"<<std::endl;
    for(int number:numbers){
        std::cout<< number <<","<<std::endl;
    }
    std::cout<<std::endl;
}