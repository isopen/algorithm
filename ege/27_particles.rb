#!/usr/bin/ruby
#coding:utf-8

# Вы можете записать решение в одну строку
# Вы можете записать решение на любом языке
# Обратите внимание на print

lower_limiter = 1000000001 #10**9 + 1
k = j = c = 0;
(1..gets.to_i).each { |i|
  (speed = gets.to_i) % 2 != 0 ? (c += 1; ((lower_limiter = speed; k = i) if speed < lower_limiter)) : (j = i if speed == 0)
}.each { |i| print(i, ' ') if i != j && ((c % 2 == 0) || (i != k)) }

# python style
#number_speeds = gets.to_i
#(1..number_speeds).each do |i|
#  speed = gets.to_i
#  if speed % 2 != 0
#    c += 1
#    if speed < lower_limiter
#      lower_limiter = speed
#      k = i
#    end
#  elsif speed == 0
#    j = i
#  end
#end
#(1..number_speeds).each do |i|
#  if (i != j) && ((c % 2 == 0) || (i != k))
#    print(i, sec = ' ')
#  end
#end
