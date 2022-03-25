n = gets.to_i
stock_biscuits = 1
frequency = 0

while stock_biscuits < n do
  stock_biscuits *= 2
  frequency += 1
end

puts frequency
