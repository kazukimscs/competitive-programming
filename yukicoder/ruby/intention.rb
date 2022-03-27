w = gets.to_i
d = gets.to_i

(d - 1).times do
  intension = (w / d ** 2).floor
  w -= intension
  d -= 1
end

puts w