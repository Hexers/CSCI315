#include <iostream>

using namespace std;

void swap(int *a, int *b, int *c);
int main() {
    int val1 = 10;
    int val2 = 20;
    int val3 = 30;
    swap(&val1, &val2, &val3);
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    cout << "val3: " << val3 << endl;
    return 0;
}
void swap(int *a, int *b, int *c)
{
/*
    int temp = *b;
    *a = *c;
    *b = temp;
    int temp2 = *b;
    *b = *a;
    *c = temp2;
    int temp3 = *c;
    *a = *b;
    *c = temp3;
*/

    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}
