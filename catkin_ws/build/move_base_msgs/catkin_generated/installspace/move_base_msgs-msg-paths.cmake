# generated from genmsg/cmake/pkg-msg-paths.cmake.em

# message include dirs in installspace
_prepend_path("${move_base_msgs_DIR}/.." "msg" move_base_msgs_MSG_INCLUDE_DIRS UNIQUE)
set(move_base_msgs_MSG_DEPENDENCIES actionlib_msgs;std_msgs;geometry_msgs)
