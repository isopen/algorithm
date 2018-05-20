#!/usr/bin/ruby
#coding:utf-8

alphabet = {}
loop do
  unless ("a".."z").to_a.include?(letter = gets.chomp)
    break
  end
  alphabet[letter] = alphabet[letter].to_i + 1
end
puts alphabet.sort.sort_by{ |key, value| -value }.to_h.keys.join
