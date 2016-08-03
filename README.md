# PSW_3072

Tango Server for PowerSupply PSW_30-72 Instek.

Configuration should be done via properties:

 - Socket - Socket Tango device name in format "domain/family/member"

Then you should set polling to the MeasureUpdate command. (1000 means that all connected clients would read attributes once per second).


### Installation

You need installed Tango.

```sh
$ git clone [git-repo-url]
$ cd ./PSW_30-72-dir
$ make
```