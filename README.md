# MacOS Mouse Jiggler

Move your mouse every 60 seconds to prevent your Mac from sleeping.


## Pre-requisite

Install gcc by running the command: 
```shell
$ brew install gcc
```

Don't have brew? Run the command: 
```shell
$ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```


## Running the program

Run the commands below in your terminal.

```shell
$ git clone https://github.com/joiellantero/macos-mouse-jiggler-c.git
$ cd macos-mouse-jiggler-c
$ gcc -o mouse_jiggler mouse_jiggler.c -framework ApplicationServices
$ ./mouse_jiggler
```

To end the program, press `ctrl+c`.
