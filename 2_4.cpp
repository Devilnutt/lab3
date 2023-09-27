#include <iostream>

int main(){
    int a,maxi=0,i=0,maxa=0;
    while(1)
    {
        std::cin >> a;
        if(a==0) break;
        else {
            i++;
        }
        if(maxa<=a){
            maxa=a;
            maxi = i;
        }        
    }
    std::cout << "Максимальное значение:" << maxa <<  std::endl;
    std::cout << "Его номер:" << maxi <<  std::endl;
    return 0;
}