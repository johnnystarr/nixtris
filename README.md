NIXTRIS
=======

An ANSI C clone of the infamous Tetris Game.  A minimalistic port of a great 
game to your favorite Unix Shell.  

##Purpose
A personal challenge to bring Alexey Pajitnov's Tetris to every system possible.

##Medium
ASCII Text art, much like Alexey's [original]: http://en.wikipedia.org/wiki/Tetris#/media/File:Tetris-VeryFirstVersion.png
This may potentially involve custom ASCII support for non POSIX systems.

##Goal
By using ANSI C, the goal is to port Tetris to every OS and every shell out
there.  (Maybe even Windows CMD Prompt!)

##Philosopy
When I said minimalistic, I mean it.  Part of the challenge is to squeeze every
bit (and I do mean bit) possible.  This calls for almost all game logic to be
bitwise operations.  For portability, tables use hexadecimal notation.
