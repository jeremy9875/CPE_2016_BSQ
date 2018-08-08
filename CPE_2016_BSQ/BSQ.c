/*
** BSQ.c for BSQ in /home/jeremy.elkaim/CPE_2016_BSQ
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Dec  8 14:24:12 2016 jeremy elkaim
** Last update Thu Dec 15 10:49:06 2016 jeremy elkaim
*/
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 0 && nb <= 9)
    {
      my_putchar('0' + nb);
    }
  else
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  return (0);
}

void	writesquare(char *av)
{
  int	i;
  int	u;

  i = 0;
  u = 0;
  while (av[i] != '\0')
    {
      if (av[i] == '\n')
	{
	  u = u + 1;
	}
      if (av[i] == '.')
	{
	  av[i] = 'x';
	}
      my_putchar(av[i]);
      i = i + 1;
    }
  u = u - 1;
  my_putnbr(u);
}

void	chartest(char *av)
{
  int	nbp;
  int	nbo;

  nbp = 0;
  nbo = 0;
  while (av[nbp] != '\n' && av[nbp] != 'o')
    {
      nbp = nbp + 1;
    }
  my_putnbr(nbp);
  while (av[nbo] != '\n' && av[nbo] != '.')
    {
      nbo = nbo + 1;
    }
  my_putnbr(nbo);
}

int	main(int ac, char **av)
{
  int	fd;
  char	buffer[2999999]; //

  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    {
      my_putstr("Error opening file\n");
      return (-1);
    }
  read(fd, buffer, 2999998);  //
  //  chartest(buffer);
  writesquare(buffer);
  close(fd);
  return (0);
}
