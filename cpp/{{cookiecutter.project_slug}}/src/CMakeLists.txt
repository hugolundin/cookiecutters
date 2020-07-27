# Create a library. 
add_library(
    {{cookiecutter.project_slug}}
    STATIC
    {{cookiecutter.project_slug}}.hpp {{cookiecutter.project_slug}}.cpp
)

# Create a main executable for the project.
add_executable(
    main
    main.cpp
)

link_libraries(main PUBLIC {{cookiecutter.project_slug}})

target_include_directories(
    {{cookiecutter.project_slug}}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)