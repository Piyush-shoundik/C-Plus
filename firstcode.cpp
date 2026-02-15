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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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
//     static int number;
//     public:
//     void print1();
// };

// int secret::number = 2;

// void secret::print1(){
//     int a;
//     a = 2;
//     std::cout << "sum is: " << a + number ;}

// int main(){
//     secret aa;
//     aa.print1();
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// practice-style question for you based on using one class's
// static data member in another class

// #include <iostream>

// class bank{
//     public:
//     static int total;
//     void putdata(){
//         std::cout << "Total number of customer is: " << total ;
//     }
// };

// int bank::total = 0;

// class customer{
//     public:
//     void registercustomer(){
//         bank::total++;
//         std::cout << "Registering customer...\n";
//     }
// };

// int main(){
//     customer c1,c2,c3;
//     bank t;

//     c1.registercustomer();
//     c2.registercustomer();
//     c3.registercustomer();

//     t.putdata();
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// using static member function

// #include <iostream>
// using namespace std;

// class out {
//     int a;
//     static int b;
// public:
//     void getdata();
//     static void number();
// };

// int out::b = 0;

// void out::getdata() {
//     a = 2;
//     cout << "a = " << a << endl;
//     b = b + 1;
// }

// void out::number() {
//     cout << "Number is: " << b << endl;
// }

// int main() {
//     out aa, bb, cc;
//     aa.getdata();
//     bb.getdata();
//     cc.getdata();

//     out::number();

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// static function–based question

// #include <iostream>

// class calculator{
//     int a , b;
//     public:
//     void getdata();
//     static int menu();
//     void result();
// };

// // int calculator::menu = 0;

// void calculator::getdata(){
//     std::cout << "Enter your first number\n";
//     std::cin >> a ;
//     std::cout << "Enter your second number\n";
//     std::cin >> b ;
// }
// void calculator::result(){
//     int sum,sub,multi,div,choice;

//     std::cout << "Enter your choice:";
//     std::cin >> choice;

//     sum = a + b ;
//     sub = a - b ;
//     multi = a * b;
//     div = a/b;

//     if(choice == 1 ){
//         std::cout << "Result = " << sum ;
//     }
//     if(choice == 2 ){
//         std::cout << "Result = " << sub ;
//     }
//     if(choice == 3 ){
//         std::cout << "Result = " << multi ;
//     }
//     if(choice == 4){
//         std::cout << "Result = " << div ;
//     }
//     else{
//         std::cout << "Enter valid input"  ;
//     }
// }
// int calculator::menu(){
//     std::cout << "Available Operations:\n";
//     std::cout << "1. Addition\n";
//     std::cout << "2. Subtraction\n";
//     std::cout << "3. Multiplication\n";
//     std::cout << "4. Division\n";
// }

// int main(){
//     calculator aa;
//     aa.getdata();
//     calculator::menu();
//     aa.result();

// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// using constructor in class

// #include <iostream>

// class random{
//     int a, b;
//     public:
//     random(){
//         a = 10;
//         b = 20;
//     }
//     void putdata(){
//         std::cout << "A Number is:" << a << "\nB Number is:" << b ;
//     }
// };

// int main(){
//     random aa;
//     aa.putdata();

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// Adding two reverse value

// #include <iostream>
// using namespace std;

// class solution {
// public:
//     int a = 243;
//     int b = 564;
//     int revA = 0;
//     int revB = 0;

//     void reverse1();
//     void reverse2();
//     void putdata();
// };

// void solution::reverse1() {
//     int temp = a;
//     while (temp > 0) {
//         int digit = temp % 10;
//         revA = revA * 10 + digit;
//         temp = temp / 10;
//     }
// }

// void solution::reverse2() {
//     int temp = b;
//     while (temp > 0) {
//         int digit = temp % 10;
//         revB = revB * 10 + digit;
//         temp = temp / 10;
//     }
// }

// void solution::putdata() {
//     cout << "Reversed a: " << revA + revB ;
// }

// int main() {
//     solution aa;
//     aa.reverse1();
//     aa.reverse2();
//     aa.putdata();
//     return 0;
// }

// ///////////////////////////////////////////////////////////////////////////////

// using copy constructors

// #include <iostream>
// using namespace std;

// class number{
//     int a;
//     public :
//     number(){
//         a = 10;
//     }
//     number(number &z){
//         a = z.a;
//     }
//     void putdata(){
//         cout << a;
//     }
// };

// int main(){
//     number aa;
//     number bb;
//     aa.putdata();
//     bb.putdata();

// return 0;
// }

// ///////////////////////////////////////////////////////////////////////

// using constructors overloading

// #include <iostream>

// class number{
//     int a;
//     public:
//     number(){
//         a = 5;
//     }
//     number(int x){
//         a = x;
//     }
//     number(number &z){
//         a = z.a;
//     }
//     void putdata(){
//         std::cout << "The number is:" << a << "\n";
//     }
// };

// int main(){
//     number aa;
//     number bb(20);
//     number cc(aa);
//     aa.putdata();
//     bb.putdata();
//     cc.putdata();

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////

// using constructor and destructor

// #include <iostream>

// int a = 0;

// class check
// {
//     public:
//     check(){
//         a++ ;
//         std::cout << "\nCreated a number" << a;
//     }
//     ~check()
//     {
//         std::cout << "\nDeleted a number" << a ;
//         a--;
//     }
// };

// int main(){
//     check aa,bb;

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////

// using single inheritance functions

// #include <iostream>

// class numb
// {
//     protected:
//     int a = 10;

//     public:
//     int b;

//     void getdata(){
//         std::cout << "Enter your number you want to addd";
//         std::cin >> b ;
//     }

// };

// class sum:public numb{
//     protected:
//     int c = 10;

//     public:
//     int d;

//     void getnum(){
//     std::cout << "Enter your number";
//     std::cin >> d ;
//     }

//     void putdata(){
//         std::cout << "sum is = " << a + b + c + d;
//     }

// };

// int main(){
//     sum aa;
//     aa.getdata();
//     aa.getnum();
//     aa.putdata();
// }

////////////////////////////////////////////////////////////////////////////////////

// unsing multiple inheritance

// #include <iostream>

// class a{
//     protected:
//     int num1 = 10;
//     public:
//     int num2;
//     void getdata(){
//         std::cout << "Enter your number";
//         std::cin >> num2;
//     }
// };

// class b{
//     protected:
//     int num3 = 10;
//     public:
//     int num4;
//     void getinput(){
//         std::cout << "Enter your number";
//         std::cin >> num4;
//     }
// };

// class c:public a,public b{
//     public:
//     int num5;
//     void putdata(){
//         num5 = num1 + num2 + num3 + num4;
//         std::cout << "Total is " << num5;
//     }
// };

// int main(){
//     c aa;
//     aa.getdata();
//     aa.getinput();
//     aa.putdata();
// }

////////////////////////////////////////////////////////////////////////////////////

// using mutlilevel inheritance and function under function

// #include <iostream>

// class maths{
//     protected:
//     int marksmath ;
//     int marksmathinput2 = 0;
//     public:
//     void getmathsmarks(){
//         std::cout << "Enter your marks in range of 1 to 100 \n";
//         std::cin >> marksmath;
//         if(marksmath <= 100 && marksmath >= 1){
//             marksmathinput2 = marksmath;
//         }
//         else{
//             std::cout << "Enter a vaild number\n";
//             marksmath = 0;
//         }
//     }
// };

// class pps:public maths{
//     protected:
//     int markspps = 0;
//     int totalmarks = 0;
//     int marksppsinput = 0;
//     public:
//     void getppsmarks(){
//         std::cout << "Enter your marks in range of 1 to 100 \n";
//         std::cin >> markspps;
//         if(markspps <= 100 && markspps >= 1){
//             marksppsinput = markspps ;
//         }
//         else{
//             std::cout << "Enter a vaild number\n";
//         }

//     totalmarks = marksmathinput2 + marksppsinput;
//     }

// };

// class result:public pps{
//     public:
//     void results(){
//         getmathsmarks();
//         getppsmarks();
//     }
//     void totalresult(){
//         std::cout << "Your total is " << totalmarks ;
//     }
// };

// int main(){
//     result aa;
//     aa.results();
//     aa.totalresult();
// }

////////////////////////////////////////////////////////////////////////////////////

// hierarchical inheritance

// #include <iostream>

// class a{
//     public:
//     int num1 = 10;
// };

// class b:public a{
//     public:
//     void numb(){
//     int numb2 = 10 + num1;
//     std::cout << "Your number is " << numb2 ;
//     }
// };

// class c:public a{
//     public:
//     void numc(){
//     int numb2 = 20 + num1;
//     std::cout << "\nYour number is " << numb2 ;
//     }
// };

// int main(){
//     b aa;
//     aa.numb();
//     c bb;
//     bb.numc();
// }

////////////////////////////////////////////////////////////////////////////////////

// using function overbiding

// #include <iostream>
// class a{
//     public:
//     void putdata(){
//         std::cout << "This class is base class";
//     }
// };
// class b:public a{
//     public:
//     void putdata(){
//         std::cout << "This class is derived class\n";
//         // a::putdata(); //This is first way to call or use the function
//     }
// };

// int main(){
//     b aa;
//     aa.putdata();aa.a::putdata(); //This is the second way to call or use the function
// }

///////////////////////////////////////////////////////////////////////////////////

// constructor handaling in base class

// #include <iostream>

// class a{
//     public:
//     int q;
//     a(int x){
//         q = x;
//     }
// };

// class b{
//     public:
//     int w;
//     b(int y){
//         w = y;
//     }
// };

// class c: public a , public b {
//     public:
//     int g ,h ;

//     c(int g1, int h1) : a(g1), b(h1) {
//         g = g1;
//         h = h1;
//     }
//     void result(){
//         std::cout << "sum = " << g + h ;
//     }
// };

// int main(){
//     c aa(10,20);
//     aa.result();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////

// using ambiguity resolution in inheritance

// #include <iostream>
// class a{
//     public:
//     void putdata(){
//         std::cout << "This class is base class";
//     }
// };
// class b:public a{
//     public:
//     void putdata(){
//         std::cout << "This class is first derived class\n";
//     }
// };
// class c:public b{
//     public:
//     void putdata(){
//         std::cout << "This class is second derived class\n";
//     }
// };

// int main(){
//     c aa;
//     aa.putdata(), aa.a::putdata();
// }

///////////////////////////////////////////////////////////////////////////////////

// using virtual function

// #include <iostream>
// class a{
//     public:
//     virtual void putdata(){
//         std::cout << "This class is base class";
//     }
// };
// class b:public a{
//     public:
//     void putdata(){
//         std::cout << "This class is first derived class" << std::endl;
//     }
// };

// int main(){
//     a * sum ; b bb;
//     sum = &bb;
//     sum -> putdata();

//     a * sun ; a aa;
//     sun = &aa;
//     sun -> putdata();

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////

// finding if the alphabet is uppercase or lower case

// #include <iostream>

// int main(){
//     char vari ;
//     std::cout << "Enter your letter\n" ;
//     std::cin >> vari;

//     if(vari >= 'a' && vari <= 'z'){
//         std::cout << "small case";
//     }
//     else {
//         std::cout << "upper case ";
//     }
// }

///////////////////////////////////////////////////////////////////////////////////

// using signed or unsigned integer

// #include <iostream>
// int main(){
//     signed int a = -10;
//     unsigned int b = 70; //only print positive value

//     // we can't use this with float or double

//     std::cout << a << "\n" << b ;
//     // std::cout << aa << "\n" << bb ;
// }

///////////////////////////////////////////////////////////////////////////////////

// using array

// #include <iostream>

// int main(){

//     int array_id[5] = {1,2,3,4,5};

//     // we can make changes too
//     array_id[0] = 12345;

//     std::cout << array_id[0] << "\n";
//     std::cout << array_id[1] << "\n";
//     std::cout << array_id[2] << "\n";
//     std::cout << array_id[3] << "\n";
//     std::cout << array_id[4] << "\n";

// }

///////////////////////////////////////////////////////////////////////////////////

// using loop in array

// #include <iostream>

// int main(){

//     int array_id[5] = {1,2,3,4,5};
//     int sizeofarray = 5;

//     // we can make changes too
//     array_id[0] = 12345;

//     for(int i = 0 ; i < sizeofarray; i++ ){
//         std::cout << array_id[i] << "\n" ;
//     }
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////

// using loop in array and taking input

// #include <iostream>

// int main(){

//     int sizeofarray = 5;
//     int array_id[sizeofarray];

//     // we can make changes too
//     // array_id[0] = 12345;

//     for(int i = 0 ; i < sizeofarray; i++ ){
//         std::cin >> array_id[i];
//     }

//     for(int i = 0 ; i < sizeofarray; i++ ){
//         std::cout << array_id[i] << "\n" ;
//     }
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////

// finding smallest value in array

// #include <iostream>

// int main(){
//     int sizeofarray = 5;
//     int array_id[sizeofarray];
//     int a;
//     int num;

//     for(int i = 0 ; i < sizeofarray; i++ ){
//         std::cin >> array_id[i];
//     }

//     // for(int i = 0 ; i < sizeofarray; i++ ){
//     //     int num = array_id[i];
//     //     if(smallest < num){
//     //         int a = num;
//     //     }
//     //     return a;
//     // }
//     // if(a > num){
//     //         std::cout << "number is" << num;
//     // }

//     int smallest = array_id[0];

//     for (int i = 1; i < sizeofarray; i++) {
//         if (array_id[i] < smallest) {
//             smallest = array_id[i];
//         }
//     }

//     std::cout << "Smallest number is " << smallest << std::endl;

//     return 0;
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////

// printing largest value

// #include <iostream>

// int main(){
//     int sizeofarray = 2;
//     int arrayid[sizeofarray];
//     int b = 0;
//     int a;

//     for(int i = 0 ; i < sizeofarray; i++ ){
//         std::cin >> arrayid[i];
//     }

//     int num = arrayid[0];

//     for(int i = 0; i < sizeofarray ; i++ ){
//         if(num < arrayid[i]){
//             num = arrayid[i];

//         }
//     }

//     std::cout << "largest number is " << num;

// }

/////////////////////////////////////////////////////////////////////////////////

// checking code if it working or not

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////

// find the index for largest value

// #include <iostream>

// int main(){
//     int sizeofarray = 4;
//     int arrayid[sizeofarray];
//     int b = 0;
//     int a;
//     int num1;

//     for(int i = 0 ; i < sizeofarray; i++ ){
//         std::cin >> arrayid[i];
//     }

//     int num = arrayid[0];

//     for(int i = 0; i < sizeofarray ; i++ ){
//         if(num < arrayid[i]){
//             num = arrayid[i];
//             num1 = i;

//         }
//     }

//     std::cout << "index for largest number is " << num1 <<  "\nAnd the value is "<< num ;

// }

////////////////////////////////////////////////////////////////////////////////////////////

// searching value linearly value

// #include <iostream>

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int sizearr = 5 ;

//     for(int i = 0; i < sizearr ; i++ ){
//         if(arr[i] == sizearr){
//             std::cout << i;
//             return i;
//         }
//     }
//     return -1;
// }

////////////////////////////////////////////////////////////////////////////////////////////

// reversing the value

// #include <iostream>

// int main(){
//     int sizearr = 6;
//     int arr[sizearr] = {11, 12, 31, 41, 51, 61};
//     int i , minusnum ;

//     for(i = 1; i <= sizearr; i++){
//         minusnum = sizearr - i ;
//         std::cout << arr[minusnum] << "\n";
//     }

// }

// second method to reverse array as pass by reference

// #include <iostream>

// void printReverse(int arr[], int size, int revArr[]) {
//     for (int i = 0; i < size; i++) {
//         revArr[i] = arr[size - 1 - i];
//     }
// }

// int main() {
//     int sizearr = 6;
//     int arr[sizearr] = {11, 12, 31, 41, 51, 61};
//     int revArr[sizearr];

//     printReverse(arr, sizearr, revArr);

//     for (int i = 0; i < sizearr; i++) {
//         std::cout << revArr[i] << "\n";
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////

// using vector
// vector is just like array but the only difference is that it is dynamic and array is not

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vecname(5, 21);
//     cout << vecname[0];
// }

////////////////////////////////////////////////////////////////////////////////////////////

// by using for to access the value of vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vecname = {1,2,3,4,5,6,7,8};
//     for (int value : vecname){
//         cout << value << "\n";
//     }
// }

////////////////////////////////////////////////////////////////////////////////////////////

// code to print sum and multiple of all code using vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//         int a = 0;
//         int result;
//         int i = 0;
//         vector <int> value = { 11,22,33,44,55 };
//         int index = value.size();

//     for(i = 0; i < index; i++){
//         result += value[i];
//     }

//     if we want to print all the values

//     cout << result;

//     }

////////////////////////////////////////////////////////////////////////////////////////////

// code to swap min and max using array

// #include <iostream>
// using namespace std;

// int main(){
//     int sizeofarr = 5;
//     int arrid[sizeofarr] = { 100 , 30 , 50 , 80 , 13};
//     int smallest = arrid[0] , indexs = 0 ;
//     int largest = arrid[0], indexl = 0;

//     cout << "before changes \n" ;
//      for(int i = 0 ; i < sizeofarr; i++){
//             cout << arrid[i] <<"\n" ;
//     }

//     for(int i = 0 ; i < sizeofarr; i++){

//         if(arrid[i] > largest ){
//             largest = arrid[i];
//             indexl = i;
//         }
//         if(arrid[i] < smallest ){
//             smallest = arrid[i];
//             indexs = i;
//         }
//     }

//     arrid[indexl] = smallest;
//     arrid[indexs] = largest;

//     cout << "After changes \n";
//     for(int i = 0 ; i < sizeofarr; i++){
//             cout << arrid[i] <<"\n" ;
//     }
// }

////////////////////////////////////////////////////////////////////////////////////////////

// find same value in two of the array

// #include <iostream>
// using namespace std;

// int main(){
//     int sizeofarr = 5;
//     int arrid[sizeofarr] = { 100 , 30 , 50 , 80 , 13};
//     int arrid2[sizeofarr] = { 12 , 310 , 13 , 100 , 50};

//     for(int i = 0; i < sizeofarr; i++){
//         for(int j = 0; j < sizeofarr ; j++ )
//             if(arrid[i] == arrid2[j] ){
//             cout << "number is: " << arrid[i] <<"\n";
//         }
//     }
// }

////////////////////////////////////////////////////////////////////////////////////////////

// printing all non repeating value

// #include <iostream>
// using namespace std;

// int main(){
//     int sizeofarr = 7;
//     int arrid[sizeofarr] = { 100 , 30 , 50 , 80 , 80 , 100 , 50 };
//     int nonrepeated = 0;

//     for(int i = 0; i < sizeofarr; i++){
//         for(int j = 0; j < sizeofarr ; j++ ){
//             if (arrid[i] != arrid[j]){
//                 // cout << "number is nonrepeated " << arrid[i];
//                 nonrepeated = arrid[i];
//             }
//         }
//     }
//     cout << "non repeated value is: " << nonrepeated;
// }

////////////////////////////////////////////////////////////////////////////////////////

// using some vector function

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> num1 = {1,2,3,4,5,6,7,8};

//     num1.push_back(9);
//     num1.pop_back();

//     for(int putdata: num1){
//         cout << putdata << " " ;
//     }
//     cout << "\nsize of vector " << num1.size();
//     cout << "\nfront of vector " << num1.front();
//     cout << "\nBack of vector " << num1.back();

// }

////////////////////////////////////////////////////////////////////////////////////////

// eliminating repeated value in a array

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> num1 = {1,2,3,4,3,2,1};
//     int result = 0;

//                 for(int nums: num1){
//                     result ^= nums;
//                 }
//             cout << result;
//         }

////////////////////////////////////////////////////////////////////////////////////////

// printing all subarray index and values

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[n] = { 0, 1, 2, 3, 4};

//     for (int st = 0; st < n; st++) {
//         for (int end = st; end < n; end++) {
//             for (int i = st; i <= end; i++) {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////

// find subarray of any array
// here time complexity is o(n3) becaue here we use 3 algorithm

// #include <iostream>

// int main(){
//     int sizeofarr = 5;
//     int arr[5] = { 0 , 1 , 2 , 3 , 4 };

//     for(int i = 0 ; i < sizeofarr ; i++ ){
//         for(int j = i ; j < sizeofarr ; j++ ){
//             for(int k = i; k <= j; k++){
//                 std::cout << arr[k];
//             }
//             std::cout << " ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////

// printing largest sum of sub array (brute force soluction)
// here the time complexity is o(n2)

// #include <iostream>
// #include <vector>
// using namespace std;

// int main (){

//     int sizearr = 5;
//     int arr[sizearr] = { 1, 2, 3, 4, 5};

//     int maxvalue = 0;

//     for(int i = 0; i < sizearr; i++ ){
//         int currarr = 0;
//         for(int j = 0; j < sizearr; j++ ){
//             currarr += arr[j] ;
//             maxvalue = max(currarr, maxvalue) ;
//         }
//     }
//     cout << maxvalue;
// }

////////////////////////////////////////////////////////////////////////////////////////

// finding largest number by using kadane's algorithm

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currarr = 0;
//         int maxarr = INT_MIN;

//         for(int i = 0; i < nums.size() ; i++){
//             currarr += nums[i];
//             maxarr = max(currarr, maxarr);

//             if(currarr < 0 ){
//                 currarr = 0;
//             }
//         }
//         return maxarr;
//     }
// };

// int main(){
//     Solution aa;
//     vector<int> nums = {1, 2, -3, -2, 5};
//     cout << aa.maxSubArray(nums);
// }

////////////////////////////////////////////////////////////////////////////////////////

// find the majority numbers in a array by
// Boyer–Moore Voting Algorithm

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
// vector<int> nums = {1,2,2,2};

// int freq = 0 , sum = 0;

//     for(int i = 0; i < nums.size(); i++){
//         if(freq == 0){
//             sum = nums[i];
//         }
//         if(sum == nums[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }

//     int count = 0;
//     for(int num : nums) {
//         if(num == sum) count++;
//     }

//     if(count > nums.size()/2) {
//         cout << "Majority Element = " << sum << endl;
//     } else {
//         cout << "No Majority Element" << endl;
//     }

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////

// leetcode question number 121

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//     int n = prices.size();
//     int bestBuy = prices[0];
//     int maxProfit = 0;

//     for(int i = 0  ; i < n ; i++ ){
//         if(prices[i] > bestBuy){
//             maxProfit = max(maxProfit, prices[i] - bestBuy);
//         }
//         bestBuy = min(bestBuy, prices[i]);
//     }

//     return  maxProfit;
//     }
// };

// int main(){
//     Solution aa;
//     vector<int> prices = {7,1,5,3,6,4};
//     cout << aa.maxProfit(prices);
// }

/////////////////////////////////////////////////////////////////////////////////////////////////

// leetcode queston 11

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

// Example 1:

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1

// O(n3)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){

//     vector<int> height = {1,8,6,2,5,4,8,3,7};

//     int n = height.size();
//     int area = 0;
//     int maxNum = 0;

//     for(int i= 0; i < n; i++){
//         for(int j = i+1 ; j < n; j++){
//             int index = (j - i) ;
//             area = min(height[i], height[j]);
//             int summ = area * index;
//             // result.push_back(summ);
//             maxNum = max(maxNum, summ);
//         }
//     }

//     cout << maxNum;

// return 0;
// }

// type 2 approach

// with time complexity O(n2)
// with space complexity O(n2)

// without using for

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//     int n = height.size();
//     int area = 0;
//     int maxNum = 0;

//     for(int i= 0; i < n; i++){
//         for(int j = i+1 ; j < n; j++){
//             int index = (j - i) ;
//             area = min(height[i], height[j]);
//             int summ = area * index;
//             // result.push_back(summ);
//             maxNum = max(maxNum, summ);
//         }
//     }
//     cout << maxNum;

//     }
// };

// int main(){
//     Solution aa;
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     aa.maxArea(height);
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////

// leetcode question 238

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> nums = {-1,1,0,-3,3};
//     vector<int> result;

//     for(int i = 0;i < nums.size(); i++){
//         int resultt = 1;
//         for(int j = 0;j < nums.size(); j++){
//             if(i != j){
//                 resultt *= nums[j];
//             }
//         }
//         result.push_back(resultt);
//     }
//     for(int k = 0; k < nums.size();k++ ){
//         cout << result[k] << " " ;
//     }
// }

// time complexcity O(n)

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> nums = {1,2,3,4};
//     vector<int> result;
//     int prefix = INT_MAX;

//     for(int i = 0; i < nums.size(); i++){
//         int currval = nums[nums.size() - i];
//         // if(currval == nums[i]){
//         //     prefix *= nums[i-1];
//             cout << currval;
//         // }
//     }

// }

////////////////////////////////////////////////////////////////////////////////////////////////////////

// pointers

// #include <iostream>

// int main(){
//     int a = 10;
//     int *p = &a;
//     int **p1 = &p;

//     float b = 10.33;

//     std::cout << &p << "\n" << p1 ;

//     std::cout << &a << "\n";
//     std::cout << p << "\n" ;
//     std::cout << &p << "\n";

//     std::cout << &b;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////

// using dereference(*)

// #include <iostream>

// int main(){
//     int a = 10;
//     int *p = &a;
//     int **p1 = &p;

//     std::cout << *(p1) << "\n";
//     std::cout << p1 << "\n";
//     std::cout << &a;

// }

////////////////////////////////////////////////////////////////////////////////////////////////////////

// pass by refernece using alias

// #include <iostream>

// void ref(int &b){
//     b = 100;

// }

// int main(){
//     int a = 10;

//     ref(a);

//     std::cout << a;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////

// pass by value

// #include <iostream>

// void ref(int b){
//     b = 100;
//     // if you want to reflect the value to main file use
//     // which i use in next line
//     // return b;
// }

// int main(){
//     int a = 10;

//     ref(a);
//     // a = ref(a);

//     std::cout << a;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////

// pass by reference using pointers

// #include <iostream>

// void changes(int *x, int *y){
//     *x = 200;
//     *y = 50;
// }

// int main(){
//     int a = 10, b = 20;

//     changes(&a , &b);

//     std::cout << a << " " << b;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// using arthmetic operations in pointers

// or we can also use relational operator

// #include <iostream>
// using namespace std;

// int main (){
//     int arr[4] = {10,20,30,40};

//     int *ptr = arr;
//     cout << ptr << "\n";

//     int *ptr2 = arr;

//     ptr2 += 1;
//     cout << ptr << "\n";

//     cout << ptr2 - ptr;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// binary search

// #include <iostream>
// #include <vector>
// using namespace std;

// int result(vector<int> vec1,int tgt){
//     int srt = 0, end1 = vec1.size()-1;
//         while(srt <= end1){
//             int mid = (srt + end1) / 2;

//             if(tgt > vec1[mid]){
//                 srt = mid + 1;
//             }
//             else if(tgt < vec1[mid]){
//                 end1 = mid - 1;
//             }
//             else{
//                 return mid;
//             }
//     }
//     return -1;
// }

// int main(){
//     int tgt = 69;
//     vector<int> vec1 = {1,2,3,7,9,15,17,18};

//     cout << result(vec1,tgt);
//     // cout << out;

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// using selection sort

// #include <vector>
// #include <iostream>
// using namespace std;

// int main (){
//     int n = 5;
//     int arr[n] = {12,2,20,4,1};

//     int mini = arr[0];

//     for(int i = 0; i < n-1 ; i++ ){
//         for(int j = i + 1; j < n; j++){
//             if(arr[j] < arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int k = 0 ; k < 5 ; k++){
//         cout << arr[k] << "\n";
//     }
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// find the max number here in array

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> vec1 = {1,6,4,5,9,7};

//     int max_val = vec1[0];
//     int min_val = vec1[0];
//     int sec_max = 0;
//     for(int i = 0; i < vec1.size(); i++){
//         if (vec1[i] > max_val) {
//             sec_max = max_val;
//             max_val = vec1[i];
//         }
//         else if (vec1[i] > sec_max) {
//             sec_max = vec1[i];
//         }
//     }
//     cout << "max:" <<max_val  << "\nsecmax:" << sec_max;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// code to insert any value to any position

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, index, value, j;
//     vector<int> vec(n);
//     vector<int> vec2;

//     cout << "Enter your size\n";
//     cin >> n;

//     cout << "Input your array values\n";
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> vec[i];
//     }

//     cout << "Enter your Index\n";
//     cin >> index;
//     cout << "Enter your  value\n";
//     cin >> value;

//     if (index <= n)
//     {
//         for (j = 0; j <= index; j++)
//         {
//             if (j < index)
//             {
//                 int num = vec[j];
//                 vec2.push_back(num);
//             }
//             else
//             {
//                 vec2.push_back(value);
//             }
//         }
//         for (int k = index; k < n; k++)
//         {
//             vec2.push_back(vec[k]);
//         }
//         for (int l = 0; l < n; l++)
//         {
//             cout << vec2[l];
//         }
//     }
//     else
//     {
//         cout << "Input correct index next time";
//     }
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// deletion the number from array

// #include <iostream>
// #include <vector>
// using namespace std;

// int rtn(vector<int>vec1, int tgt){
//     for(int i = 0; i < vec1.size(); i++){
//         int value = 0;
//         if(vec1[i] == tgt ){
//             value++;
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int>vec1 = {1,2,3,4,5,8};
//     int tgt = 9;

//     int result = rtn(vec1 , tgt);

//     if(result >= 0){
//         for(int j = result; j < vec1.size();j++){
//         int numm = vec1[j+1];

//         vec1[j] = numm;
//     }
//     for(int k = 0;k < vec1.size()-1 ; k++){
//         cout << vec1[k] <<"\n";
//     }
//     }
//     else{
//         cout << "Input not found";
//     }

// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// not printing the target no matter how many 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int>vec1 = {7,3,2,5,6,7,8};
//     int tgt = 7;
//     int rmd = 0;

//     for(int i = 0; i < vec1.size();i++){
//         if(vec1[i] != tgt){
//             int k = vec1[i];
//             vec1[rmd] = k;
//             rmd++;
//         }
        
//     }
//     for(int j = 0; j < rmd; j++){
//         cout << vec1[j] << "\n";
//     }

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// printing all the repeated values in an array

// #include <iostream>
// #include <vector> 
// using namespace std; 

// int main(){

// vector<int>arr = {1,2,3};
// vector<int>arr2;

//         int n = arr.size(),num ;

//         for(int i = 0; i < n-1; i++){
//             for(int k = i+1; k < n; k++){
//                 if(arr[i] == arr[k]){
//                     num = arr[i];
//                     arr2.push_back(num);
//                     num++;
//                 }
//             }
//         }
//         for(int l = 0; l < arr2.size(); l++){
//                 cout << arr2[l];
//         }
//         if(arr2[0] > 0){
//             for(int l = 0; l < arr2.size(); l++){
//                 int h = arr2[l];
//                 cout << h;
//             }
//         }else{
//             cout << arr2[0];
//         }
//     }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// not completed 
// question is finding the equlibrium point in any where in array
// if not return -1

// #include <iostream>
// #include <vector> 
// using namespace std; 

// int main(){
//         vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};

//         vector<int> arr2;
//         vector<int> arr3;
//         int num1, n = arr.size(),num2;
        
//         for(int i = 1; i < n ; i++ ){
//             num1 = 0;
//             for(int j = i ; j < n; j++ ){
//                 num1 = num1 + arr[j];
//             }
//             arr2.push_back(num1);
//         }
//         for(int l = 1; l < n; l++){  
//             num2 = 0;
//             for(int k = 0 ; k < l-1; k++ ){
//                 num2 = num2 + arr[k]; 
//             }
//             arr3.push_back(num2);
//         }
//         for(int g = 0 ; g < n; g++){
//             if(arr3[g] == arr2[g]){
//                 cout << arr2[g] << "\n";
//             }
//         }

        // for(int p = 1; p < n-1 ; p++){
        //     cout << arr3[p];
        // }
        
    // }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// removing all particular values from any array

// #include <iostream> 
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vec = {5,4,6,7,7,8,4};
//     int rum = 0;
//     for(int i = 0 ; i < vec.size(); i++){
//         if(vec[i] == 7){
//             vec[i] = vec[i] ^ 7;
//         }
//         if(vec[i] == 0){
//             rum++;
//         }
//     }
//     for(int j = 0; j < vec.size(); j++){
//         cout << vec[j] << "\n";
//     }
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main(){
//     int n, i = 1;
//     // code to print number from 1 to n
//     cout << "Enter your last number\n";
//     cin >> n ;

//     for(i = 1; i <= n ; i++){
//         cout << i << "\n";
//     }

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter your size";
//     cin >> n;

//     vector<int> naam(n);

//     int l = naam[0];
    
//     for(int i = 0; i < n; i++){
//         cin >> naam[i];
//     }

//     for(int k = 0; k < n; k++){
//         if(l < naam[k]){
//             l = naam[k];
//         }
//     }

//     cout << l << " is the largest in naam array";

// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main(){
//     cout << "hello World";
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// checking even and odd in a code by cpp 

// #include <iostream> 
// using namespace std;

// int main(){
//     int a;
    // cout << "Enter number you want to check\n";
    // cin >> a ;
    // if(a%2 == 0){
    //     cout << "even" ;
    // }
    // else{
    //     cout << "odd";
    // }
//     for(int i = 10; i >= 1; i--){
//         cout << i << "\n" ;
//     }
    

// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// leetode problem no.268

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int k = 0, l = 0, p = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != l) {
//                 k = i;
//                 p++;
//                 break;
//             }
//             l++;
//         }

//         if (p == 1) {
//             return k;
//         }

//         int g = nums.size();
//         if (nums[k] != nums.size()) {
//             return nums.size();
//         }

//         return 0;
//     }
// };

// int main() {
//     int n;
//     cin >> n;                 // size

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];       // elements
//     }

//     Solution s;
//     cout << s.missingNumber(nums);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////


// using sort function for array 

// #include <iostream>
// #include <algorithm>
// #include <limits>
// #include <iterator>

// using namespace std;

// int main(){
//     int arr[] = {1,6,4,5,2,3,0};
//     int size = std::size(arr);
//     sort(arr , size + arr);
//     cout << "smallest " << arr[0];
//     cout << "\nbiggest " << arr[std::size(arr)-1];
    
    // for(int i = 0; i < std::size(arr); i++){
        // cout << arr[i] << " ";
    // }
    

    // return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// leetcode question 66

// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// vector<int> plusOne(vector<int>& digits) {
//     vector<int> arr;
//     long long power = pow(10, digits.size() - 1), sum = 0, digit = 0;

//     // array to integer
//     for (int i = 0; i < digits.size(); i++) {
//         sum = (digits[i] * power) + sum;
//         power = power / 10;
//     }

//     long long last_d = sum + 1;
//     long long o_last = last_d;

//     // count digits
//     while (last_d != 0) {
//         digit++;
//         last_d = last_d / 10;
//     }

//     // reverse number
//     long long k = 0, new_d;
//     for (int y = 0; y < digit; y++) {
//         new_d = o_last % 10;
//         k = (k * 10) + new_d;
//         o_last = o_last / 10;
//     }

//     // push digits into vector
//     long long s = 0;
//     for (int h = 0; h < digit; h++) {
//         s = k % 10;
//         arr.push_back(s);
//         k = k / 10;
//     }

//     return arr;
// }

// int main() {
//     int n;
//     cout << "Enter number of digits: ";
//     cin >> n;

//     vector<int> digits(n);
//     cout << "Enter digits: ";
//     for (int i = 0; i < n; i++) {
//         cin >> digits[i];
//     }

//     vector<int> result = plusOne(digits);

//     cout << "Result: ";
//     for (int x : result) {
//         cout << x << " ";
//     }

//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// starting with functions 

// #include <iostream>
// using namespace std;

// void name(){
//         cout << "Sucessfully completed";
//     }

// int main(){
//     name();
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// using with argument and with return function

// #include <iostream>
// using namespace std;

// int calculatebill(int bill){
//     if(bill <= 100){
//         bill *= 5;
//     }
//     else if(bill > 100 && bill <= 200){
//         bill *= 7;
//     }
//     else{
//         bill *= 10;
//     }

//     return bill;
// }

// int main(){
//     int units;
//     cin >> units;

//     int totalbill = calculatebill(units);
//     cout << totalbill;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// my first bubble sort

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> bubblesort(vector<int>sortbubble){

//     for(int i = 0; i < sortbubble.size(); i++){ 

//         for(int j = 0 ; j < sortbubble.size()-i-1; j++){

//             if(sortbubble[j] > sortbubble[j+1]){
//                 int t = sortbubble[j]; 
//                 sortbubble[j] = sortbubble[j+1];
//                 sortbubble[j+1] = t;
//             }
//         }
//     }
//     return sortbubble;
// }
// int main(){
//     vector<int>arr = {1,4,6,3,5,2};

//     vector<int>sorted = bubblesort(arr);

//     for(int i = 0; i < sorted.size();i++){
//         cout << sorted[i] << " ";
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////


// creating a bubble sort function 
// converting vector code to array code

// #include <iostream>
// #include <vector>
// using namespace std;

// void bubblesort(int sort[],int n){
//     // int n = sort.size();
//     for(int i = 1; i <= n; i++){
//         for(int k = 1; k <= n - 1 - i; k++){
//             if(sort[k] > sort[k + 1]){
//                 int firstnumber = sort[k];
//                 sort[k] = sort[k+1];
//                 sort[k+1] = firstnumber;
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {1,4,3,6,2,5};
//     int size = 6;

//     bubblesort(arr,size);

//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////


// lets code selection sort

// #include <iostream>
// #include <vector>
// using namespace std;

// void sort(int arr[], int n){
//     // int min = arr[0];
//     for(int i = 0; i < n; i++){
//         for(int k = i+1; k <= n; k++ ){
//             if(arr[i] > arr[k]){
//                 int temp = arr[i];
//                 arr[i] = arr[k];
//                 arr[k] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int arr[] = {1,4,3,6,3,3,5};
//     int size = 6;

//     sort(arr,size);

//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// insertion sort in a function

// #include <iostream> 
// #include <vector>
// using namespace std;


// void sort(int arr[], int n){
//     for(int i = 1; i < n ; i++){
//         int temp = arr[i];
//         int j = i - 1; 

//         while(j >= 0 && temp < arr[j]){
//             arr[j+1] = arr[j];
//             j--;
//         }


//         arr[j+1] = temp;
//     }
// }

// int main(){
//     int arr[] = {2,4,5,1,3};
//     int size = 5;

//     sort(arr,size);

//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// using insertion sort

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[] = {5,4,2,3,1};
//     int n = 5;

//     for(int i = 1; i < n ; i++){
//         int temp = arr[i]; //5
//         int j = i-1; //1
//         while(arr[j] > temp && j >= 0 ){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
    
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// lets create a class and object

// #include <iostream>
// #include <string>
// using namespace std;

// class print{
//     private:
//     string name;
//     int classroom;

//     public:
//     void getinput(){
//         cout << "Enter your name here \n";
//         cin >> name ;

//         cout << "Enter your classroom here \n";
//         cin >> classroom;
//     }

//     void print_command(){
//         cout << "Name is " << name << endl;
//         cout << "Classroom is " << classroom << endl;
//     }
// };
 
// int main(){
//     print classprint[3];

//     for(int i = 0; i < 3; i++){
//         classprint[i].getinput();
//         classprint[i].print_command();
//     }

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Creating a clock feature in my program that add two clock by using object as function

#include <iostream>
#include <vector>
using namespace std;

class clockk{
    private:
    int hour, min;
    
    public:
    void getdata(){
        cout << "Enter hours and then minutes" << endl;
        cin >> hour >> min;
        
    }
    void printout(){
        cout << "Total is " << hour << " hr " << min << " min";
    }
    void sum(clockk c1,clockk c2){
        hour = (c1.min + c2.min) /60;
        min = (c1.min + c2.min) % 60;
        hour = hour + (c1.hour + c2.hour) ;
    }
};
    

int main(){
    clockk c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3.sum(c1,c2);
    c3.printout();
}