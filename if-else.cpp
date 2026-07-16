/*
A school has following rules for grading system:
- 1. Below 25 - F
- 2. 25 to 44 - E
-3. 45 to 49 - D
- 4. 50 to 59 - C
- 5. 60 to 79 - B
- 6. 80 to 100 - A
ask user to enter marks and print the corresponding grade.
*/
#include<bits/stdc++.h>
using namespace std;
 
int main ( ){

    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
 
    if(marks<25){
        cout<<"Your grade is F";
    }
    else if(marks>=25 && marks<=44){
        cout<<"Your grade is E";
    }
    else if(marks>=45 && marks<=49){
        cout<<"Your grade is D";
    }
    else if(marks>=50 && marks<=59){
        cout<<"Your grade is C";
    }
    else if(marks>=60 && marks<=79){
        cout<<"Your grade is B";
    }
    else if(marks>=80 && marks<=100){
        cout<<"Your grade is A";
    }
    else{
        cout<<"Invalid marks entered.";
    }
    
    return 0;


}