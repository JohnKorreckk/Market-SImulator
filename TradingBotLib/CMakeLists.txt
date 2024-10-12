cmake_minimum_required(VERSION 3.29)
project(TradingBotLib)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES
        TradingBotLib.h
        OrderBook.h
        OrderBook.cpp
        pch.h
        Stock.cpp
        Stock.h
        BlackScholes.cpp
        BlackScholes.h
        TradingEngine.cpp
        TradingEngine.h
        Asset.cpp
        Asset.h)

set(wxBUILD_PRECOMP OFF)
find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)

include(${wxWidgets_USE_FILE})

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)