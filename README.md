# Backlight-C

## Installation
Make sure `gcc` or another C-compiler is installed.

Download the program with `git clone https://github.com/vidarandrebo/backlight-c.git`

Change dir `cd backlight-c`

In `src/config.h`:

- Change the UPPER value to the value specified in `/sys/class/backlight/**/max_brightness`.

- Change the BACKLIGHT value to the correct path for your brightness file.

Complile the file `gcc -O3 src/backlight.c -o src/backlight`

Move the file to `$PATH` - `cp src/backlight /usr/bin/backlight`

## Run
Change the backlight with `sudo ./backlight +/- <number>`
