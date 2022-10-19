char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t    i;
    size_t    j;

    i = 0;
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (haystack[i + j] == needle[j] && i + j < len)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
        }
        i++;
    }
    return (0);
}