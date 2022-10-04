# How to build

## Linux

### MamaDuck

```shell
./ci/build.sh src/MamaDuck "Heltec-esp32:esp32:wifi_lora_32_V2"
```


### PapaDuck

```shell
./ci/build.sh src/PapaDuck "Heltec-esp32:esp32:wifi_lora_32_V2"
```

# How to upload

1. Download the arduino-cli for your system
2. Execute (Linux example):
   ```shell
   ./arduino-cli upload src/MamaDuck --input-dir build/bin/MamaDuck --fqbn "Heltec-esp32:esp32:wifi_lora_32_V2" --port /dev/ttyACM2
   ```
   Windows example:
   ```shell
   .\arduino-cli.exe upload src\MamaDuck --input-dir build\bin\MamaDuck --fqbn "Heltec-esp32:esp32:wifi_lora_32_V2" --port COM3
   ```