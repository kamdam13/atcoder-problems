n,a,b = gets.chomp.split.map(&:to_i)
puts (b-a+1).even? ? "Borys" : "Alice"
