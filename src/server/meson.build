server_sources = files(
'server.c'
)
executable('irc_server', server_sources)
test_executable = executable('test_server','../../test/server/test_server.c')

test('unit_test', test_executable)