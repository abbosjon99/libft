/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:31:23 by akeldiya          #+#    #+#             */
/*   Updated: 2024/02/27 15:43:42 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isalnum(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
	{
		if (c <= '9' && c >= '0')
			return (1);
		return (0);
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%d", ft_isalnum(argv[1][0]));
        printf("%d", isalnum(-1));
    }
}*/