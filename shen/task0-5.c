/*

  Даны натуральные числа а, b. Вычислить произведение a · b,
  используя в программе лишь операции +, -, =, <>.

  Решение 0-1:

	#include <stdio.h>

	int main()
	{

		int a=2,b=3,k=0,c=0;

		while(k!=b){k++;c+=a;} // while(k!=b){c+=a;k++;}

		return 0;

	}

  Решение 0-1-0:

	#include <stdio.h>

	int main()
	{

		int a=2,b=3,k=0,c=0;

		for(;k!=b;k++) c+=a;

		return 0;

	}

  Решение 0-2:

	#include <stdio.h>

	int main()
	{

		int a=2,b=4,c=0;

		while(b){c+=a;b--;} // while(b){b--;c+=a;}

		return 0;

	}

  Решение 0-2-0:

	#include <stdio.h>

	int main()
	{

		int a=2,b=4,c=0;

		for(;b;b--) c+=a;

		return 0;

	}

  Решение 0-2-1:

	#include <stdio.h>

	int main()
	{

		int a=2,b=4,c=0;

		while(b--) c+=a; // for(;b--;) c+=a;

	}

*/

// Тест 0-2-1:

#include <stdio.h>

int main()
{

	int a=2,b=4,c=0;

	while(b--) c+=a;

	printf("a*b=%d",c);

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

