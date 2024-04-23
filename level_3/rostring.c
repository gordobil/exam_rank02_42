/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:32:21 by ngordobi          #+#    #+#             */
/*   Updated: 2024/04/15 14:07:46 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*first_word(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*f;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		i++;
	j = i;
	while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
		i++;
	f = malloc((i - j + 1) * sizeof(char));
	if (!f)
		return (0);
	k = 0;
	while (j < i)
	{
		f[k] = str[j];
		k++;
		j++;
	}
	f[k] = '\0';
	return (f);
}

int	word_start(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		i++;
	return (i);
}

int	rest_start(char *str)
{
	int	i;

	i = 0;
	i = word_start(str, i);
	while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
		i++;
	i = word_start(str, i);
	return (i);
}

void	rostring(char *str)
{
	int		i;
	char	*first;

	if (!str)
		return ;
	first = first_word(str);
	i = rest_start(str);
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
		write (1, " ", 1);
		i = word_start(str, i);
	}
	i = 0;
	while (first[i] != '\0')
	{
		write (1, &first[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	rostring(argv[1]);
	write (1, "\n", 1);
	return (0);
}