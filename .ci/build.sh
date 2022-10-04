#!/usr/bin/env sh

sketch=$1
fqbn=$2

docker build -t arduino-cli .
docker run \
  --rm \
  -v $(pwd):/work \
  -v $(pwd)/lib:/root/Arduino/libraries \
  --entrypoint bash \
  arduino-cli \
  /work/.ci/compile.sh "$sketch" "$fqbn"
