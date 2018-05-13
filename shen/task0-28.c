/*

  Дано натуральное n. Подсчитать количество решений неравенства
  x^2 + y^2 < n в натуральных (неотрицательных целых) числах, не
  используя действий с вещественными числами.

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int k = 0, s = 0, n = 31, l, t;

	while(k * k <= n) {

		l = 0; t = 0;
		while((k * k + l * l) < n) {

			l++;
			t++;

		}

		k++;
		s += t;

	}

	printf("%d", s);

	return 0;

}

/*
 *
 * Copyright 2014-2018 isopen <mr_makss@mail.ru>
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
