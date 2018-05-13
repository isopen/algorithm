/*

  Даны натуральные числа n и k, n > 1. Напечатать k десятичных
  знаков числа 1/n. (При наличии двух десятичных разложений выбирается
  то из них, которое не содержит девятки в периоде.) Программа должна
  использовать только целые переменные.

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int l=0,r=1,k=3,n=2;

	while(l!=k){

		printf("%d",(10*r)/n);
		r=(10*r)%n;
		l++;

	}

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
