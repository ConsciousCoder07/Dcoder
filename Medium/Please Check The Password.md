# Problem Description
```
Ethan has a possible list of password to hack a secure account. To select the correct password, he researched the owner and discovered that the account's owner is very fond of acronyms. After eliminating the rest of the patterns, Ethan is now sure that the password and its reverse, both, are present in the list. You need to find the password among that list and print its length along with its middlemost character.
NOTE: All strings in the list are of odd length.

Input:
First line contains N, the number of elements in the list.
The next N lines each contain a single word.

Output:
Print the length of the password and its middlemost character separated by a string.

Constraints:
1 ≤ N ≤ 50
1 ≤ string.length ≤ 20

Sample Input:
4
xyz
dco
der
zyx

Sample Output:
3 y
```
# Python
```py
passwordList = []

for _ in range(int(input())):
    passwordList.append(input())
    
for i in passwordList:
    if i[::-1] in passwordList:
        password = i
        break

length = len(password)
print(length, password[length//2])
```
