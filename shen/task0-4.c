/*

  Решить предыдущую задачу, если требуется, чтобы число дей-
  ствий (выполняемых операторов присваивания) было порядка log n
  (то есть не превосходило бы C log n для некоторой константы C;
  log n — это степень, в которую нужно возвести 2, чтобы получить n).

  Решение 0-1:

	#include <stdio.h>

	int main()
	{

		int a=2,n=5,b=1,c=a,i=n;

		while(i) if(i%2==0){i/=2;c*=c;}else{b*=c;i--;}

		return 0;

	}

*/

// Тест 0-1:

#include <stdio.h>

int main()
{

	int a=2,n=5,b=1,c=a,i=n;

	while(i) if(i%2==0){i/=2;c*=c;}else{b*=c;i--;}

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
