f0, f1, n = gets.split.map(&:to_i)

f2 = f0 ^ f1
fn = [f0, f1, f2]

puts fn[n % 3]
