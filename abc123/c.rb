n = gets.to_i
a = gets.to_i
b = gets.to_i
c = gets.to_i
d = gets.to_i
e = gets.to_i

array = [a,b,c,d,e].sort
min = 5

puts array[0] == 1 ? n -1 + min : n/array[0] + min