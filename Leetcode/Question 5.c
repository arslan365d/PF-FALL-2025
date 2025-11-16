//Problem Link : https://leetcode.com/problems/reverse-integer/
int reverse(int x) {
    long long num = x;
    long long rev = 0;

    int sign = num < 0 ? -1 : 1;
    num = llabs(num);

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    rev *= sign;

    if (rev < INT_MIN || rev > INT_MAX) return 0;

    return (int)rev;
}

