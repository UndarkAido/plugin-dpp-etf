cmake_minimum_required(VERSION 3.6)
project(discordpp-plugin-dpp-etf)

set(CMAKE_CXX_STANDARD 17)

###################

list(PREPEND ALL_DISCORDPP_PLUGINS discordpp::PluginDppETF)
list(APPEND ALL_DISCORDPP_LIBRARIES ${PROJECT_NAME})
set(ALL_DISCORDPP_LIBRARIES ${ALL_DISCORDPP_LIBRARIES} PARENT_SCOPE)
set(ALL_DISCORDPP_PLUGINS ${ALL_DISCORDPP_PLUGINS} PARENT_SCOPE)

add_subdirectory(lib/dpp)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} lib/dpp/include)
target_link_libraries(${PROJECT_NAME} INTERFACE discordpp dpp)
