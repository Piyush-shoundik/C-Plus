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

#include <iostream>
int main(){
    int sub1,sub2,sub3,per;
    std::cout << "Enter the numbers";
    std::cin >> sub1 >> sub2 >> sub3;
    
    per = (sub1+sub2+sub3) / 3;

    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && per >= 40){
        std::cout << "You are passed";
    }
    else{
        std::cout << "You are fail";
    }
return(0);
}

