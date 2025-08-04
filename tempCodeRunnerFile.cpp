#include <iostream>
int main(){
    int n;
    std::cout << "Enter your no. you want to reverse";
    std::cin >> n;
    int numb,sum =0;
    numb = n ;
    while(numb != 0){
    sum = numb % 10;
    numb = numb / 10;
    std::cout << sum;
    }
    return(0);
}