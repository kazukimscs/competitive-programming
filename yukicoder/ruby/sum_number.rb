s = gets.delete("^0-9").chars.map { |number| number.to_i }
puts s.sum