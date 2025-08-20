// #include <iostream>
// int main()
// {
//     // std::cout << "Hello, World!";
//     std::cout << "welcome to srmist";

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     cout << "You entered: " << a << endl;
//     return 0;
// }


// adding two no.

// #include <iostream>
// using namespace std; 

// main()
// {
//     int a,b,c;
//     cout << "Enter your first no. ";
//     cin >> a;
//     cout << "Enter your second no. ";
//     cin >> b;
//     c = a + b;
//     cout << "This is the sum " << c;  

// return 0; 
// }

// trying for one more time 

// # include <iostream>
// main()
// {
//     int a,b,c,d,e;
//     std:: cout << "Enter first no. you want to add ";
//     std:: cin >> a;
//     std:: cout << "Enter second no. you want to add ";
//     std:: cin >> b;
//     std:: cout << "Enter first no. you want to subtract ";
//     std:: cin >> c;
//     std:: cout << "Enter second no. you want to subtract ";
//     std:: cin >> d;
//     e = a + b - c - d ;
//     std:: cout << "This is the result of your calculation " << e ;
// return (0);
// }

// #include <iostream>
// main()
// {
//     int a,b,c;
//     std::cout << "Enter length and breath of rectangle \n"  ;
//     std::cin >> a >> b;
//     c = 2 * a + b;
//     std::cout << "Perimeter of rectangle is: "<< c ;
// return (0);
// }


// Area of rectangle

// #include <iostream>
// main()
// {
//     int a,b,c;
//     std::cout << "Enter length and breath \n";
//     std::cin >> a >> b;
//     c = a * b ;
//     std::cout << "Heres the area of rectanlge or square : " << c ;
// return(0);
// }

// Area or perimeter of Circle

// #include <iostream>
// main()
// {
//     float radius,area,perimeter;
//     std::cout << "Enter radius: ";
//     std::cin >> radius;
//     area = 3.14 * radius * radius ;
//     perimeter = 2 * 3.14 * radius;
//     std::cout << "perimeter is :"<< perimeter << "\narea is :" << area;
// return(0);
// }

// Product discount

// finding actual price

// #include <iostream>

// main()
// {
//     int saleP,After_dis,actP;
//     std::cout << "Enter Sale Price then discount Percent\n";
//     std::cin >> saleP >> After_dis ;
//     actP = saleP - (saleP * After_dis / 100);
//     std::cout << "Actual price " << actP;
// return(0);
// }

// using if and else statment 
// to check weather the no is even or false 

// #include <iostream> 

// int main()
// {
//     int number;
//     std:: cout << "Enter your no. \n";
//     std:: cin >> number;
    
//     if(number % 2 == 0)
//     {
//         std::cout << "number is even";
//     } 
//     else
//     {
//         std::cout<< "number is odd";
//     }

// return(0);
// }

// how to check which number is greater
 
// #include <iostream> 

// int main()
// {
//     float number1,number2;
//     std::cout << "Enter your no. \n";
//     std::cin >> number1 >>number2;
//     if (number1 > number2 )
//     {
//         std::cout << "First one is greater "<< number1 ;
//     }else if(number1 == number2 )
//     {
//         std::cout << "Both Are Equal";
//     }
//     else 
//     {
//         std::cout <<"Second one is greater "<<number2;
//     }
// return(0) ;
// }

// comparing two no. if there is negative no. or positive

// #include <iostream>
// int main()
// {
//     int number;
//     std::cout << "Enter your Number here ";
//     std::cin >> number;
//     if (number >= 0)
//     {
//         std::cout << "Number is positive ";
//     }else{
//         std::cout << "Number is negative ";
//     }
// return(0);
// }

// to find biggest number in three no.

// #include <iostream>
// int main(){
//     int a,b,c;
//     std::cout << "Enter your no. \n";
//     std::cin >> a >> b >> c ; 
//     if (a && b < c ){
//         std::cout << "Third number is greater ";
//     }else if ( a && c < b ){
//         std::cout << "second no. is greater";
//     }else{
//         std::cout << "first no. is greater";
//     }
// return(0);
// }

// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user

// #include <iostream>
// int main(){
//     int sub1,sub2,sub3,per;
//     std::cout << "Enter the numbers";
//     std::cin >> sub1 >> sub2 >> sub3;
    
//     per = (sub1+sub2+sub3) / 3;

//     if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && per >= 40){
//         std::cout << "You are passed";
//     }
//     else{
//         std::cout << "You are fail";
//     }
// return(0);
// }

// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 - 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user


// #include <iostream>
//     int main(){
//         float input;
//         std::cout << "Enter your income";
//         std::cin >> input;
//         if (input <= 2.4){
//             std::cout<< "You are tax free";
//         }else if(input >= 2.5 && input <= 5.0 ){
//             std::cout <<"You are on takslab 5% \n" << (input*5)/100 ;
//         }else if(input >= 5.1 && input <= 10.0 ){
//             std::cout <<"You are on takslab 20% \n" << (input*20)/100;
//         }else{
//             std::cout <<"You are on takslab 30% \n" << (input*20)/100;
//         }
// return(0);
// }

// write a code to calculate leap year

// #include <iostream>
// int main (){
//     int yearinput;
//     std::cout << "Enter the year ";
//     std::cin >> yearinput;
//     if ((yearinput % 4 == 0 && yearinput % 100 != 0) || (yearinput % 400 == 0)) {
//         std::cout << "The leap year";
//     }
//     else{
//         std::cout <<  "Not a leap year";
//     }
// return(0);
// }

// finding gretest among these no.

// #include <iostream>

// int main(){
//     int a,b,c,d; 
//     std::cout << "Enter your 4 no.\n ";
//     std::cin >> a >> b >> c >> d ;
//     if (a > b && c && d ){
//         std::cout << "Number " << a << " is greater";
//     }else if (b > c && d && a ){
//         std::cout << "Number "<<  b << " is greater";
//     }else if (c > d && a && b ){
//         std::cout << "Number " << c << " is greater";
//     }else{
//         std::cout << "Number " << d << " is greater";
//     }
// return(0);
// }

// printin no. 1 to 10

// #include <iostream>
// int main(){
//     int i;
//     i = 1;
//     while (i <= 11 ){
//         std::cout << i << "\n" ;
//         i = i + 1;
//     }
// return (0);
// }

// print number from 1 to number

// #include <iostream>
// int main(){
//     int i,number;
//     i = 1;
//     std::cout << "Enter your no.";
//     std::cin >> number ;

//     while(i <= number){
//         std::cout << i << "\n";
//         i = i+1;
//     }
// return(0);
// }

// printin no. 10 to 1

// #include <iostream>
// int main(){
//     int i;
//     i = 10;
//     while (i >= 1 ){
//         std::cout << i << "\n" ;
//         i = i - 1;
//     }
// return (0);
// }

// to print number from n to 1 

// #include <iostream>
// int main(){
//     int inputn,i;
//     i = 1;
//     std::cout << "Enter the no. you want to print from" ;
//     std::cin >> inputn ;
//     while(inputn >= i ){
//         std::cout << inputn << "\n";
//         inputn = inputn - i;
//     }
//     return(0);
// }

// #include <iostream>

// main(){
//     char letter;
//     std::cout << "Enter a alphabet";
//     std::cin >> letter;
//     if (letter >= 'a' && letter <= 'z' ){
//         std::cout << "it is lowercase";
//     }else if(letter >= 'A' && letter <= 'Z' ){
//         std::cout << "it is uppercase";
//     }else{
//         std::cout << "Enter a valid alphabet";
//     }
//     return(0);
// }

// #include <iostream>

// int main(){
//     int number;
//     // std::cout << "Printing from 10 to 20";
//     number = 0;
//     number = 10;
//     while(number <= 20){
//         std::cout << number << "\n";
//         number = number + 1;
//     }
// return(0);
// }

// using do while loop 

// #include <iostream>

// int main(){
//     int firstN;
//     firstN = 1;
//     do{
//         std::cout << firstN << "\n";
//         firstN = firstN + 1;
//     }while(firstN >= 10);
// return(0);
// }


// to find even no. till 50

// #include <iostream>

// int main(){
//     int i,t;
//     i = 1;
//     t = 50;
//     while (i <= 50){
//         if((i % 2) == 0 ){
//             std::cout << i << "\n";
//         }
//         i++;
//     }
// return(0);
// }

// Write a program that takes an integer input from the user and calculates the sum of its digits using a while loop

// #include <iostream>

// int main(){
//     int n;
//     std::cout << "Enter your numbers you want to add ";
//     std::cin >> n;
//     int numb, temp, sum = 0;
//     numb = n ;
//     while (numb != 0){
//     sum = sum + (numb % 10 );
//     numb = numb / 10;
//     if (numb == 0 ){
//         std::cout << sum;}
//     }
// return(0);
// }

// print the no. in reverse form 

// #include <iostream>
// int main(){
//     int n;
//     std::cout << "Enter your no. you want to reverse";
//     std::cin >> n;
//     int numb,sum =0;
//     numb = n ;
//     while(numb != 0){
//     sum = numb % 10;
//     numb = numb / 10;
//     std::cout << sum;
//     }
//     return(0);
// }

// #include <iostream>
// int main(){
//     int a,b,choice;
//     std::cout << "Enter a and b";
//     std::cin >> a >> b;
//     std::cout << "enter your choice from 1,2,3,4";
//     std::cin >> choice;
//     switch(choice){
//         case 1 :
//         std :: cout << a+b;
//         break;
//         case 2 :
//         std :: cout << a-b;
//         break;
//         case 3 :
//         std :: cout << a*b;
//         break;
//         case 4 :
//         std :: cout << a/b;
//         break;
//         default:
//         std :: cout << "enter valid no.";
//     }
//     return(0);

// }

// write a program to add sum of n nos. of natural no.

// # include <iostream>
// int main(){
//     int n,i, sum = 0;;
//     std::cout << "Enter your nos. you want to add";
//     std::cin >> n;
//     i = 1;
//     while(i <= n){
//         sum = sum + i;
//         if (i == n){
//             std::cout << sum;
//         } 
//         i ++;
//     }
// return(0);
// }

// same question but this time by using for loop

// #include <iostream>
// int main(){
//     int i,n,sum = 0;
//     std::cout << "Enter your nos.";
//     std::cin >> n;
//     for(i = 1;i <= n; i++)
//     {
//         sum = sum + i;
//         if (i >= n){    
//         std::cout << sum;}
        
//     }
//     return (0);
// }

// multiplying two no.

// #include <iostream>
// int main(){
//     int inum,multi = 1;
//     std::cout << "Enter your no.";
//     std::cin >> inum;
//     while(inum != 0){
//         multi = multi * (inum % 10);
//         inum = inum/10;
//         if(inum == 0){
//             std::cout << multi;
//         }
//     }
//     return(0);
// }

// write a program to add the even nos. and multiply the odd no. 

// #include <iostream>
// int main(){
//     int number,digit,add = 0 ,multi = 1;
//     std::cout << "Enter your number: ";
//     std::cin >> number;
    
//     while (number != 0) {
//         digit = number % 10;
//         if ((digit % 2) == 0 ){
//             add = add + digit;
//         }
//         else{
//             multi = multi * digit;
//         }
//         number = number / 10;
// }
// std::cout << "Sum of even no. is \n" << add;
// std::cout << "\nmultiplication of odd no. is \n" << multi;

// return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// To find the factorial of given no. n 

// #include <iostream>
//     int main(){
//     int num, mult = 1, i ;
//     std::cout << "Enter your no you want to find factorial \n";
//     std::cin >> num;
//     i = 1;
//     while(i <= num){
//         mult = mult * i;
//         i++;
//         }
//     std::cout << mult;
//     return(0);
//     }
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// to find the palindrome no.

// #include <iostream>
// int main() {
//     int num, reverse = 0,digit;;
//     std::cout << "Enter your number: ";
//     std::cin >> num;

//     int n = num;

//     while(n != 0) {
//         digit = n % 10;
//         reverse = reverse * 10 + digit;
//         n = n / 10;
//     }

//     if(reverse == num) {
//         std::cout << "The number is a palindrome.";
//     } else {
//         std::cout << "The number is not a palindrome.";
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// write table of any no.

// #include <iostream>
// int main(){
//     int num, i = 1, digit;
//     std:: cout << "Enter your no.";
//     std:: cin >> num;
    
//     while (i <= 10){
//         digit = num * i;
//         std::cout << digit << "\n";
//         i++;
        
//     }
//     return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// we have to write to febonacci series

// #include <iostream>
// int main(){
//     int num,gap , i = 1,total ,gum ;
//     std:: cout << "Enter your no.";
//     std:: cin >> num;
//     int n = num;
    
//     do{
//         gum = 0 + i;
//         gap = gum + i;
//         total = gap + gum;
//         std::cout << total << std::endl;
//         gum = gap;
//         i++;
//     }
//     while (i <= n);
//     return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// code to write a * a * a.....n'th

// #include <iostream> 
// int main (){
//     int a,b ,digit = 1, i = 1;
//     std::cout << "Enter your no. and times you want to multiply the number \n";
//     std::cin >> a >> b;
//     while (i <= b){
//         digit = digit * a;
//         i++;
//     }
//     std::cout << digit;

// return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// writing program to print in stars 

// #include <iostream>
// int main(){
//     int a = 1, j;
//     while(a <= 5){
//         j = 1;
//         while(j <= a){
//             std::cout << "*";
//             j++ ;
//         }
//         std:: cout << "\n";
//         a++;
//     }
//     return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// program to print like star by using for loop

// #include <iostream>
// int main(){
//     int i, j;
//     for( i = 1; i <= 5; i++){
//     for(j = 1; j <= i;j++){
//         std::cout << i ;
//     }
//     std::cout << "\n" ;
//     }
//     return(0);
// }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star question no. 3

// #include <iostream>
// int main(){
//     int i, j;
//     for( i = 1; i <= 5; i++){
//     for(j = 1; j <= i;j++){
//         std::cout << j ;
//     }
//     std::cout << "\n" ;
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star question no. 4
                                                                       
// #include <iostream>
// int main(){
//     int i, j;
//     for( i = 1 ; i <= 5 ; i++){
//     for(j = 1 ; j <= i ; j++){
//         std::cout << j +  i ;
//     }
//     std::cout << "\n" ;
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star question 5

// #include <iostream>
// int main(){
//     int i ,j;
//     for(i = 1 ; i <= 5 ; i++){
//         for(j = 1 ;  j <= i ;  j++){
//             if(j == 1){
//                 std::cout << "a";
//             }
//             if(j == 2){
//                 std::cout << "b";
//             }
//             if(j == 3){
//                 std::cout << "c";
//             }
//             if(j == 4){
//                 std::cout << "d";
//             }
//             if(j == 5){
//                 std::cout << "e";
//             }
            
//         }
//     std::cout << "\n" ;    
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star queation 6 

// #include <iostream>
// int main(){
//     int i, j;
//     for(i = 1; i <= 5; i++){
//         for(j = 1; j <= i ; j++){
//             std::cout << char('a' + (j - 1));
//         }
//     std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star queation 7

// #include <iostream>
// int main(){
//     int i, j ;
//     for(i = 1 ; i <= 5; i++){
//         for(j = 1; j <= i; j++){
//             std::cout <<  "*";
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star question 8

// #include <iostream> 
// int main(){
//     int i;
//     for(i = 1;i <= 5; i++){
//         int j,n = 5;
//         for(j = 1; j <= n - i; j++){
//             std::cout <<" ";
//         }
//         int k;
//         for(k = 1; k <= i; k++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// abcd in reverse pyramid

// #include <iostream>
// int main(){
//     int i, j, k,n =5 ;
//     for(i = 1; i <= 5; i++ ){
//         for(j = 1; j <= n - i; j++){
//             std::cout << " ";
//         }
//         for(k = 1; k <= i; k++){
//             std::cout << char('a' + (k-1));
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 1223333444455555 in reverse pyramid

// #include <iostream>
// int main(){
//     int i, j ,k , l, n=5;
//     for(i = 1; i <= 5; i++){
//         for(j = ; j <= n-1; j++){
//             std::cout <<" ";
//         }
//         for(k = 1; k <= i; k++){
//             std::cout << i;
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 1234 in reverse pyramid

// #include <iostream>
// int main(){
//     int i, j ,k , l, n=5;
//     for(i = 1; i <= 5; i++){
//         for(j = i; j < n; j++){
//             std::cout <<" ";
//         }
//         for(k = 1; k <= i; k++){
//             std::cout << k;
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// like this is the real actual pyramid

// #include <iostream>
// int main(){
//     int i,l,k,h;
//     for(i = 1 ; i <= 5 ; i++ ){
//         for(l = i; l <= 4; l++){
//             std::cout <<" ";
//         }
//         for (k = 1; k <= i; k++){
//             std::cout << "*";
            
//         }
//         for(h = 2; h <= i; h++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// star in reverse form but in different form

// #include <iostream> 
// int main(){
//     int i,j,k,l;
//     for(i = 1; i <= 5; i++){
//         for(j = 2; j <= i; j++){
//             std::cout << " "; 
//         }
//         for(k = i; k <= 5; k++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// barfi shape star code 

// #include <iostream>
// int main(){
//     int i,g,h,k,l;
//     int q,w,e,r,t;
//     for(i= 1; i <= 5; i++){
//         for(g = i; g <= 4; g++){
//             std::cout << " ";
//         }
//         for(h = 1; h <= i; h++){
//             std::cout << "*";
//         }
//         for(k = 2; k <= i; k++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     for(q = 1; q <= 5; q++){
//         for(e = 1; e <= q ; e++){
//             std::cout << " ";
//         }
//         for( w = q ; w <= 4 ; w++ ){
//             std::cout << "*";
//         }
//         for( t = q ; t <= 3 ; t++ ){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// using functions for first time

// #include <iostream>
// void sum(int a = 2, int b = 3);
// int main(){
//     sum();
// }
//     void sum(int a,int b){
//     std::cout << a + b;}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// writing code by using inline function

// #include <iostream>
//     inline int somet(int k, int l) {
//     return k + l; }

// int main(){
//     int turn = somet(5,6);
//     std::cout << "The number is \n" << turn;
//     return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// writing code to print in inline code by taking input from user

// #include <iostream>

//     inline int sum(int a, int b){
//         return a + b ; 
//     }

//     int main(){
//         int a , b;
//         std::cin >> a >> b ;
//         int total = sum(a,b);
//         std::cout << total;

//         return(0);
//     }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// writing code to print in inline code by taking input from user performing multipication

// #include <iostream>

//     inline int sum(int a, int b){
//         return a * b ; 
//     }

//     int main(){
//         int a , b;
//         std::cout << "Enter your two number \n";
//         std::cin >> a >> b ;
//         int total = sum(a,b);
//         std::cout << total;

//         return(0);
//     }

////////////////////////////////////////////////////////////////////////////////

// writing code to print in inline code by taking input from user performing subtarct

    // #include <iostream>

    // inline int sum(int a, int b){
    //     return a - b ; 
    // }

    // int main(){
    //     int a , b;
    //     std::cout << "Enter your two number \n";
    //     std::cin >> a >> b ;
    //     int total = sum(a,b);
    //     std::cout << total;

    //     return(0);
    // }

    ////////////////////////////////////////////////////////////////////////////////
    
    // program to add two number by taking input from user by using void as function

    //   #include <iostream>

    // void sum(int a , int b ){
    //     std::cout << a + b;
    // }

    // int main(){
    //     int aa , bb;
    //     std::cout << "Enter your two number you want to add " ;
    //     std::cin >> aa >> bb ;
    //     sum(aa,bb);
        
    // return(0);
    // }

//////////////////////////////////////////////////////////////////////////////////////////////

// writing first code using function and class

// #include <iostream>

// class sum{
//     private:
//     int a , b;

//     public: 
//     void get();
//     void put();
// };

// void sum::get()
// {
//     std::cout << "Enter two number \n";
//     std::cin >> a >> b;
// }

// void sum::put(){
//     std::cout << a + b;
// }

// int main(){
//     sum aa;
//     aa.get();
//     aa.put();

// return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////

// writing code to print output using class and function 

// #include <iostream>

// class sum{
//     private:
//     int a, b;

//     public:
//     void get(){
//     std::cout << "Enter your two no.\n";
//     std::cin >> a >> b;
//     };

//     void put(){
//     std::cout << a + b;
//     };
// };

// int main(){
//     sum aa;
//     aa.get();
//     aa.put();

// return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////

// writing code to print output using class and function and applying multipication. 

// #include <iostream>

// class sum{
//     private:
//     int a, b;

//     public:
//     void get(){
//     std::cout << "Enter your two no.\n";
//     std::cin >> a >> b;
//     };

//     void put(){
//     std::cout << a * b;
//     };
// };

// int main(){
//     sum aa;
//     aa.get();
//     aa.put();

// return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////

// writing the code to print perform dividion in class and function.

// #include <iostream>

// class divide{
//     private:
//     int a , b;

//     public:
//     void get();
//     void put();
// };

// void divide::get(){
//     std::cout << "Enter your number\n";
//     std::cin >> a >> b ;
// };
// void divide::put(){
//     std::cout << a / b ;
// };

//     int main(){
//     divide aa;
//     aa.get();
//     aa.put();

// return(0);
// }

////////////////////////////////////////////////////////////////////////////////////////////

// write a code to check if the number is even or odd using class and fuction 

// #include <iostream>

// class number{
//     private:
//     int a;
//     public:
//     void get();
//     void put();
// };
// void number::get(){
//     std::cout << "Enter your number\n";
//     std::cin >> a;
// };
// void number::put(){
//     if(a % 2 == 0){
//         std::cout << "The number is even\n";
//     }else{
//         std::cout << "The number is odd\n";
//     }
// };


// int main(){
//     number num;
//     num.get();
//     num.put();

// return(0);
// }

//////////////////////////////////////////////////////////////////////////////////////////////////

// write a code to check if the number is posite or negative using class and fuction 

// #include <iostream>

// class number{
//     public:
//     int a;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     std::cout << "Enter your  number\n";
//     std::cin >> a ;
// };
// void number::put(){
//     if(a >= 0){
//         std::cout << "The number is Positive";
//     }else{
//         std::cout << "The number is Negative";
//     }
// };

// int main(){
//     number num;
//     num.get();
//     num.put();

// return(0);
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// write a code to check if the number is greater using class and fuction 

// #include <iostream>

// class number{
//     private:
//     int a, b;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     std::cout << "Enter your number\n";
//     std::cin >> a >> b;
// };
// void number::put(){
//     if(a > b ){
//         std::cout << "First number is greater";
//     }if(a == b){
//         std::cout << "Number is Equal";
//     }if(a < b){
//         std::cout << "Second number is greater";
//     }
// };
// int main(){
//     number num;
//     num.get();
//     num.put();

// return(0);
// }


///////////////////////////////////////////////////////////////////////////////////////////////////

// priting number from 1 to 10 using class and function 

// #include <iostream>

// class number{
//     private:
//     int a , b ;
//     public:
//     void get();
// };
// void number::get(){
//     for(a = 1; a <= 10; a++){
//         std::cout << a << "\n";
//     }
// };

// int main(){
//     number num;
//     num.get();

// return(0);
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// code to print from 1 to n  

// #include <iostream> 

// class number{
//     private:
//     int a,i;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     std::cout << "Enter your number till where you want to print\n";
//     std::cin >> a ;    
// };

// void number::put(){
//     for( i = 1; i <= a ; i++){
//         std::cout << i << "\n";
//     }
// };

// int main(){
//     number num;
//     num.get();
//     num.put();

// return(0);
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// code to print number in reverse

// #include <iostream>

// class number{
//     private:
//     int a , b , rev;
    
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     std::cout << "Enter your number you want to reverse\n";
//     std::cin >> a ;
// };

// void number::put(){
//     for(a  ; a >= 1; a-- ){
//         std::cout << a << "\n";
//     }
// };

// int main(){
//     number num;
//     num.get();
//     num.put();

// return (0);
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// code example using array of object

// #include <iostream>
// class number{
//     private:
//     int a , b ;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     std::cout << "Enter your number you want to print\n";
//     std::cin >> a >> b;
// };

// void number::put(){
//     std::cout << a << "\n" << b << "\n";
// };

// int main(){
//     number num[5];
//     int i;
//     for( i = 0 ; i < 5 ; i++){
//         num[i].get();
//     }
//     for( i = 0 ; i < 5 ; i++){
//         num[i].put();
//     }

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// print star code in class and function

// #include <iostream>

// class number{
//     // private:
//     // int a, b ;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     for(int i =  1; i <= 5; i++){
//         for(int j = 1; j <= i ; j++){
//             std::cout << "*" ;
//         }
//         std::cout << "\n"  ;
//     }
// };

// int main(){
//     number num;
//     num.get();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// print star code in class and function after space

// #include <iostream>

// class number{
//     // private:
//     // int a, b ;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     for(int i =  1; i <= 5; i++){
//         for(int j = i; j <= 4 ; j++){
//             std::cout << " " ;
//         }
//         for(int j = 1; j <= i ; j++){
//             std::cout << "*" ;
//         }
//         std::cout << "\n"  ;
//     }
// };

// int main(){
//     number num;
//     num.get();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// program to print pyramid in class and function

//  #include <iostream>

// class number{
//     // private:
//     // int a, b ;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     for(int i =  1; i <= 5; i++){
//         for(int j = i; j <= 4 ; j++){
//             std::cout << " " ;
//         }
//         for(int j = 1; j <= i ; j++){
//             std::cout << "*" ;
//         }
//         for(int j = 2; j <= i ; j++){
//             std::cout << "*" ;
//         }
//         std::cout << "\n"  ;
//     }
// };

// int main(){
//     number num;
//     num.get();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// code to print infinte starts

// #include <iostream>

// class number{
//     // private:
//     // int a, b ;
//     public:
//     void get();
//     void put();
// };

// void number::get(){
//     for(int i =  1; i <= 5; i++){
//         for(int j = 2; j >= i ; j--){
//             std::cout << " " ;
//         }
//         for(int j = 1; i <= 5 ; j--){
//             std::cout << "*" ;
//         }
        
//         std::cout << "\n"  ;
//     }
// };

// int main(){
//     number num;
//     num.get();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// Rectangle Class: Calculate Area and Perimeter

// #include <iostream>
// class rectangle{
//     int length,breath;
//     public:
//     void setDimensions();
//     void calculateArea();
//     void calculatePerimeter();
// };

// void rectangle::setDimensions(){
//     std::cout << "Enter your length and breath\n";
//     std::cin >> length >> breath;
// };
// void rectangle::calculateArea(){
//     int area = length * breath;
//     std::cout << "Area is " <<area << "\n";
// };
// void rectangle::calculatePerimeter(){
//     int perimeter = 2 * (length + breath);
//     std::cout << "Perimeter is " << perimeter;
// };

// int main(){
//     rectangle cal;
//     cal.setDimensions();
//     cal.calculateArea();
//     cal.calculatePerimeter();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// Square Class: Calculate Area and Perimeter

// #include <iostream>
// class rectangle{
//     int length,breath;
//     public:
//     void setDimensions();
//     void calculateArea();
//     void calculatePerimeter();
// };

// void rectangle::setDimensions(){
//     std::cout << "Enter your length and breath\n";
//     std::cin >> length ;
// };
// void rectangle::calculateArea(){
//     int area = length * length;
//     std::cout << "Area is " <<area << "\n";
// };
// void rectangle::calculatePerimeter(){
//     int perimeter = 4 * length;
//     std::cout << "Perimeter is " << perimeter;
// };

// int main(){
//     rectangle cal;
//     cal.setDimensions();
//     cal.calculateArea();
//     cal.calculatePerimeter();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// Triangle Class: Calculate Area and Perimeter

// #include <iostream>
// class rectangle{
//     int length,breath,height,base;
//     public:
//     void setDimensions();
//     void calculateArea();
//     void calculatePerimeter();
// };

// void rectangle::setDimensions(){
//     std::cout << "Enter your length,breath and height and base\n";
//     std::cin >> length >> height >> base ;
// };
// void rectangle::calculateArea(){
//     int area = 0.5 * (base * height) ;
//     std::cout << "Area is " <<area << "\n";
// };
// void rectangle::calculatePerimeter(){
//     int perimeter =  length + base + height;
//     std::cout << "Perimeter is " << perimeter;
// };

// int main(){
//     rectangle cal;
//     cal.setDimensions();
//     cal.calculateArea();
//     cal.calculatePerimeter();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// writing code for class as function

// #include <iostream>

// class clockk{
//     int h,m ;
//     public:
//     void getdata();
//     void putdata();
//     void sum(clockk, clockk);
// };
// void clockk::getdata(){
//     std::cout << "Enter hour: ";
//     std::cin >> h;
//     std::cout << "Enter minutes: ";
//     std::cin >> m;
// }
// void clockk::putdata(){
//     std::cout << "Hours is: " << h;
//     std::cout << "\nminutes is: " << m;
// }
// void clockk::sum(clockk t1, clockk t2){
//     m = t1.m + t2.m;
//     h = m/60;
//     m = m % 60;
//     h = h + (t1.h + t2.h);
// }
// int main(){
//     clockk t1,t2,t3;
//     t1.getdata();
//     t2.getdata();
//     t3.sum(t1,t2);
//     t3.putdata();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// program to add two number

// #include <iostream>
// using namespace std;

// class Calculator {
// private:
//     int num1, num2;

// public:
//     void getNumbers() {
//         cout << "Enter two numbers: ";
//         cin >> num1 >> num2;
//     }

//     int add() {
//         return num1 + num2;
//     }

//     void displayResult() {
//         cout << "Sum = " << add() << endl;
//     }
// };

// int main() {
//     Calculator calc;   
//     calc.getNumbers(); 
//     calc.displayResult(); 
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// program to convert celcius to farenhit

// #include <iostream>

// class tempconverter{
//     private:
//     int a, b, total;
//     public:
//     void getdata();
//     void putdata();
//     void sum();
// };

// void tempconverter::getdata(){
//     int c,f;
//     std::cout << "Enter your temp in celcius \n";
//     std::cin >> c;
//     f = ( c * 9/5 ) + 32;
// }

// void tempconverter::putdata(){
//     int f;
//     std::cout << "Temp in farenhit \n" << f;
// }

// int main(){
//     tempconverter fntapman;
//     fntapman.getdata();
//     fntapman.putdata();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////

// using friend function

// #include <iostream>

// class add{
//     private:
//     int a , b ;
//     public:
//     void getdata();                
//     friend int sum(add aa);
// };

// void add::getdata(){
//     // int a , b;
//     std::cout << "Enter two number you want to add\n";
//     std::cin >> a >> b;
// }

// int sum(add aa){
//     return (aa.a + aa.b) ;
// }

// int main(){
//     add aa;
//     aa.getdata();
//     std::cout << "addition:" << sum(aa);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// code to get two input from two different class and performing there calculation in friend function

// #include <iostream>

// class num2;
// class num1{
//     int a;
//     public:
//     void getdata();
//     friend int sum(num1 aa, num2 bb);
// };
// void num1::getdata(){
//     std::cout << "Enter first number\n";
//     std::cin >> a;
// }

// class num2{
//     int b;
//     public:
//     void getvalue();
//     friend int sum(num1 aa, num2 bb);
// };
// void num2::getvalue(){
//     std::cout << "Enter your second number\n" ;
//     std::cin >> b;
// }
// int sum(num1 aa, num2 bb){
//     return aa.a + bb.b;
// }

// int main(){
//     num1 aa; num2 bb;
//     aa.getdata();
//     bb.getvalue();
//     std::cout << "Sum = " << sum(aa, bb);
// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// Using a friend function to calculate the area of the rectangle

// #include <iostream>

// class length;
// class breath;

// class breath{
//     private:
//     int b;
//     public:
//     void getdata();
//     friend int rectangle(length aa, breath bb);
// };
// void breath::getdata(){
//     std::cout << "Enter breath: \n";
//     std::cin >> b ;
// }
// class length{
//     int l;
//     public:
//     void getbit();
//     friend int rectangle(length aa, breath bb);
// };
// void length::getbit(){
//     std::cout << "Enter length: \n";
//     std::cin >> l;
// }

// int rectangle(length aa, breath bb){
//     return aa.l * bb.b;
// }

// int main(){
//     length aa; breath bb;
//     aa.getbit();
//     bb.getdata();
//     std::cout << "Sum = " << rectangle(aa, bb);

// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// writing a simple code to print from static values
writing a simple code to print from static values
#include <iostream>

class secret{
    private:
    static int number;
    public:
    void print1();
};

int secret::number = 2;

void secret::print1(){
    int a;
    a = 2;
    std::cout << "sum is: " << a + number ;}

int main(){
    secret aa;
    aa.print1();
}