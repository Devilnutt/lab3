#include <iostream>

int main(){
    int a,sum=0,i=0;
    while(1)
    {
        std::cin >> a;
        if(a==0) break;
        else if(a>0) {
            i++;
            sum+=a;
        }
        else{
            sum+=0;
        }
    }
    float avg=(sum+0.000)/(i+0.000);
    std::cout << "Среднее арифметическое положительных:" << avg << std::endl;
    return 0;
}