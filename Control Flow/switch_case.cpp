// switch(expression){
//     case1:
//     code to be executed if expression is equal to case1
//     break;
//     case2:
//     code to be executed if expression in equal to case2
//     break;
//     additional case as needed
//     default case:
//     code to be xecuted if expression doesn't match any case

// }


#include <iostream>
using namespace std;

int main(){
    int day;
    cout <<"Enter a number (1-5):";
    cin >> day;
    switch(day){
        case 1:
        cout << "Monday" << endl;
        break;
        case 2:
        cout << "Tuesday" << endl;
        break;
        case 3:
        cout << "Wednesday" << endl;
        break;
        case 4:
        cout << "Thursday" << endl;
        break;
        case 5:
        cout << "Friday" << endl;
        break;
        default:
        cout << "Weekend" << endl;
        }
    return 0;
}