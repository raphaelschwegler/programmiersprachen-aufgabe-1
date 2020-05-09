#include <iostream>


int calcDivisible(int num) {
    long long factorial = 1;
    for (int counter = 1; counter <= num; counter++) {
        factorial *= counter;
    }
    long long result = num;
    long long finalResult = factorial;
    while (result < factorial) {
        for (int i = 1; i <= num; i++) {
            if (result % i == 0) {
                if (i == num) {
                    return result;
                }
            }
            else {
                break;
            }
        }
        result += num;
    }
    return finalResult;

}
//Aufgabe 1.6 Beispiele 
void example();

class Greater;

class Greater {
    int b;
    int d;
};

int main()
{
    std::cout << "Hello, World!\n";
    std::cout << calcDivisible(20);
    //Aufgabe 1.6 Beispiele 
    int a = 1;
    int b;
    int* c;

    return 0;
}
//Aufgabe 1.6 Beispiele 
int example(int a) {
    return a - 1;
}
