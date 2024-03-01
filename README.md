# dojiticu

**STATUS: INCOMPLETE**

This is an experiment to determine the time taken to serve a set of files by a web server running on an ESP8266 microprocessor. The variables of the experiment are:

1. File size.
2. File count.
3. Storage type (SRAM vs flash memory).
3. Underlying framework (Arduino vs RTOS)


## Setup

The following applies to each folder under the project root; each of these is its own project and needs to be initialized separately.


### PlatformIO

Assuming you've already installed [PlatformIO](https://docs.platformio.org/en/latest/core/index.html#piocore), activate the venv, and initialize the project with the board:

```
$ source .platformio/penv/bin/activate
$ cd arduino-sram
$ pio project init --board nodemcuv2
```

### Build and upload

Three environment variables need to be set when building the project:

- `DJTC_PORT` - The serial port at which your board is docked. On Linux systems this will be something like `/dev/ttyUSB0`
- `WIFI_SSD` - The name of your wifi gateway.
- `WIFI_PASSWORD` - Your wifi password

```
$ DJTC_PORT=<the serial port> WIFI_SSD=<ssd> WIFI_PASSWORD=<wifi password> pio run --target upload
```