class Solution:
    def longestPalindrome(self, s: str) -> str:
        t = '#'.join('^{}$'.format(s))
        n = len(t)
        p = [0] * n
        c = r = 0
        for i in range(1, n - 1):
            if i < r:
                p[i] = min(r - i, p[2 * c - i])
            while t[i + 1 + p[i]] == t[i - 1 - p[i]]:
                p[i] += 1
            if i + p[i] > r:
                c, r = i, i + p[i]
        i = p.index(max(p))
        return s[(i - p[i]) // 2 : (i + p[i]) // 2]
