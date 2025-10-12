static int  ft_count_set(const char *s1, const char *set)
{
    size_t i;
    size_t j;
    int res;

    i = 0;
    j = 0;
    res = 0;
    while (s1[i])
    {
        while (set[j])
        {
            if (s1[i] == set[j])
                res++;
            j++;
        }
        j = 0
        i++;
    }
    return (res)
}

static int to_trim(const char c, const char *set)
{
    size_t i;
    size_t j;

    j = 0;
        while (set[j])
        {
            if (c == set[j])
                return (1);
            j++ 
        }
    
    return (0)
}
char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  i
    size_t  j;
    char    *str;
    
    len = ft_strlen(s1) - ft_count_set(s1, set);

    str = malloc(len * size_of(char) + 1)
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i])
    {
        if (to_trim(s1[j], set))
            j++;
        else
        {
            str[i] = s1[j] 
            i++
            j++
        }
    }
    return (str)
}

