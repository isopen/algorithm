/*

  Написать вариант алгоритма Евклида, использующий соотношения

  НОД(2 * a, 2 * b) = 2 * НОД(a, b)
  НОД(2 * a, b) = НОД(a, b) при нечетном b,

  не включающий деления с остатком, а использующий лишь деление на 2 и
  проверку чётности. (Число действий должно быть порядка logk для исход-
  ных данных, не превосходящих k.)

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int a = 70, b = 105, d = 1;

	while (a && b)
		if ((a % 2 == 0) && (b % 2 == 0)) {
			d = d * 2;
			a /= 2;
			b /= 2;
		}else if ((a % 2 == 0) && (b % 2 == 1)) a /= 2;
			else if ((a % 2 == 1) && ( b % 2 == 0)) b /= 2;
				else if((a % 2 == 1) && (b % 2 == 1) && (a >= b)) a -= b;
					else if((a % 2 == 1) && (b % 2 == 1) && (a <= b)) b -= a;

	if(a == 0) printf("%d ", d * b);
	else printf("%d ", d * a);

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
