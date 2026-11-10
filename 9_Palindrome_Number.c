
/*
 * Problem: Palindrome Number
 * Description: Return true if the given integer reads the same
 * forwards and backwards; otherwise, return false.
 * Example: x = 121
 * Output: true
 */

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int temp = x;
    long long rev = 0;

    while (temp > 0)
    {
        int dig = temp % 10;
        rev = rev * 10 + dig;
        temp = temp / 10;
    }

    return x == rev;
}
