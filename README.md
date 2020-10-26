# Backlight-C

## Installation
Download the program with `git clone https://github.com/vidarandrebo/backlight-c.git`

Change dir `cd backlight-c`

In `src/backlight.c`:

- Change the UPPER value to the value specified in `/sys/class/backlight/**/max-brightness`.

- Change the path in `fopen` to the correct path.

Complile the file `gcc -O3 src/backlight.c -o src/backlight`

Move the file to `$PATH` - `cp src/backlight /usr/bin/backlight`

Change the backlight with `sudo ./backlight +/- <number>`
