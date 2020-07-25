import subprocess

# Start by intiailizing a git repository.
subprocess.call(['git', 'init'])
subprocess.call(['git', 'add', '-A'])
subprocess.call(['git', 'commit', '-m', 'Initial commit'])

# If test should be added, clone and add Google Test.
if '{{ cookiecutter.tests }}' == 'y':
    source = 'https://github.com/google/googletest.git'
    branch = 'release-1.8.0'
    destination = 'extern/googletest'
    command = f'git submodule add --branch={branch} {source} {destination}'
    subprocess.call(command.split(' '))

