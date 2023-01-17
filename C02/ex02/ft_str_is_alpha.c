/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saelim <saelim@student.42.seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:09:19 by saelim            #+#    #+#             */
/*   Updated: 2022/08/25 16:29:34 by saelim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char	*str)
{
	while (*str)
	{
		if (*str < 'A' || ('Z' < *str && *str < 'a') || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
