FROM fedora
RUN dnf install -y openssl-devel c-ares c-ares-devel yaml-cpp yaml-cpp-devel libevent libevent-devel make cmake gcc-c++ rapidxml-devel curl-devel cppunit-devel lcov protobuf protobuf-devel man-db git readline-devel
COPY . /NetCHASM
WORKDIR /NetCHASM
RUN git clone --single-branch --branch gcc8_error_supress https://github.com/raghavendra-nataraj/mdbm.git
WORKDIR mdbm
RUN make install
WORKDIR /NetCHASM
RUN make install
WORKDIR /
RUN rm -rf NetCHASM
