# Embedded Memory Game
> Authors: [Sabaipon Phimmala](https://github.com/bphimmala), [Emily Hix](https://github.com/emilyhix)

A fast-paced memory game inspired by the electronic game Simon. The game begins by lighting up a single LED for a short amount of time. The player must then press the button corresponding to this LED. With each following round, another light is added to the sequence. The player must watch and press the buttons in the correct sequence. The game ends when the player fails to copy the pattern by pressing an incorrect button.

We utilized GPIO, SPI, and FTM. GPIO was used for the LEDs (output) and buttons (input). SPI was used to send strings to a 16x2 LCD screen, which displayed game messages and the player’s score. FTM was utilized to seed our program so that the light sequences were pseudorandom.
