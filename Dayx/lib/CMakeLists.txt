set(the_target "liangxq")

set(HEAD_FILES "liangxq.h")
aux_source_directory(. SRC_LIST)

add_library(${the_target} STATIC ${SRC_LIST} ${HEAD_FILES})

