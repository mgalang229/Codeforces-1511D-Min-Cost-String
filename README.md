Link: https://codeforces.com/problemset/problem/1511/D
## Analysis
```
cost of string s:
- no. of index pairs i & j (1 <= i < j < |s|)
- such that s[i] = s[j] and s[i+1] = s[j+1]

goal:
- find a string with min possible cost (reduce no. of pairs)
- its length must be n and contains only the first k characters of the Latin alphabet
- if there are multiple answers, print any of them

-------------------------

9 4

ans: aabacadbb

-------------------------

5 1

1 2 3 4 5
a a a a a

(1, 2) (1, 3) (1, 4)
(2, 3) (2, 4)
(3, 4)
cost = 6

ans: aaaaa

-------------------------

10 26

ans: codeforces

-------------------------

14 4

1 2 3 4 5 6 7 8 9 10 11 12 13 14
a a b a d c d b c  a  c  c  b  d

a a b a c a d b b  c  b  d  c  c

cost = 0

ans: aabacadbbcbdcc

-------------------------

[avoid]
aa aa
ab ab
bf bf
ch ch
...

repeating same adjacent letters should be at most 2 only

different pairs as much as possible
```
