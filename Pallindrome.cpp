#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num){
    int original = num;
    int reversed = 0;

    while(num > 0){
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num /= 10;
    }

    return (reversed == original);
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}

// TC: O(log10(n)) - proportional to number of digits
// SC: O(1)