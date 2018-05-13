/*

  Даны натуральные числа а и b. Вычислить их сумму а + b.
  Использовать операторы присваивания лишь вида:

	<переменная1> = <переменная2>,
	<переменная> = <число>,
	<переменная1> = <переменная2> + 1.

  Решение 0-1:

	#include <stdio.h>

	int main()
	{

		int a=2,b=4;

		while(b--) a++; // for(;b--;) a++;

		printf("a=%d",a);

		return 0;

	}

*/

// Тест 0-1:

#include <stdio.h>

int main()
{

	int a=2,b=4;

	while(b--) a++;

	printf("a=%d",a);

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
