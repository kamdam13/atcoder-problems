s = gets.chars
k = gets.to_i
count = 0
s.each do |i|
  count += 1
  if i == "1"
    if count == k
      puts 1
      break
    end
  else  
    puts i
    break
  end 
end 