## QMK Keymap for a sofle v1 keyboard

https://docs.qmk.fm/#/

https://config.qmk.fm/#/sofle/rev1/LAYOUT

### install
```
brew install qmk/qmk/qmk
```

### setup
```
qmk setup
```

### compile

```
qmk compile -kb sofle -km jorgen99
```

### QMK Configurator json from keymap.c
```
qmk c2json -kb sofle -km jorgen99 -o jorgens_sofle/jorgen99_sofle.json jorgens_sofle/jorgen99/keymap.c
```

