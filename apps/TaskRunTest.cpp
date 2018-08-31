#include <iostream>
#include <string>

int main(int argc,char *argv[]){
        int loop_cnt = 0;
    if(argc > 1){
        loop_cnt = std::stoi(argv[1]);
    }else{
        std::cout << "There is no input to loop count, default 100 will be used instead!" << std::endl;
        loop_cnt = 100;
    }
    for(int i = 0; i< loop_cnt; i++){
        std::cout << i << std::endl;
    } 
}