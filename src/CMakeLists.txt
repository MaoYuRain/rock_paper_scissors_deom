set(SOURCES
        game.cpp
        player.cpp
        storage.cpp
)

add_library(game_lib ${SOURCES})

add_executable(RockPaperScissors main.cpp)
target_link_libraries(RockPaperScissors PRIVATE game_lib)
