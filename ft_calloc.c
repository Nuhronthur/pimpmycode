void    *calloc(size_t l, size_t s)
{
    unsigned char *t;

    if (!l || !s)
    {
        l = 1;
        s = 1;
    }
    t = malloc(l * s)
    if (t == NULL)
        return (NULL);
    ft_bzero(t, l * s);
    return ((void *)buffer);
}