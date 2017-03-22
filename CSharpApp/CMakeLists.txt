############################################################################
# Centro de Investigaciones Tecnicas de Gipuzkoa (CEIT)                    #
# Paseo de Manuel Lardizabal, N. 15                                        #
# 20018, Donostia - San Sebastian                                          #
# SPAIN                                                                    #
#                                                                          #
# Copyright (c) 2015 by CEIT.                                              #
# All rights reserved.                                                     #
# CEIT provides this product without warranty of any kind and shall        #
# not be liable for any damages caused by the use of this product.         #
############################################################################

cmake_minimum_required(VERSION 3.8.0)

project(CSharpCMake LANGUAGES CSharp)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_subdirectory(CSharpApp)
