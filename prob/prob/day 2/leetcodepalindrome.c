bool isPalindrome(int x) {
    long long reversed;
    int original;
    int digit;

    reversed = 0;
    original = x;
    while (x > 0)
    {
        digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }
    return (original == reversed);

}