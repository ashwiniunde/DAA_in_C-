#include <iostream>
using namespace std;

// Helper function to count the number of trailing zeroes in the factorial of a given number
int countTrailingZeroes(int num) {
    int count = 0;
    while (num > 0) {
        num /= 5;
        count += num;
    }
    return count;
}

// Function to find the smallest number whose factorial has at least n trailing zeroes
int findNum(int n) {
    if (n == 0) return 1; // Edge case for n = 0

    int low = 0, high = n * 5; // Upper bound estimate for search
    while (low < high) {
        int mid = (low + high) / 2;
        if (countTrailingZeroes(mid) >= n) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int n = 1;
    cout << findNum(n) << endl;
    return 0;
}
