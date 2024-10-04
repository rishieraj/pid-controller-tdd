# Create a library called "pidLib"
add_library (pidLib
  # list of cpp source files:
  src.cpp
  )

# Indicate what directories should be added to the include file search
# path when using this library.
target_include_directories(pidLib PUBLIC
  # list of directories:
  .
  )