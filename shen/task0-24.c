/*

  Проверить, является ли заданное натуральное число n > 1 простым.

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int n=2,l=2,f=n;

	while (n != 1)
		if (!(n % l)){

			n/=l;

			if(l!=f){

				f=0;
				printf("%s ","составное число");
				break;

			}

		}else l++;

	if(f!=0) printf("%s ","простое число");

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
