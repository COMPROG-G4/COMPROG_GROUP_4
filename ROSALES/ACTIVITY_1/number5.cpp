#include <iostream>
using namespace std;

int main() {
    int arr[15];
    int sum = 0;

   
    for(int i = 0; i < 15; i++) {
        arr[i] = i + 1;
    }

    // Find the sum of all elements
    for(int i = 0; i < 15; i++) {
        sum += arr[i];
    }

    cout << "The sum of all elements is: " << sum << endl;

    return 0;
}