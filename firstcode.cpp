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
//         if (i >= n){
//             std::cout << sum;
//         } 
//         i ++;
//     }
// return(0);
// }

// same question but this time by using for loop

#include <iostream>
int main(){
    int i,n,sum = 0;
    std::cout << "Enter your nos.";
    std::cin >> n;
    for(i = 1;i <= n; i++)
    {
        sum = sum + i;
        if (i >= n){    
        std::cout << sum;}
        
    }
    return (0);
}


