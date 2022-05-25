STDOUT.sync = true # DO NOT REMOVE
# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# light_x: the X position of the light of power
# light_y: the Y position of the light of power
# initial_tx: Thor's starting X position
# initial_ty: Thor's starting Y position
light_x, light_y, initial_tx, initial_ty = gets.split(" ").collect { |x| x.to_i }
thor_x = initial_tx
thor_y = initial_ty

# game loop
loop do
    remaining_turns = gets.to_i # The remaining amount of turns Thor can move. Do not remove this line.
    direction_x = ""
    direction_y = ""
    # Write an action using puts
    # To debug: STDERR.puts "Debug messages..."

    if thor_x > light_x && thor_y < light_y
        direction_y = "S"
        direction_x = "W"
        thor_x -= 1
        thor_y += 1
    elsif thor_x < light_x && thor_y < light_y
        direction_y = "S"
        direction_x = "E"
        thor_x += 1
        thor_y += 1
    elsif thor_x < light_x && thor_y > light_y
        direction_y = "N"
        direction_x = "E"
        thor_x += 1
        thor_y -= 1
    elsif thor_x > light_x && thor_y > light_y
        direction_y = "N"
        direction_x = "W"
        thor_x -= 1
        thor_y -= 1
    elsif thor_x > light_x && (thor_y == light_y)
        direction_x = "W"
        thor_x -= 1
    elsif thor_x < light_x && (thor_y == light_y)
        direction_x = "E"
        thor_x += 1
    elsif (thor_x == light_x) && thor_y > light_y
        direction_y = "N"
        thor_y -= 1
    elsif (thor_x == light_x) && thor_y < light_y
        direction_y = "S"
        thor_y += 1
    end

    # A single line providing the move to be made: N NE E SE S SW W or NW
    puts direction_y << direction_x
end
