/*

  Решить предыдущую задачу, используя в алгоритме Евклида
  деление с остатком.

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int a=70,b=105,k,p=1,q=0,r=0,s=1;

	while (a && b)
		if (a>=b){

			a%=b;
			p-=r;
			q-=s;

		}
		else {

			b%=a;
			r-=p;
			s-=q;

		}

	if (a==0) {

		k=b;
		p=r;
		q=s;

	}
	else k=a;

	printf("%d ",k);
	printf("\n%d %d",p,q);

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
