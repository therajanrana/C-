#include <iostream>
using namespace std;

int main(){

    //variable declration 
    // int budget;
    // cout <<"Enter your budet:" <<endl;

    // takeing input from th user
    // cin >> budget;

    // if statement
    // if(budget > 2000000){
    //     cout <<"You can buy a thar" <<endl;

    // }
    
    // if-else statement

    // int age;
    // cout <<"Enter your age:" << endl;
    // cin >> age;
    // if(age >=18){
    //     cout <<"You are eligible for vote" <<endl;
    // }
    // else{
    //     cout <<"You are not eligible for vote" <<endl;
    // }

    // if-else-if statement

    // int marks = 86;
    // if(marks >= 90){
    //     cout << "A grade" <<endl;

    // }
    // else if (marks >= 80){
    //     cout << "B grade" << endl;

    // }
    // else if (marks >= 70){
    //     cout <<"C grade" << endl;
    // }
    // else if (marks >= 60){
    //     cout <<"D grade" << endl;
    // }
    // else{
    //     cout <<"F grade" << endl;
    // }

    // if else if else block

    int marks = 42;
    if(marks >= 90){
        cout << "A grade" <<endl;

    }
    else if (marks >= 80){
        cout << "B grade" << endl;

    }
    else if (marks >= 70){
        cout <<"C grade" << endl;
    }
    else if (marks >= 60){
        cout <<"D grade" << endl;
    }
    else if (marks >= 50){
        cout <<"F grade" << endl;
    }
    else{
        cout <<"You failed" << endl;
    }
    return 0;
}