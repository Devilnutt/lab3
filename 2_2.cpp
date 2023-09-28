#include <iostream>

int main(){
    setlocale(LC_ALL, "Russian");
    int a,sum=0,i=0;
    while(1)
    {
        std::cin >> a;
        if(a==0) break;
        else {
            i++;
            sum+=a;
        }
    }
    float avg=(sum+0.000)/(i+0.000);
    std::cout << "Среднее арифметическое:" << avg << std::endl;
    return 0;
}
