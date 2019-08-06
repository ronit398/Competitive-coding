'''


Given a string Str containing only lowercase characters. The task is to print the characters of the given string in order of their increasing frequency.  If two characters have the same frequencies, then the character which is lexicographically smaller will be printed first.

Note: For duplicate characters print the characters only once in order of their increasing frequencies. For example, if the string contains 'a' 3 times and 'b' 4 times then the output will be "ab" instead of "aaabbbb".

Input: The first line of input contains a single integer T which denotes the number of test cases. The only line of each test case contains a string Str.

Output: For each test case, print the characters of the given string in order of their increasing frequency. If two characters have the same frequencies, then the character which is lexicographically smaller will be printed first.

Constraints:
1 <= T <= 100
1 <= length(Str) <= 105

Example:
Input:
2
ggffeeiimno
geeksforgeeks
Output:
mnoefgi
forgkse

'''
for _ in range(int(input())):
    str = input()
    lst = [0] * 26
    for k in str:
        lst[ord(k) - ord('a')] += 1
    ans = ""
    for i in range(len(lst)):
        if lst[i] == 0:
            lst[i] = 99999
    for i in range(len(str)):
        Min = min(lst)
        for i in range(len(lst)):
            if lst[i] == Min and Min != 99999:
                ans += chr(i + 97)
                lst[i] = 99999
                break
    print(ans)
