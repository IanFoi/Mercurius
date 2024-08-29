project('MyP IRC chat', 'c',
    version: '0.0.0',
    meson_version:'>=1.0.1')
add_project_arguments('-std=c12', language: 'c')
src_dir = 'src'
executable('demo', 'src/client/main.c', 'src/server/main.c')
subdir('src/server')
subdir('src/client')
subdir('test')