/*

  Даны два натуральных числа a и b, не равные нулю одновре-
  менно. Вычислить НОД(a, b) — наибольший общий делитель а и b.

  Решение 0-1:

	#include <stdio.h>

	int main(){

		int a = 70, b = 105, k;

		if(a > b) k = a;
		else k = b;

		while (a % k || b % k) k--;

		printf("%d ", k);

		return 0;

	}

  Решение 0-2:

	#include <stdio.h>

	int main(){

		int a = 70, b = 105, k;

		while (a && b)
			if (a >= b) a -= b;
			else b -= a;

		if (a == 0) k = b;
		else k = a;

		printf("%d ", k);

		return 0;

	}

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int a = 70, b = 105, k;

	if(a > b) k = a;
	else k = b;

	while (a % k || b % k) k--;

	printf("%d ", k);

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
