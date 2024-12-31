/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:26:23 by codebind          #+#    #+#             */
/*   Updated: 2024/12/31 14:26:51 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (s1[i] != '\0' || s2[i] != '\0')
        {
                if (s1[i] != s2[i])
                {
                        return (s1[i] - s2[i]);
                }
                i++;

        }
        return 0;
}
