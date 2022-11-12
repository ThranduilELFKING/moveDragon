unset(source_files)

#set(CMAKE_CXX_FLAGS "-fpermissive")


set(srcdirs
	./tools/
	./
  )
  

foreach(srcdir ${srcdirs})
  include_directories(${srcdir})
  aux_source_directory(${srcdir} source_files)
endforeach()

LINK_DIRECTORIES(
	$ENV{HOME}/nut/lib
	${CMAKE_CURRENT_SOURCE_DIR} 
	/usr/lib
)

###新版本
ADD_EXECUTABLE(movedragon ${source_files})
target_link_libraries(movedragon ncurses)



