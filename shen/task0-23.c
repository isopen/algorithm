/*

  Составить программу решения предыдущей задачи, использу-
  ющую тот факт, что составное число имеет делитель, не превосходящий
  квадратного корня из этого числа.

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int n=100000000,l=2;

	while (n != 1)
		if (!(n % l)){

			n/=l;
			printf("\n%d",l);

		}else
			if (l*l>n) l=n;
			else l++;

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
