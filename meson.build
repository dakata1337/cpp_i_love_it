project('kursova2', 'cpp',
  default_options: [
    'warning_level=3',
    'werror=true',
    # 'b_sanitize=address,undefined',
 ]
)

inc = include_directories('include')
src = [
  './src/main.cpp',
  './src/music.cpp',
  './src/classical.cpp',
  './src/pop.cpp',
  './src/folk.cpp',
  './src/rock.cpp',
  './src/softrock.cpp',
  './src/hardrock.cpp',
]

deps = [
]

executable(
  meson.project_name(),
  src,
  include_directories: [inc],
  dependencies: deps
)
