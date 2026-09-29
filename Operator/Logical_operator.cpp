// && Logical AND
// agr koi ek cond false hai to wah false hai isme print hone ke liye saare cond true hone chahiye

// #include <iostream>
// using namespace std;

// int main(){

//     bool cond1 = true;
//     bool cond2 = true;
//     bool cond3 = true;
//     if (cond1 && cond2 && cond3)
//     {
//         cout <<"All condition are true" << endl;
//     }
//     else {
//     cout <<"All condition are not true" << endl;
//     }
//     return 0;
// }


//  Logical OR 
//  at least one condition should be true  

// #include <iostream>
// using namespace std;

// int main(){

//     bool cond1 = true;
//     bool cond2 = true;
//     bool cond3 = false;
//     if (cond1 || cond2 || cond3)
//     {
//         cout <<"At least one condition is true" << endl;
//     }
//     else {
//     cout <<"All condition are not false" << endl;
//     }
//     return 0;
// }

//  Logical NOT
//  yeh true wale condition ko false kar deta hai aur false wale conditon ko true kar deta hai


#include <iostream>
using namespace std;

int main(){

    bool condition = (4 <= 6);
    cout << !condition << endl;
    return 0;
}
