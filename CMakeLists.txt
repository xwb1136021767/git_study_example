cmake_minimum_required(VERSION 3.15)
project(c__primer_study)

set(CMAKE_CXX_STANDARD 14)

add_executable(c__primer_study main.cpp Fraction.cpp Quote.cpp Quote.h TextQuery.h TextQuery.cpp QueryResult.h)