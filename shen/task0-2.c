/*

  Решить предыдущую задачу, не используя дополнительных переменных
  (и предполагая, что значениями целых переменных могут быть
  произвольные целые числа).

  Решение 0-1:

	a=a+b;
	b=a-b;
	a=a-b;

*/

// Тест 0-1:

#include <stdio.h>

int main()
{

	int a=3,b=4;

	a=a+b;
	b=a-b;
	a=a-b;

	printf("a=%d,b=%d",a,b);

	return 0;

}


/*
 *
 * Copyright 2014 isopen <mr_makss@mail.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */
