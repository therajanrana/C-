#include <iostream>

using namespace std;

int main(){
    int height;
    cout << "Enter your height in feet: " << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight in kg: " << endl;
    cin >> weight;

    if (height >= 5) {
        if (weight >= 70) {
            cout << "Good" << endl;
        } else {
            cout << "Not Good" << endl;
        }
    } else {
        cout << "Chutiye ho tum" << endl;
    }
    return 0;
}