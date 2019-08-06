'''
Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only first such pair.
Also, solve the problem in linear time complexity, i.e., O(n).
Input:
The first line contains T, the number of test cases. The following T lines consist of a number each, for which we'll find two prime numbers.
Note: The number would always be an even number.

Output:
For every test case print two prime numbers space separated, such that the smaller number appears first. Answer for each test case must be in a new line.

Constraints:
1< T < 70
1 < N < 10000


input
5
74
1024
66
8
9990

Output:
3 71
3 1021
5 61
3 5
17 9973
'''
for _ in range(int(input())):
    n = 10000
    prime = [True for i in range(n + 1)]
    p = 2
    dic = {}
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    for p in range(2, n):
        if prime[p]:
            dic.update({p: True})
    N = int(input())
    for j in range(3, N + 1):
        if j in dic and N - j in dic:
            print (j, N - j)
            break

