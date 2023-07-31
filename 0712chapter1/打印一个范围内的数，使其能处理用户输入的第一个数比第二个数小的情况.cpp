#include<iostream>

int main(){
    int currval = 0;
    int val = 0;
    
    if(std::cin >> currval){ 
        int cnt = 0;
        
        while(std::cin >> val){
            if(val == currval){
                if(cnt == 0){
                    cnt = 1;
                }
                else{
                    ++cnt;
                }
            }
            else{
                std::cout << currval << " occurs " << cnt << " times" << std::endl;
                currval = val;
                cnt = 1;
            }
        }
        
        std::cout << currval << " occurs " << cnt << " times" << std::endl;
    }
    
    return 0;
}
#include <iostream>

int main() {
    int num1, num2;

    // 获取用户输入的两个数
    std::cout << "请输入两个整数：" << std::endl;
    std::cin >> num1 >> num2;

    // 确定较小的数和较大的数
    int smaller = num1 < num2 ? num1 : num2;
    int larger = num1 > num2 ? num1 : num2;

    // 打印较小的数到较大的数之间的所有数
    for (int i = smaller; i <= larger; i++) {
        std::cout << i << " ";
    }

    return 0;
}
