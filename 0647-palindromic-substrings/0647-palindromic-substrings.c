int countSubstrings(char *s)
{
    int count = 0;

    // Find length
    int n = 0;
    while (s[n] != '\0')
        n++;

    for (int i = 0; i < n; i++)
    {
        // Odd-length palindromes
        int left = i;
        int right = i;

        while (left >= 0 && right < n && s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
        // Even-length palindromes
        left = i;
        right = i + 1;

        while (left >= 0 && right < n && s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
    }
    return count;
}