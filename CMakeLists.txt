CMAKE_MINIMUM_REQUIRED(VERSION 3.16)
PROJECT(Demo VERSION "1.0.0")

OPTION(USE_BLACKLIST "Refuse to greet blacklisted names" ON)
MESSAGE(DEBUG "USE_BLACKLIST: ${USE_BLACKLIST}")

FIND_PACKAGE(SQLite3 REQUIRED)

ENABLE_TESTING()

MESSAGE(DEBUG "SQLite3_INCLUDE_DIRS: ${SQLite3_INCLUDE_DIRS}")
MESSAGE(DEBUG "SQLite3_LIBRARIES: ${SQLite3_LIBRARIES}")
MESSAGE(DEBUG "SQLite3_VERSION: ${SQLite3_VERSION}")
MESSAGE(DEBUG "SQLite3_FOUND: ${SQLite3_FOUND}")

CONFIGURE_FILE(DemoConfig.h.in DemoConfig.h)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

SET(CMAKE_CXX_STANDARD 23)

IF ("${CMAKE_BUILD_TYPE}" STREQUAL "" OR "${CMAKE_BUILD_TYPE}" STREQUAL Debug)
  MESSAGE(DEBUG "Jessas!! da will schon wieder wer Debuggen")
  IF (${CMAKE_C_COMPILER_ID} STREQUAL GNU)
    STRING(APPEND CMAKE_C_FLAGS " -O0 -g3 -Wall -Werror")
  ENDIF()
  IF (${CMAKE_CXX_COMPILER_ID} STREQUAL GNU)
    STRING(APPEND CMAKE_CXX_FLAGS " -O0 -g3 -Wall -Werror")
  ENDIF()
ENDIF()

ADD_SUBDIRECTORY(blacklist)
ADD_SUBDIRECTORY(libhello)
ADD_SUBDIRECTORY(bin)
