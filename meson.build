project('MyP IRC chat', 'c',
    version: '0.0.0',
    meson_version:'>=1.0.1')

add_project_arguments('-std=c11', language: 'c')
src_dir = 'src'
test_dir = 'test'

executable('demo', 'src/client/main.c', 'src/server/main.c')

subdir('src/server')
subdir('src/client')
subdir('test')