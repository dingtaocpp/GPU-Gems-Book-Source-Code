
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_EXT_texture3D__
#define __GLUX_GL_EXT_texture3D__

GLUX_NEW_PLUGIN(GL_EXT_texture3D);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_PACK_SKIP_IMAGES_EXT
#  define GL_PACK_SKIP_IMAGES_EXT 0x806B
#endif
#ifndef GL_PACK_IMAGE_HEIGHT_EXT
#  define GL_PACK_IMAGE_HEIGHT_EXT 0x806C
#endif
#ifndef GL_UNPACK_SKIP_IMAGES_EXT
#  define GL_UNPACK_SKIP_IMAGES_EXT 0x806D
#endif
#ifndef GL_UNPACK_IMAGE_HEIGHT_EXT
#  define GL_UNPACK_IMAGE_HEIGHT_EXT 0x806E
#endif
#ifndef GL_TEXTURE_3D_EXT
#  define GL_TEXTURE_3D_EXT 0x806F
#endif
#ifndef GL_PROXY_TEXTURE_3D_EXT
#  define GL_PROXY_TEXTURE_3D_EXT 0x8070
#endif
#ifndef GL_TEXTURE_DEPTH_EXT
#  define GL_TEXTURE_DEPTH_EXT 0x8071
#endif
#ifndef GL_TEXTURE_WRAP_R_EXT
#  define GL_TEXTURE_WRAP_R_EXT 0x8072
#endif
#ifndef GL_MAX_3D_TEXTURE_SIZE_EXT
#  define GL_MAX_3D_TEXTURE_SIZE_EXT 0x8073
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glTexImage3DEXT
typedef void (APIENTRYP PFNGLUXTEXIMAGE3DEXTPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
#endif
#ifndef __GLUX__GLFCT_glTexSubImage3DEXT
typedef void (APIENTRYP PFNGLUXTEXSUBIMAGE3DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glTexImage3DEXT
extern PFNGLUXTEXIMAGE3DEXTPROC glTexImage3DEXT;
#endif
#ifndef __GLUX__GLFCT_glTexSubImage3DEXT
extern PFNGLUXTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
