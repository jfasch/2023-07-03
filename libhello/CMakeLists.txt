ADD_LIBRARY(hello

  greeter.h
  greeter-name.h
  greeter-name.cpp
  greeter-simple.h
  greeter-simple.cpp
)
SET_PROPERTY(TARGET hello PROPERTY VERSION "${PROJECT_VERSION}")
INSTALL(TARGETS hello DESTINATION lib)

TARGET_INCLUDE_DIRECTORIES(hello PUBLIC .)
