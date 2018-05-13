/*

  Дано целове число a и натуральное(целое неотрицательное) число n.
  Вычислить a^n. Другими словами, необходимо составить программу,
  при исполнении которой значения переменных а и n не меняются, а
  значение некоторой другой переменной (например b) становится равным
  a^n. (При этом разрешается использовать и другие переменные.)

  Решение 0-1:

	#include <stdio.h>

	int main()
	{

		int a=5,n=3,b=1,i=0;

		while(i!=n){

			b*=a;
			i++;

		}

		return 0;

	}

  Решение 0-1-0:

	#include <stdio.h>

	int main()
	{

		int a=5,n=3,b=1,i;

		for(i=0;i!=n;i++) b*=a;

		return 0;

	}

	#include <stdio.h>

  Решение 0-2:

	#include <stdio.h>

	int main()
	{

		int a=5,n=3,b=1,i=n;

		while(i){

			b*=a;
			i--;

		}

		return 0;

	}

  Решение 0-2-0:

	#include <stdio.h>

	int main()
	{

		int a=5,n=3,b=1,i=n;

		for(;i;i--) b*=a;

		return 0;

	}

  Решение 0-2-1 {идея:Евгений,e-mail:jtulen@yandex.ru}:

	#include <stdio.h>

	int main()
	{

		int a=5,n=3,b=1,i=n;

		while(i--) b*=a; // for(;i--;) b*=a;

		return 0;

	}

*/

// Тест 0-2-1:

#include <stdio.h>

int main()
{

	int a=5,n=3,b=1,i=n;

	while(i--) b*=a;

	printf("a^n=%d",b);

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
