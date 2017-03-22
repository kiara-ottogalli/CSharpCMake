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

set(PROGRAM_NAME CSharpCMake)

set(SOURCE_FILES
	src/Program.cs
	)

add_executable(${PROGRAM_NAME} ${SOURCE_FILES})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(${PROGRAM_NAME})
