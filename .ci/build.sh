#!/usr/bin/env sh
docker build -t arduino-cli .
docker run \
  --rm \
  -v $(pwd):/work \
  -v $(pwd)/lib:/root/Arduino/libraries \
  --entrypoint bash \
  arduino-cli \
  /work/.ci/compile.sh $1
