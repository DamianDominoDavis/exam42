char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = -1;
	if (dst && src)
	{
		while (src[++i])
			dst[i] = src[i];
		dst[i] = 0;
	}
	return dst;
}
