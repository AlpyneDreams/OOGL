
gl_dep = dependency('gl')
deps = [gl_dep, oogl_dep]

if os_name == 'linux'
    deps += [ dependency('x11'), dependency('xrandr') ]
endif

bin_dir = join_paths(meson.project_source_root(), 'bin')

executable('Triangle', 'Triangle/main.cpp', dependencies: deps, install: true, install_dir: bin_dir)

executable('StencilReflection', 'StencilReflection/main.cpp', dependencies: deps, install: true, install_dir: bin_dir)
install_data(
    'StencilReflection/tank.obj',
    'StencilReflection/platform.obj',
    'StencilReflection/tank.jpg',
    'StencilReflection/platform.png',
    install_dir: bin_dir
)

executable('ShadowMapping', 'ShadowMapping/main.cpp', dependencies: deps, install: true, install_dir: bin_dir)
install_data(
    'ShadowMapping/scene.obj',
    'ShadowMapping/scene.png',
    install_dir: bin_dir
)

executable('TransformFeedback', 'TransformFeedback/main.cpp', dependencies: deps, install: true, install_dir: bin_dir)
