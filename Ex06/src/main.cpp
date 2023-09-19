#include "Prime.h"

int main()
{
    Prime num1, num2;
    num1.setValue(2);
    num1.getValue();
    num2 = num1.nextPrime(); 
    //num2.setValue(12);
    num2.getValue();// в num2 устанавливается 3
    bool result = num1.checkPrime(17); // true
    cout << result << endl;
    num2.setValue(17);              // в num2 устанавливаем 17
    cout << endl;
    num1.getValue();
    num2.getValue();
    int count = num2.countBetween(num1); // count=5
    cout << count << endl;
    bool ans = num2.isValid();        // true
    cout << ans << endl;
    num1.setValue(47);
    count = num2.countBetween(num1);
    cout << count << endl;
}