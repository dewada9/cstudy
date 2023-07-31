#include<iostream>
int main(){
    int sum = 0, val = 1;
    //只要val的值小于等于10，while循环会一直执行
    // while(val<=10)
    // {
    //     sum+=val;
    //     ++val;
    // }
    //for重写
    for(int val=1;val<=10;++val){
        sum+=val;
    }
    //输出
    std::cout<<"sum of 1 to 10 inclusive is "
            <<sum<<std::endl;
            return 0;

}