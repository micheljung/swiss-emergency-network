FROM debian:bullseye-slim as builder

ARG GIT_TAG

ENV ARDUINO_VERSION="0.27.1"
ENV GIT_TAG=${GIT_TAG}

RUN apt-get -y -qq update && \
  apt-get -y -qq --no-install-recommends --allow-change-held-packages install \
    ca-certificates \
    curl \
    python3 \
    python-is-python3 \
    pip \
    && apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

RUN pip install pyserial

RUN curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh -s ${ARDUINO_VERSION}
RUN arduino-cli core update-index \
    --additional-urls https://resource.heltec.cn/download/package_heltec_esp32_index.json \
    --log-level warn \
    --verbose
RUN arduino-cli core install \
    --additional-urls https://resource.heltec.cn/download/package_heltec_esp32_index.json Heltec-esp32:esp32@0.0.6 \
    --log-level warn \
    --verbose

WORKDIR /work

ENTRYPOINT ["arduino-cli"]
