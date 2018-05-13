/*

  Последовательность Фибоначчи определяется так: a_0 = 0, a_1 = 1,
  a_k = a_(k-1) + a_(k-2) при k>=2. Дано n, вычислить a_n.


  Решение 0-1:

	#include <stdio.h>

	int main()
	{

		int a=1,r,n=6,b=0;

		while(n--){r=a+b;a=b;b=r;}

		printf("f=%d",b);

		return 0;

	}

*/

// Тест 0-1:

#include <stdio.h>

int main()
{

	int a=1,r,n=5,b=0;

	while(n--){r=a+b;a=b;b=r;}

	printf("f=%d",b);

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
