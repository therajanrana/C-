// Write a function to print simple interest

#include <iostream>
using namespace std;

int SimpleInterest(int P, int R, int T){
    int PrintSimpleInterest = (P*R*T)/100;
    return PrintSimpleInterest;
}
int main (){

    int SimpleInteresstAnswer = SimpleInterest(432000,10,6);
    cout << SimpleInteresstAnswer << endl;

    return 0;
}