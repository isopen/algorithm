/*

  Разрешим применять команды printf("%d",i) лишь при i =0,1,2,...,9.
  Составить программу, печатающую десятичную запись заданного
  натурального числа n > 0. (Случай n = 0 явился бы некоторым
  исключением, так как обычно нули в начале числа не печатаются,
  а для n = 0 — печатаются.)


*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int b=1,n=200;

	while (10*b<=n) b*=10;

	while (b != 1){

		printf("%d*%d+",n/b,b);
		n%=b;
		b/=10;

	}

	printf("%d*%d",n,b);

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
