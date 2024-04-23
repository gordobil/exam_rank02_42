/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:42:26 by ngordobi          #+#    #+#             */
/*   Updated: 2024/04/15 12:07:37 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int	i;

	if (!str)
	{
		write (1, "\n", 1);
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 13;
			if (str[i] > 'Z')
				str[i] = (str[i] - 'Z') + 'A' - 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'r')
		{
			str[i] += 13;
			if (str[i] > 'z')
				str[i] = (str[i] - 'z') + 'a' - 1;
		}
		else if (str[i] >= 's' && str[i] <= 'z')
			str[i] = str[i] - 'z' + 'a' + 12;
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	rot_13(argv[1]);
	return (0);
}
