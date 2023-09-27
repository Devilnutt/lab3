#include <iostream>

int main(){
    int a,maxi=0,i=0,mina=999999999;
    while(1)
    {
        std::cin >> a;
        if(a==0) break;
        else {
            i++;
        }
        if(mina>=a && a>0){
            mina=a;
            maxi = i;
        }        
    }
    std::cout << "Минимальное положительное значение:" << mina <<  std::endl;
    std::cout << "Его номер:" << maxi <<  std::endl;
    return 0;
}