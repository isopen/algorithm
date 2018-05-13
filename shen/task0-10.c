/*

  Та же задача, если требуется, чтобы число операций было про-
  порционально log n. (Переменные должны быть целочисленными.)

*/

// Тест 0-1:

#include <stdio.h>

int main()
{

	int a[]={1,1,1,0},
	    b[]={1,1,1,0},
	    c[]={1,1,1,0},
	    d[]={1,1,1,0},
	    i=10;

	while(i)

		if(i%2==0){

			i/=2;

			c[0]=a[0]*a[0]+a[1]*a[2];
			c[1]=a[0]*a[1]+a[1]*a[3];
			c[2]=a[2]*a[0]+a[3]*a[2];
			c[3]=a[2]*a[1]+a[3]*a[3];

			a[0]=c[0];
			a[1]=c[1];
			a[2]=c[2];
			a[3]=c[3];

		}else{

			d[0]=b[0]*c[0]+b[1]*c[2];
			d[1]=b[0]*c[1]+b[1]*c[3];
			d[2]=b[2]*c[0]+b[3]*c[2];
			d[3]=b[2]*c[1]+b[3]*c[3];

			b[0]=d[0];
			b[1]=d[1];
			b[2]=d[2];
			b[3]=d[3];

			i--;

		}

	printf("%d ",d[3]);

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
