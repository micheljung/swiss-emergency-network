#!/usr/bin/env bash

fqbn="Heltec-esp32:esp32:wifi_lora_32_V2"

sketch=$1

function compile() {

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

echo "Compiling $sketch..."
compile "$sketch"
