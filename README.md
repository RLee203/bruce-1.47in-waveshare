# Waveshare 1.47in Dongle Custom Firmwares

This repository is firmware-only for the **Waveshare ESP32-S3 LCD 1.47in dongle**.

## What this repo contains
- Prebuilt firmware binaries for this device only
- GitHub Releases for versioned firmware downloads

## Firmware files
Current firmware assets are in [`firmware/`](./firmware/).

## Flashing (esptool)
Use the command below and replace the serial port for your system:

```bash
esptool.py --port COMx write_flash 0x00000 firmware/Bruce-waveshare-esp32-s3-lcd-147.bin
```

## Notes
- This repo is intended for distributing multiple custom firmware variants for this single device.
