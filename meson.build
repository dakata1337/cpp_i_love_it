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
  './src/news.cpp',
  './src/show.cpp',
  './src/sports.cpp',
  './src/children.cpp',
  './src/education.cpp',
  './src/education_history.cpp',
  './src/educational_science.cpp',
  './src/entertainment.cpp',
]

deps = [
]

executable(
  meson.project_name(),
  src,
  include_directories: [inc],
  dependencies: deps
)
