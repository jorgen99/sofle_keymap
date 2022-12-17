## QMK Keymap for a sofle v1 keyboard
The base layer is basically a Swedish ISO layout.

https://docs.qmk.fm/#/

https://config.qmk.fm/#/sofle/rev1/LAYOUT

### Mac and Windows.
The master branch contains the keymap for Mac, the 'win' branch
contains the same keymap for Windows. On Swedish ISO keybords
the difference between Mac and Windows keybord layouts are basically
curly braces, vertical bar and backslash. Also, Alt and Cmd.

I flash the Mac version to the left controller and the Windows version
to the right controller and plug the usb-cable in to the different
controller based on the os I'm currently using.

Since the controller normally is on the left keyboard you need to
put the following line into config.h to make it work in the windows
version.

```
define MASTER_RIGH
```

### install qmk
```
brew install qmk/qmk/qmk
```

I have the 'jorgen99' folder in this repo soft linked into
my qmk dir at `keyboards/sofle/keymaps`


### setup
```
qmk setup
```

### compile

```
qmk compile -kb sofle -km jorgen99
```

### QMK Configurator json from keymap.c
You can import the json into the QMK Configurator and play around
with it. Also print a nice diagram if you need a cheet sheet
for the keymap.
```
qmk c2json -kb sofle -km jorgen99 -o jorgens_sofle/jorgen99_sofle.json jorgens_sofle/jorgen99/keymap.c
```

## Layout
These images are a bit out of date. For a completely accurate
layout check `jorgen/keymap.c`

![Layer0](layer_0.png)
![Layer1](layer_1.png)
![Layer2](layer_2.png)
![Layer3](layer_3.png)
![Layer4](layer_4.png)
![Layer5](layer_5.png)
