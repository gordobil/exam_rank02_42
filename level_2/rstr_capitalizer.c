/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:14:07 by ngordobi          #+#    #+#             */
/*   Updated: 2024/04/15 12:30:46 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rstr_capitalizer(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i + 1] == ' ' || str[i + 1] == '	' || str[i + 1] == '\0' ||
			str[i + 1] == '\n') && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		rstr_capitalizer(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}