project('OOGL', 'cpp', 'c')

sources = files(
    'src/GL/GL/Context.cpp',
    'src/GL/GL/Extensions.cpp',
    'src/GL/GL/Framebuffer.cpp',
    'src/GL/GL/Program.cpp',
    'src/GL/GL/Renderbuffer.cpp',
    'src/GL/GL/Shader.cpp',
    'src/GL/GL/Texture.cpp',
    'src/GL/GL/VertexArray.cpp',
    'src/GL/GL/VertexBuffer.cpp',

    'src/GL/Math/Mat3.cpp',
    'src/GL/Math/Mat4.cpp',
    'src/GL/Math/Vec2.cpp',
    'src/GL/Math/Vec3.cpp',
    'src/GL/Math/Vec4.cpp',

    'src/GL/Util/Image.cpp',
    'src/GL/Util/Mesh.cpp',

    'src/GL/Window/Window.cpp',

    # libjpeg
    'src/GL/Util/libjpeg/jaricom.c',
    'src/GL/Util/libjpeg/jcapimin.c',
    'src/GL/Util/libjpeg/jcapistd.c',
    'src/GL/Util/libjpeg/jcarith.c',
    'src/GL/Util/libjpeg/jccoefct.c',
    'src/GL/Util/libjpeg/jccolor.c',
    'src/GL/Util/libjpeg/jcdctmgr.c',
    'src/GL/Util/libjpeg/jchuff.c',
    'src/GL/Util/libjpeg/jcinit.c',
    'src/GL/Util/libjpeg/jcmainct.c',
    'src/GL/Util/libjpeg/jcmarker.c',
    'src/GL/Util/libjpeg/jcmaster.c',
    'src/GL/Util/libjpeg/jcomapi.c',
    'src/GL/Util/libjpeg/jcparam.c',
    'src/GL/Util/libjpeg/jcprepct.c',
    'src/GL/Util/libjpeg/jcsample.c',
    'src/GL/Util/libjpeg/jctrans.c',
    'src/GL/Util/libjpeg/jdapimin.c',
    'src/GL/Util/libjpeg/jdapistd.c',
    'src/GL/Util/libjpeg/jdarith.c',
    'src/GL/Util/libjpeg/jdatadst.c',
    'src/GL/Util/libjpeg/jdatasrc.c',
    'src/GL/Util/libjpeg/jdcoefct.c',
    'src/GL/Util/libjpeg/jdcolor.c',
    'src/GL/Util/libjpeg/jddctmgr.c',
    'src/GL/Util/libjpeg/jdhuff.c',
    'src/GL/Util/libjpeg/jdinput.c',
    'src/GL/Util/libjpeg/jdmainct.c',
    'src/GL/Util/libjpeg/jdmarker.c',
    'src/GL/Util/libjpeg/jdmaster.c',
    'src/GL/Util/libjpeg/jdmerge.c',
    'src/GL/Util/libjpeg/jdpostct.c',
    'src/GL/Util/libjpeg/jdsample.c',
    'src/GL/Util/libjpeg/jdtrans.c',
    'src/GL/Util/libjpeg/jerror.c',
    'src/GL/Util/libjpeg/jfdctflt.c',
    'src/GL/Util/libjpeg/jfdctfst.c',
    'src/GL/Util/libjpeg/jfdctint.c',
    'src/GL/Util/libjpeg/jidctflt.c',
    'src/GL/Util/libjpeg/jidctfst.c',
    'src/GL/Util/libjpeg/jidctint.c',
    'src/GL/Util/libjpeg/jmemmgr.c',
    'src/GL/Util/libjpeg/jmemnobs.c',
    'src/GL/Util/libjpeg/jquant1.c',
    'src/GL/Util/libjpeg/jquant2.c',
    'src/GL/Util/libjpeg/jutils.c',

    # libpng
    'src/GL/Util/libpng/png.c',
    'src/GL/Util/libpng/pngerror.c',
    'src/GL/Util/libpng/pnggccrd.c',
    'src/GL/Util/libpng/pngget.c',
    'src/GL/Util/libpng/pngmem.c',
    'src/GL/Util/libpng/pngpread.c',
    'src/GL/Util/libpng/pngread.c',
    'src/GL/Util/libpng/pngrio.c',
    'src/GL/Util/libpng/pngrtran.c',
    'src/GL/Util/libpng/pngrutil.c',
    'src/GL/Util/libpng/pngset.c',
    'src/GL/Util/libpng/pngtrans.c',
    'src/GL/Util/libpng/pngvcrd.c',
    'src/GL/Util/libpng/pngwio.c',
    'src/GL/Util/libpng/pngwrite.c',
    'src/GL/Util/libpng/pngwtran.c',
    'src/GL/Util/libpng/pngwutil.c',

    # zlib
    'src/GL/Util/zlib/adler32.c',
    'src/GL/Util/zlib/compress.c',
    'src/GL/Util/zlib/crc32.c',
    'src/GL/Util/zlib/deflate.c',
    'src/GL/Util/zlib/inffast.c',
    'src/GL/Util/zlib/inflate.c',
    'src/GL/Util/zlib/inftrees.c',
    'src/GL/Util/zlib/trees.c',
    'src/GL/Util/zlib/uncompr.c',
    'src/GL/Util/zlib/zutil.c',
)

os_name = host_machine.system()

if os_name == 'windows'
    sources += files(
        'src/GL/GL/Context_Win32.cpp',
        'src/GL/Window/Window_Win32.cpp',  
    )
elif os_name == 'linux'
    add_project_arguments('-O3', '-Wall', '-Wextra', '-Werror', '-std=c++0x', language: ['cpp'])
    add_project_arguments('-O3', language: ['c'])
    sources += files(
        'src/GL/GL/Context_X11.cpp',
        'src/GL/Window/Window_X11.cpp',
    )
endif

oogl = static_library('OOGL', sources,
    include_directories: include_directories('include', 'include/GL', 'src'),
    install: true, install_dir: join_paths(meson.project_source_root(), 'lib')
)

oogl_dep = declare_dependency(
    include_directories: include_directories('include'),
    link_with: [oogl]
)

subdir('samples')