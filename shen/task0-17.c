/*

  1) Даны два натуральных числа a и b, не равные нулю одновременно.
  Вычислить НОД(a,b) и НОК(a,b).

  2) (Э. Дейкстра) Доказать, что после исполнения алгоритма значение u
  равно удвоенному наименьшему общему кратному чисел a, b: u = 2 * НОК(a,b).

  Решение. Заметим, что величина a*u+b*v не меняется в ходе выполнения
  алгоритма. Остается воспользоваться тем, что вначале она равна 2*a*b
  и что НОД(a,b) * НОК(a,b) = a*b.

*/

// Тест 0-1:

#include <stdio.h>

int main(){

	int a=70,b=105,u=b,v=a;

	while (a && b)
		if (a>=b){

			a-=b;
			v+=u;

		}
		else {

			b-=a;
			u+=v;

		}

	if (a==0) {

		a=b;
		u=v; //u=2*НОК(a,b)


	}

	printf("%d ",a);
	printf("\n%d",u/2);

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
