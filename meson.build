project('MyP IRC chat', 'c',
    version: '0.0.0')

add_project_arguments('-std=c11', language: 'c')

unity_dep = subproject('unity').get_variable('unity_dep')


src_dir = 'src'
test_dir = 'test'

executable('client', 'src/client/main.c')
executable('server', 'src/server/main.c')

subdir('src/server')
subdir('src/client')
subdir('test')