/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chutemp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:41:04 by chutemp           #+#    #+#             */
/*   Updated: 2024/02/23 13:41:31 by chutemp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_check_input(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[4096 + 1];

	if (ft_check_input(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write (2, "Cannot read file.\n", 18);
		return (1);
	}
	ret = read(fd, buf, 4096);
	if (ret > 0)
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	if (close(fd) == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}
