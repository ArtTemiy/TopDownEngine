add_executable(gtests
        maps/tests_pathfinding.cpp
        maps/tests_map_loading.cpp
        tests_empty.cpp)

target_link_libraries(gtests
        top_down_engine
        gtest
        gtest_main)

add_executable(display_test
        view_and_moving/display.cpp)

target_link_libraries(display_test
        top_down_engine
        ${SFML_LIB})