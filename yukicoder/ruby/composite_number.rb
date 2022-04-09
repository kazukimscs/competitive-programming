require 'prime'
n = gets.to_i

for i in n-100..n+100 do
  if i.prime? == false && i != 1
    puts i
    break
  end
end
