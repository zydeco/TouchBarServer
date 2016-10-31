# TouchBarServer

An awful hack to use the Touch Bar over VNC, inspired by [this tweet](https://twitter.com/KhaosT/status/791800707800117248)

## Requirements

* macOS 10.12.1 16B2657 or later
* a capable VNC client (i.e. not the one that comes with macOS)

## Usage

* Launch the TouchBarServer app
* Set a port and password (if desired) and click Serve
* Connect to your mac's address and the port you set with a VNC client

I haven't tested it too much, but it seems to miss clicks sometimes, especially if you connect to
it from the same computer.
