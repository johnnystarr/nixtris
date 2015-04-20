NIXTRIS
=======

An ANSI C clone of the infamous Tetris Game.  A minimalistic port of a great 
game to your favorite Unix Shell.  

##Purpose
My personal challenge to bring Alexey Pajitnov's Tetris to every system possible.

##Medium
Text Anyone?  Text based games is a dead art-form.  Take a look at Alexey's original: 
![Original Tetris](http://upload.wikimedia.org/wikipedia/en/7/7c/Tetris-VeryFirstVersion.png)
<br>
Like Alexey's original, we will be using Text as the medium.  This includes but is not limited to ASCII.

##Goal
By using ANSI C, the goal is to port Tetris to every OS and every shell out
there; even DOS CMD!

##Philosophy
When I said minimalistic, I mean it.  Part of the challenge is to squeeze every
bit (and I do mean bit) possible.  This calls for almost all game logic to be
bitwise operations.  For portability, tables use hexadecimal notation.  So,
instead of relying on C structs, we will leverage bit shifting wherever
possible.
