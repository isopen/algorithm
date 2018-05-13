/*

  Даны две целые переменные a, b. Составить фрагмент программы,
  после исполнения которого значения переменных поменялись бы местами
  (новое значение a равно старому значению b и наоборот).

  Решение 0-1:

	t=a;
	a=b;
	b=t;

*/

// Тест 0-1:

#include <stdio.h>

int main()
{

	int a=3,b=4,t=0;

	t=a;
	a=b;
	b=t;

	printf("a=%d,b=%d",a,b);

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
