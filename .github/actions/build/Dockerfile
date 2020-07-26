FROM fedora:29

RUN dnf install -y openssl-devel c-ares c-ares-devel yaml-cpp yaml-cpp-devel libevent libevent-devel make cmake gcc-c++ rapidxml-devel curl-devel cppunit-devel lcov protobuf protobuf-devel librdkafka librdkafka-devel rpm-build readline-devel zlib-devel

ENTRYPOINT ["/bin/bash" ,"-c", "sh NetCHASM/script.sh", "build"]