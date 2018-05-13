#!/usr/bin/ruby
#coding:utf-8

# 6, 95, 17, 10, 102, 957, 95, 9690
max_2 = max_5 = max_10 = max_seq = 0
gets.to_i.times do
  number = gets.to_i
  max_2 = number if number % 2 == 0 && number % 5 != 0 && number > max_2
  max_5 = number if number % 5 == 0 && number % 2 != 0 && number > max_5
  max_10 = number if number % 10 == 0 && number > max_10
  max_seq = number if max_seq < number
end
puts(gets.to_i == (max_2 * max_5 > max_10 * max_seq ? res = max_2 * max_5 : res = max_10 * max_seq) ?
  "Вычисленное контрольное значение: #{res}\nКонтроль пройден" : "Контроль не пройден")
