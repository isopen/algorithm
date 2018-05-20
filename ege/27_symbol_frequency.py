#/usr/bin/python3
#-*-coding:utf-8-*-

# pascal style
import string
# alphabet = dict.fromkeys((chr(i + 97) for i in range(0, 26)), 0)
alphabet = dict.fromkeys(string.ascii_lowercase, 0)
result = ''
while 1:
  letter = input()
  if not letter in string.ascii_lowercase: break
  alphabet[letter] += 1
c_max = 1
while c_max:
  c_max = 0
  j = ''
  for i in string.ascii_lowercase:
    if c_max < alphabet[i]:
      c_max = alphabet[i]
      j = i
  alphabet[j] = 0
  result += j
print(result)

# python style
# h = {}
# dat = ''
# while True:
#   dat = input()
#   if dat == '.': break
#   if dat in h: h[dat] += 1
#   else: h[dat] = 1
# res = ''
# for i in sorted(h.items(), key = lambda item: (-item[1], item[0])):
#   res += i[0]
# print(res)

# Написать программу сортировки строки содержащей символы
# латинского алфавита по частоте появления и алфавиту
# Например:
# 1.
# aaabbbbbcca
# результат
# bac
# 2.
# cccbbbbaaaacdddddd
# результат
# dabc
