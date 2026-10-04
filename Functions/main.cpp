// #include <iostream>
// using namespace std;

// // Function 
// void PrintMyName(){

//     cout << "Rajan" << endl;
// }

// int main(){
    
//     // Calling function
//     PrintMyName();
//     return 0;
// }


#include <iostream>
using namespace std;

int Multiplication(int a, int b, int c){
   int result = a*b*c;
    cout << result << endl;
    return result;
}

void PrintRepeat(){
    for(int i=1; i<=10 ; i++){
    cout << "Rajan" << endl;
    }
}

void PrintAtoZ(){
    for(char i= 'A'; i<='Z' ; i++){
        cout << i << endl;
    }
}

void PrintMultiples(int num){
    for(int i=1 ; i<=10 ; i++){
        cout << num*i << endl;
    }
}

int main(){

    int Ans=Multiplication(2,3,4);
    cout << Ans << endl;
    // PrintRepeat();
    // PrintAtoZ();
    // int num=5;
    // PrintMultiples(num);
    return 0;
} 