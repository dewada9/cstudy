#include<iostream>
int main(){
    //currval 是当前统计的数字，我们将读入新的值存入val
    int currval = 0,val = 0;
    //读取第一个数，并确保有数据可以实现；
    if(std::cin>>currval){  
        int cnt = 1;    //保存我们正在处理的当前值的个数
        while(std::cin>>val){//读取剩余的数
           if(val == currval)
           ++cnt;
            else {
                std::cout<<currval<<" occurs "<<cnt<<" times"<<std::endl;
                currval = val;
                cnt = 1;
            }
        }//while 结束
        //打印文件中最后一个值的数
        std::cout<<currval<<" occurs "<<cnt<<" times"<<std::endl;

    }
    return 0;
}