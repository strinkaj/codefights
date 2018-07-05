/*Given an integer n, return the largest number that contains exactly n digits.

Example

For n = 2, the output should be
largestNumber(n) = 99.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

Guaranteed constraints:
1 ≤ n ≤ 9.

[output] integer

The largest integer of length n.*/

int largestNumber(int n) {

    int digits=9;
    for(int i = 1; i < n; i++)
    {
        digits = digits * 10;
        digits += 9;
    }
    return digits;
}
