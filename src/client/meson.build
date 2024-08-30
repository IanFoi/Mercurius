client_sources = files(
'client.c'
)
executable('irc_client', client_sources)

test_executable = executable('test_client', '../../test/client/test_client.c')

test('unit_test', test_executable)
