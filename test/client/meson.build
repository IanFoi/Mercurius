test_src = []
test_src += files('client/test_client.c')

unity_proj = subproject('unity')
unity_dep = unity_proj.get_variable('unity_dep')


test_excecutable = executable('test_executable', test_src, dependencies: [unity_dep])
