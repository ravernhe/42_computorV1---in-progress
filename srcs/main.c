/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravernhe <ravernhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:25:22 by ravernhe          #+#    #+#             */
/*   Updated: 2020/03/09 12:30:37 by ravernhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/computerv1.h"

int   ft_isoperand(char c)
{
  return (c == '+' || c == '-' || c == '*' || c == '^' ||\
    c == ' ' || c == 'X' || c == '=' || ft_isdigit(c));
}

int   char_in_equation(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (!(ft_isoperand(str[i])))
      return (0);
    i++;
  }
  return (1);
}

char  *verify_argument(char *str)
{
  if (!(char_in_equation(str)))
  {
    ft_putstr("Wrong char in equation\n");
    exit (0);
  }
  //add test
  return (str);
}

int main(int ac, char **av)
{
  char *str;

  if (ac != 2)
    return (0);
  str = verify_argument(av[1]);
  compute_equation(av[1]);
}
