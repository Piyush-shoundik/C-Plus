int main(){
    int n,i, sum = 0;;
    std::cout << "Enter your nos. you want to add";
    std::cin >> n;
    i = 1;
    while(i <= n){
        sum = sum + i;
        if (i == n){
            std::cout << sum;
        } 
        i ++;
    }
return(0);
}
