// George Strauch
// orginizes 3 numbers from least to greatest
// 03/01/2017

#include <iostream>
using namespace std;

int main() {

    int intNum1 = 0;
    int intNum2 = 0;
    int intNum3 = 0;

    cin >> intNum1;
    cin >> intNum2;
    cin >> intNum3;

    int intLargest = (intNum1 > intNum2) ? ((intNum1 > intNum3) ? intNum1 : intNum3) : ((intNum2 > intNum3) ? intNum2
                                                                                                            : intNum3);
    int intsmallest = (intNum1 < intNum2) ? ((intNum1 < intNum3) ? intNum1 : intNum3) : ((intNum2 < intNum3) ? intNum2
                                                                                                             : intNum3);

    cout << "those numbers from least to greatest are.." << endl;

    /*6 possibilities
     * num1 < num2 < num3
     * num1 < num3 < num2
     * num2 < num1 < num3
     * num2 < num3 < num2
     * num3 < num1 < num2
     * num3 < num2 < num1
     * */

    if (intNum1 < intLargest) {

        if (intNum1 > intsmallest) {

            cout << intsmallest << " " << intNum1 << " "<< intLargest;
        }

    }
    if (intNum2 < intLargest) {

        if (intNum2 > intsmallest) {

            cout << intsmallest << " " << intNum2 << " " << intLargest;
        }

    }
    if (intNum3 < intLargest) {

        if (intNum3 > intsmallest) {

            cout << intsmallest << " " << intNum3 << " " << intLargest;
        }

    }

    return 0;

}