project(
    'great-jam-23', 'cpp',
    version: '0.0.0',
    meson_version: '=0.60.1',
    default_options: [
        'cpp_std=c++14',
        'werror=true',
        'warning_level=3',
        'default_library=static'
    ]
)

add_project_arguments(
    '-Wimplicit-fallthrough',
    '-Wno-unused-argument',
    '-Wno-unused-parameter',
    language: 'cpp'
)

run_command(
    'curl', '--create-dirs',
    '-o', 'include/miniaudio.h',
    'https://raw.githubusercontent.com/mackron/miniaudio/master/miniaudio.h',
    check: true
)

executable(
    'main',
    sources: [
        'src/main.cpp'
    ],
    dependencies: [
        subproject('glad').get_variable('glad_dep'),
        dependency('glfw3')
    ]
)