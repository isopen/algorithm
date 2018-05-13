/*

  Дано натуральное (целое неотрицательное) число а и целое по-
  ложительное число d. Вычислить частное q и остаток r при
  делении а на d, не используя операций % и /.

  Решение 0-1:

	#include <stdio.h>

	int main()
	{

		int a=144,d=12,q=0;

		while(!(a<d)){a-=d;q++;}

		printf("r=%d,q=%d",a,d);

		return 0;

	}

  Решение 0-2:

	#include <stdio.h>

	int main()
	{

		int a=144,d=5,q=0;

		while(a>d-1){a-=d;q++;}

		printf("q=%d,r=%d",q,a);

		return 0;

	}

  Решение 0-3:

	#include <stdio.h>

	int main()
	{

		int a=144,d=145,q=0;

		while(a>=d){a-=d;q++;}

		printf("q=%d,r=%d",q,a);

		return 0;

	}

*/

// Тест 0-3:

#include <stdio.h>

int main()
{

	int a=144,d=145,q=0;

	while(a>=d){a-=d;q++;}

	printf("q=%d,r=%d",q,a);

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
