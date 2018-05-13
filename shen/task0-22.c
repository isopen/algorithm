/*

  Составить программу, печатающую разложение на простые
  множители заданного натурального числа n > 0 (другими словами, требу-
  ется печатать только простые числа и произведение напечатанных чисел
  должно быть равно n; если n = 1, печатать ничего не надо).

  Решение 0-1:

		#include <stdio.h>

		int main(){

			int n=4,l;

			while (n != 1){

				l=2;

				while (n % l) l++;

				printf("\n%d ",l);

				n/=l;

			}

			return 0;

		}

  Решение 0-2:

			#include <stdio.h>

			int main(){

				int n=10,l=2;

				while (n != 1)
					if (!(n % l)){

					n/=l;
					printf("\n%d",l);

				}else l+=1;

				return 0;

			}

*/

// Тест 0-2:

#include <stdio.h>

int main(){

	int n=10,l=2;

	while (n != 1)
		if (!(n % l)){

			n/=l;
			printf("\n%d",l);

		}else l+=1;

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
