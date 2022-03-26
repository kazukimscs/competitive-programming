=begin
1:x
2:1
3:7
4:4
5:2,3,5
6:0,6,9
7:8
=end

n = gets.to_i

if n % 2 == 0
  puts "1" * (n / 2)
else
  puts "7" + "1" * ((n - 3) / 2)
end
