#include <iostream>

int main(){
    setlocale(LC_ALL, "Russian");
    int a,sum=0;
    while(1)
    {
        std::cin >> a;
        if(a==0) break;
        else {
            sum+=a;
        }
    }
    std::cout << "Сумма:" << sum << std::endl;
    return 0;
}
