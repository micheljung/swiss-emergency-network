#!/usr/bin/env bash

fqbn="Heltec-esp32:esp32:wifi_lora_32_V2"
sourceDir=./src

function compile() {
  sketch=$1

  arduino-cli \
    compile \
    --log-level info \
    --fqbn "$fqbn" \
    --build-path /work/build/tmp \
    --build-cache-path /work/build/cache \
    --export-binaries \
    --output-dir /work/build/bin \
    $sketch
}

for sketch in `ls $sourceDir`; do
  echo "Compiling $sourceDir/$sketch..."
  compile "$sourceDir/$sketch"
done
