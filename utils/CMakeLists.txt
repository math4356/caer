# Set full RPATH, utils are binaries
SET(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR})

ADD_SUBDIRECTORY(caerctl)
ADD_SUBDIRECTORY(tcpststat)
ADD_SUBDIRECTORY(udpststat)
ADD_SUBDIRECTORY(unixststat)
