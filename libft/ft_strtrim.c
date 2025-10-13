static int to_set(const char c, const char *set)
{
    size_t j;

    j = 0;
        while (set[j])
        {
            if (c == set[j])
                return (1);
            j++;
        }
    
    return (0)
}

static int  ft_count_set_front(const char *s1, const char *set)
{
    size_t i;
    int res;

    i = 0;
    res = 0;
    while (s1[i] && to_set(s1[i], set))
    {
        res++;
        i++;
    }
    return (res)
}

static int  ft_count_set_back(const char *s1, const char *set, size_t len)
{
    size_t i;
    int res;

    i = len - 1;
    res = 0;
    if (len == 0)
        return (0);
    while (s1[i] && to_set(s1[i], set))
    {
        res++;
        i--;
    }
    return (res)
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  i;
    size_t  j;
    size_t  len;
    size_t  setlen;
    char    *str;
    
    setlen = ft_count_set_front(s1, set) + ft_count_set_back(s1, set, ft_strlen(s1))
    if (setlen >= ft_strlen(s1))
        return NULL
    len = (ft_strlen(s1) - len);
    ft_calloc(len, sizeof(char))
    i = 0;
    j = 0;
    while (str[i])
    {
        if (to_set(s1[j], set))
            j++;
        else
        {
            str[i] = s1[j] 
            i++;
            j++;
        }
    }
    return (str)
}

