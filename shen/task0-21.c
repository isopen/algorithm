/*

  Та же задача, но разрешается использовать из арифметических
  операций лишь сложение и вычитание, причем общее число действий
  должно быть порядка n.

  Решение 0-1:

		#include <stdio.h>

		int main(){

			int k=0,s=0,n=10;

			printf("%d ",s);

			while(k!=n){

				k++;
				s+=k+k-1;
				printf("%d ",s);

			}

			return 0;

		}

  Решение 0-2:

		#include <stdio.h>

		int main(){

			int k=0,s=0,n=10;

			printf("%d ",s);

			while(k!=n){

				s+=k;
				k++;
				s+=k;
				printf("%d ",s);

			}

			return 0;

		}

*/

// Тест 0-2:

#include <stdio.h>

int main(){

	int k=0,s=0,n=10;

	printf("%d ",s);

	while(k!=n){

		s+=k;
		k++;
		s+=k;
		printf("%d ",s);

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
