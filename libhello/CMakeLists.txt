ADD_LIBRARY(hello

  greeter.h
  greeter-name.h
  greeter-name.cpp
  greeter-simple.h
  greeter-simple.cpp

  greeter-alias-db.h
  greeter-alias-db.cpp
)
TARGET_LINK_LIBRARIES(hello blacklist)
TARGET_LINK_LIBRARIES(hello SQLite::SQLite3)

SET_PROPERTY(TARGET hello PROPERTY VERSION "${PROJECT_VERSION}")
INSTALL(TARGETS hello DESTINATION lib)

TARGET_INCLUDE_DIRECTORIES(hello PUBLIC .)
