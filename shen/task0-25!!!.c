/*

  (Для знакомых с основами алгебры) Дано целое гауссово число
  n + mi (принадлежащее Z[i]).
  (a) Проверить, является ли оно простым (в Z[i]);
  (б) Напечатать его разложение на простые (в Z[i]) множители.

  Решение(а) 0-1:

		#include <stdio.h>

		int main(){

			int a=15,b=22,n,f,l=2;

			if(a == 0){

				n=(b-3)/4;

				if(b == (4*n+3)) printf("%s ","простое");
				else{

					n=(b+3)/(-4);

					if(b == (-4*n-3)) printf("%s ","простое");
					else printf("%s ","не является простым");

				}

			}else{

				if(b==0){

					n=(a-3)/4;

					if(a == (4*n+3)) printf("%s ","простое");
					else{

						n=(a+3)/(-4);

						if(a == (-4*n-3)) printf("%s ","простое");
						else printf("%s ","не является простым");

					}

				}else{

					n=a*a+b*b;
					f=n;

					if((a != 0) && (b !=0 )){

						while(n != 1)
							if(!(n % l)){

								n/=l;

								if(l != f){

									f=0;
									printf("%s","не является простым");
									break;

								}

							}else l++;

					}

				}

		}

		if(f!=0) printf("%s","простое");

		return 0;

	}

	Решение(б) 0-1:

		#include <stdio.h>

		int main(){

			int a=9,b=12,n,l=2;

			n=a*a+b*b;

			while(n != 1)
				if(!(n % l)){

					n/=l;

					printf("\n%d ",l);

				}else l++;

			return 0;

		}

*/

// Тест(б) 0-1:

#include <stdio.h>

int main(){

	int a=9,b=12,n,l=2;

	n=a*a+b*b;

	while(n != 1)
		if(!(n % l)){

			n/=l;

			printf("\n%d ",l);

		}else l++;

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
