n = gets.to_i
a = gets.split.map(&:to_i)

counts = Hash.new(0)
a.each { |number| counts[number] += 1 }
i = counts.select { |k, v| v == 1 }.keys
p i.size
