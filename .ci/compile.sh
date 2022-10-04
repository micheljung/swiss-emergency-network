#!/usr/bin/env bash

sketch=$1
fqbn=$2

function compile() {
  local sketch=$1
  local fqbn=$2
  local sketchName=$(basename $sketch)
  local targetDir=/work/build/${sketchName}

  arduino-cli \
    compile \
    --log-level info \
    --fqbn "$fqbn" \
    --build-path /work/build/tmp \
    --build-cache-path /work/build/cache \
    --export-binaries \
    --output-dir "${targetDir}" \
    "$sketch"
}

echo "Compiling $sketch for $fqbn..."
compile "$sketch" "$fqbn"
