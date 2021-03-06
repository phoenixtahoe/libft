#include "libft.h"

void    ft_lstdelone(t_lst **alst, void (*del)(void *, size_t))
{
    if (alst || del)
    {
        del((*alst)->content, (*alst)->content_size);
        ft_memdel((void **)alst);
    }
}
