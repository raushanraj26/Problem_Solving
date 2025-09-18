#include <iostream>
using namespace std;

int main() {
    char str[] = "hello";
    int count = 0;

    // loop until '\0'
    while (str[count] != '\0') {
        count++;
    }

    cout << "Length = " << count;  // 5
    return 0;
}
