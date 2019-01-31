/*
** Lua binding: Transform
** Generated automatically by tolua++-1.0.93 on Thu Nov  1 17:06:49 2018.
*/

/****************************************************************************
//  (C) 2016 n.lee
****************************************************************************/
#include "stdafx.h"
#include <map>
#include <string>

extern "C" {
    #include "lua/tolua_fix.h"
}
#include "lua/tolua++.h"


/* Exported function */
TOLUA_API int  tolua_Transform_open (lua_State* tolua_S);

#include <stdint.h>
#include "UsingGodot.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_godot__String (lua_State* tolua_S){
  godot::String* self = (godot::String*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__Vector3 (lua_State* tolua_S){
  godot::Vector3* self = (godot::Vector3*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__AABB (lua_State* tolua_S){
  godot::AABB* self = (godot::AABB*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__Transform (lua_State* tolua_S){
  godot::Transform* self = (godot::Transform*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__Plane (lua_State* tolua_S){
  godot::Plane* self = (godot::Plane*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S){
}

/* get function: basis of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_get_godot__Transform_basis
static int tolua_get_godot__Transform_basis(lua_State* tolua_S){
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'basis'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->basis,"godot::Basis");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: basis of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_set_godot__Transform_basis
static int tolua_set_godot__Transform_basis(lua_State* tolua_S){
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'basis'",NULL);
#endif
#ifndef TOLUA_RELEASE
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::Basis",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.", &tolua_err);
#endif
  self->basis = *((godot::Basis*)  tolua_tousertype (tolua_S,2,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: origin of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_get_godot__Transform_origin
static int tolua_get_godot__Transform_origin(lua_State* tolua_S){
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'origin'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->origin,"godot::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: origin of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_set_godot__Transform_origin
static int tolua_set_godot__Transform_origin(lua_State* tolua_S){
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'origin'",NULL);
#endif
#ifndef TOLUA_RELEASE
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.", &tolua_err);
#endif
  self->origin = *((godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: invert of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_invert00
static int tolua_Transform_godot_Transform_invert00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'invert'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "invert");
   }
   
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'invert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: inverse of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_inverse00
static int tolua_Transform_godot_Transform_inverse00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'inverse'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "inverse");
   }
   godot::Transform tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: affine_invert of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_affine_invert00
static int tolua_Transform_godot_Transform_affine_invert00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'affine_invert'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "affine_invert");
   }
   
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'affine_invert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: affine_inverse of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_affine_inverse00
static int tolua_Transform_godot_Transform_affine_inverse00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'affine_inverse'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "affine_inverse");
   }
   godot::Transform tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'affine_inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotated of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_rotated00
static int tolua_Transform_godot_Transform_rotated00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotated'",NULL);
#endif
  const godot::Vector3* p_axis = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "rotated");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &p_axis,
    (void *) &p_phi,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_rotate00
static int tolua_Transform_godot_Transform_rotate00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotate'",NULL);
#endif
  const godot::Vector3* p_axis = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "rotate");
   }
   
   const void *args[] = {
    (void *) &p_axis,
    (void *) &p_phi,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate_basis of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_rotate_basis00
static int tolua_Transform_godot_Transform_rotate_basis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotate_basis'",NULL);
#endif
  const godot::Vector3* p_axis = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "rotate_basis");
   }
   
   const void *args[] = {
    (void *) &p_axis,
    (void *) &p_phi,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate_basis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_look_at of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_set_look_at00
static int tolua_Transform_godot_Transform_set_look_at00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_look_at'",NULL);
#endif
  const godot::Vector3* p_eye = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  const godot::Vector3* p_target = ((const godot::Vector3*)  tolua_tousertype (tolua_S,3,0));
  const godot::Vector3* p_up = ((const godot::Vector3*)  tolua_tousertype (tolua_S,4,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "set_look_at");
   }
   
   const void *args[] = {
    (void *) &p_eye,
    (void *) &p_target,
    (void *) &p_up,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_look_at'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: looking_at of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_looking_at00
static int tolua_Transform_godot_Transform_looking_at00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'looking_at'",NULL);
#endif
  const godot::Vector3* p_target = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  const godot::Vector3* p_up = ((const godot::Vector3*)  tolua_tousertype (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "looking_at");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &p_target,
    (void *) &p_up,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'looking_at'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scale of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_scale00
static int tolua_Transform_godot_Transform_scale00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
  const godot::Vector3* p_scale = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "scale");
   }
   
   const void *args[] = {
    (void *) &p_scale,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scaled of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_scaled00
static int tolua_Transform_godot_Transform_scaled00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scaled'",NULL);
#endif
  const godot::Vector3* p_scale = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "scaled");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &p_scale,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scaled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scale_basis of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_scale_basis00
static int tolua_Transform_godot_Transform_scale_basis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale_basis'",NULL);
#endif
  const godot::Vector3* p_scale = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "scale_basis");
   }
   
   const void *args[] = {
    (void *) &p_scale,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scale_basis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: translate of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_translate00
static int tolua_Transform_godot_Transform_translate00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'translate'",NULL);
#endif
  real_t p_tx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t p_ty = ((real_t)  tolua_tonumber (tolua_S,3,0));
  real_t p_tz = ((real_t)  tolua_tonumber (tolua_S,4,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "translate");
   }
   
   const void *args[] = {
    (void *) &p_tx,
    (void *) &p_ty,
    (void *) &p_tz,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: translate of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_translate01
static int tolua_Transform_godot_Transform_translate01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'translate'",NULL);
#endif
  const godot::Vector3* p_translation = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "translate");
   }
   
   const void *args[] = {
    (void *) &p_translation,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Transform_godot_Transform_translate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: translated of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_translated00
static int tolua_Transform_godot_Transform_translated00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'translated'",NULL);
#endif
  const godot::Vector3* p_translation = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "translated");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &p_translation,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'translated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_basis of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_get_basis00
static int tolua_Transform_godot_Transform_get_basis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_basis'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "get_basis");
   }
   godot::Basis tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const godot::Basis");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_basis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_basis of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_set_basis00
static int tolua_Transform_godot_Transform_set_basis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Basis",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_basis'",NULL);
#endif
  const godot::Basis* p_basis = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "set_basis");
   }
   
   const void *args[] = {
    (void *) &p_basis,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_basis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_origin of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_get_origin00
static int tolua_Transform_godot_Transform_get_origin00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_origin'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "get_origin");
   }
   godot::Vector3 tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const godot::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_origin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_origin of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_set_origin00
static int tolua_Transform_godot_Transform_set_origin00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_origin'",NULL);
#endif
  const godot::Vector3* p_origin = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "set_origin");
   }
   
   const void *args[] = {
    (void *) &p_origin,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_origin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: orthonormalize of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_orthonormalize00
static int tolua_Transform_godot_Transform_orthonormalize00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orthonormalize'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "orthonormalize");
   }
   
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'orthonormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: orthonormalized of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_orthonormalized00
static int tolua_Transform_godot_Transform_orthonormalized00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orthonormalized'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "orthonormalized");
   }
   godot::Transform tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'orthonormalized'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator == of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform__eq00
static int tolua_Transform_godot_Transform__eq00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator =='",NULL);
#endif
  const godot::Transform* p_transform = ((const godot::Transform*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "operator ==");
   }
   bool tolua_ret;
   const void *args[] = {
    (void *) &p_transform,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_xform00
static int tolua_Transform_godot_Transform_xform00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform'",NULL);
#endif
  const godot::Vector3* p_vector = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "xform");
   }
   godot::Vector3 tolua_ret;
   const void *args[] = {
    (void *) &p_vector,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector3)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector3));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'xform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform_inv of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_xform_inv00
static int tolua_Transform_godot_Transform_xform_inv00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform_inv'",NULL);
#endif
  const godot::Vector3* p_vector = ((const godot::Vector3*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "xform_inv");
   }
   godot::Vector3 tolua_ret;
   const void *args[] = {
    (void *) &p_vector,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector3)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector3));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'xform_inv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_xform01
static int tolua_Transform_godot_Transform_xform01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform'",NULL);
#endif
  const godot::Plane* p_plane = ((const godot::Plane*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "xform");
   }
   godot::Plane tolua_ret;
   const void *args[] = {
    (void *) &p_plane,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Plane)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Plane));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_xform00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform_inv of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_xform_inv01
static int tolua_Transform_godot_Transform_xform_inv01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform_inv'",NULL);
#endif
  const godot::Plane* p_plane = ((const godot::Plane*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "xform_inv");
   }
   godot::Plane tolua_ret;
   const void *args[] = {
    (void *) &p_plane,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Plane)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Plane));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_xform_inv00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_xform02
static int tolua_Transform_godot_Transform_xform02(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform'",NULL);
#endif
  const godot::AABB* p_aabb = ((const godot::AABB*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "xform");
   }
   godot::AABB tolua_ret;
   const void *args[] = {
    (void *) &p_aabb,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::AABB)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::AABB));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_xform01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform_inv of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_xform_inv02
static int tolua_Transform_godot_Transform_xform_inv02(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::AABB",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform_inv'",NULL);
#endif
  const godot::AABB* p_aabb = ((const godot::AABB*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "xform_inv");
   }
   godot::AABB tolua_ret;
   const void *args[] = {
    (void *) &p_aabb,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::AABB)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::AABB));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::AABB");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_xform_inv01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator * of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform__mul00
static int tolua_Transform_godot_Transform__mul00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator *'",NULL);
#endif
  const godot::Transform* p_transform = ((const godot::Transform*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "operator *");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &p_transform,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interpolate_with of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_interpolate_with00
static int tolua_Transform_godot_Transform_interpolate_with00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'interpolate_with'",NULL);
#endif
  const godot::Transform* p_transform = ((const godot::Transform*)  tolua_tousertype (tolua_S,2,0));
  real_t p_c = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "interpolate_with");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &p_transform,
    (void *) &p_c,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interpolate_with'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: inverse_xform of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_inverse_xform00
static int tolua_Transform_godot_Transform_inverse_xform00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'inverse_xform'",NULL);
#endif
  const godot::Transform* t = ((const godot::Transform*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "inverse_xform");
   }
   godot::Transform tolua_ret;
   const void *args[] = {
    (void *) &t,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inverse_xform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_set00
static int tolua_Transform_godot_Transform_set00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set'",NULL);
#endif
  real_t xx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t xy = ((real_t)  tolua_tonumber (tolua_S,3,0));
  real_t xz = ((real_t)  tolua_tonumber (tolua_S,4,0));
  real_t yx = ((real_t)  tolua_tonumber (tolua_S,5,0));
  real_t yy = ((real_t)  tolua_tonumber (tolua_S,6,0));
  real_t yz = ((real_t)  tolua_tonumber (tolua_S,7,0));
  real_t zx = ((real_t)  tolua_tonumber (tolua_S,8,0));
  real_t zy = ((real_t)  tolua_tonumber (tolua_S,9,0));
  real_t zz = ((real_t)  tolua_tonumber (tolua_S,10,0));
  real_t tx = ((real_t)  tolua_tonumber (tolua_S,11,0));
  real_t ty = ((real_t)  tolua_tonumber (tolua_S,12,0));
  real_t tz = ((real_t)  tolua_tonumber (tolua_S,13,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "set");
   }
   
   const void *args[] = {
    (void *) &xx,
    (void *) &xy,
    (void *) &xz,
    (void *) &yx,
    (void *) &yy,
    (void *) &yz,
    (void *) &zx,
    (void *) &zy,
    (void *) &zz,
    (void *) &tx,
    (void *) &ty,
    (void *) &tz,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator String of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform__String00
static int tolua_Transform_godot_Transform__String00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform* self = (godot::Transform*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator String'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform", "operator String");
   }
   godot::String tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::String)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::String));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.String'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new00
static int tolua_Transform_godot_Transform_new00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  real_t xx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t xy = ((real_t)  tolua_tonumber (tolua_S,3,0));
  real_t xz = ((real_t)  tolua_tonumber (tolua_S,4,0));
  real_t yx = ((real_t)  tolua_tonumber (tolua_S,5,0));
  real_t yy = ((real_t)  tolua_tonumber (tolua_S,6,0));
  real_t yz = ((real_t)  tolua_tonumber (tolua_S,7,0));
  real_t zx = ((real_t)  tolua_tonumber (tolua_S,8,0));
  real_t zy = ((real_t)  tolua_tonumber (tolua_S,9,0));
  real_t zz = ((real_t)  tolua_tonumber (tolua_S,10,0));
  real_t tx = ((real_t)  tolua_tonumber (tolua_S,11,0));
  real_t ty = ((real_t)  tolua_tonumber (tolua_S,12,0));
  real_t tz = ((real_t)  tolua_tonumber (tolua_S,13,0));
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)(xx,xy,xz,yx,yy,yz,zx,zy,zz,tx,ty,tz);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new00_local
static int tolua_Transform_godot_Transform_new00_local(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  real_t xx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t xy = ((real_t)  tolua_tonumber (tolua_S,3,0));
  real_t xz = ((real_t)  tolua_tonumber (tolua_S,4,0));
  real_t yx = ((real_t)  tolua_tonumber (tolua_S,5,0));
  real_t yy = ((real_t)  tolua_tonumber (tolua_S,6,0));
  real_t yz = ((real_t)  tolua_tonumber (tolua_S,7,0));
  real_t zx = ((real_t)  tolua_tonumber (tolua_S,8,0));
  real_t zy = ((real_t)  tolua_tonumber (tolua_S,9,0));
  real_t zz = ((real_t)  tolua_tonumber (tolua_S,10,0));
  real_t tx = ((real_t)  tolua_tonumber (tolua_S,11,0));
  real_t ty = ((real_t)  tolua_tonumber (tolua_S,12,0));
  real_t tz = ((real_t)  tolua_tonumber (tolua_S,13,0));
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)(xx,xy,xz,yx,yy,yz,zx,zy,zz,tx,ty,tz);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new01
static int tolua_Transform_godot_Transform_new01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Basis",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  const godot::Basis* p_basis = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)(*p_basis);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new01_local
static int tolua_Transform_godot_Transform_new01_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Basis",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  const godot::Basis* p_basis = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)(*p_basis);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new02
static int tolua_Transform_godot_Transform_new02(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Basis",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  const godot::Basis* p_basis = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  const godot::Vector3* p_origin = ((const godot::Vector3*)  tolua_tousertype (tolua_S,3,0));
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)(*p_basis,*p_origin);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new02_local
static int tolua_Transform_godot_Transform_new02_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Basis",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  const godot::Basis* p_basis = ((const godot::Basis*)  tolua_tousertype (tolua_S,2,0));
  const godot::Vector3* p_origin = ((const godot::Vector3*)  tolua_tousertype (tolua_S,3,0));
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)(*p_basis,*p_origin);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new03
static int tolua_Transform_godot_Transform_new03(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Transform */
#ifndef TOLUA_DISABLE_tolua_Transform_godot_Transform_new03_local
static int tolua_Transform_godot_Transform_new03_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  {
godot::Transform* tolua_ret = (godot::Transform*)  Mtolua_new(godot::Transform)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform_godot_Transform_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Transform_open (lua_State* tolua_S){
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"godot",0);
  tolua_beginmodule(tolua_S,"godot");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Transform","godot::Transform","",tolua_collect_godot__Transform);
   #else
   tolua_cclass(tolua_S,"Transform","godot::Transform","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Transform");
    tolua_variable(tolua_S,"basis",tolua_get_godot__Transform_basis,tolua_set_godot__Transform_basis);
    tolua_variable(tolua_S,"origin",tolua_get_godot__Transform_origin,tolua_set_godot__Transform_origin);
    tolua_function(tolua_S,"invert",tolua_Transform_godot_Transform_invert00);
    tolua_function(tolua_S,"inverse",tolua_Transform_godot_Transform_inverse00);
    tolua_function(tolua_S,"affine_invert",tolua_Transform_godot_Transform_affine_invert00);
    tolua_function(tolua_S,"affine_inverse",tolua_Transform_godot_Transform_affine_inverse00);
    tolua_function(tolua_S,"rotated",tolua_Transform_godot_Transform_rotated00);
    tolua_function(tolua_S,"rotate",tolua_Transform_godot_Transform_rotate00);
    tolua_function(tolua_S,"rotate_basis",tolua_Transform_godot_Transform_rotate_basis00);
    tolua_function(tolua_S,"set_look_at",tolua_Transform_godot_Transform_set_look_at00);
    tolua_function(tolua_S,"looking_at",tolua_Transform_godot_Transform_looking_at00);
    tolua_function(tolua_S,"scale",tolua_Transform_godot_Transform_scale00);
    tolua_function(tolua_S,"scaled",tolua_Transform_godot_Transform_scaled00);
    tolua_function(tolua_S,"scale_basis",tolua_Transform_godot_Transform_scale_basis00);
    tolua_function(tolua_S,"translate",tolua_Transform_godot_Transform_translate00);
    tolua_function(tolua_S,"translate",tolua_Transform_godot_Transform_translate01);
    tolua_function(tolua_S,"translated",tolua_Transform_godot_Transform_translated00);
    tolua_function(tolua_S,"get_basis",tolua_Transform_godot_Transform_get_basis00);
    tolua_function(tolua_S,"set_basis",tolua_Transform_godot_Transform_set_basis00);
    tolua_function(tolua_S,"get_origin",tolua_Transform_godot_Transform_get_origin00);
    tolua_function(tolua_S,"set_origin",tolua_Transform_godot_Transform_set_origin00);
    tolua_function(tolua_S,"orthonormalize",tolua_Transform_godot_Transform_orthonormalize00);
    tolua_function(tolua_S,"orthonormalized",tolua_Transform_godot_Transform_orthonormalized00);
    tolua_function(tolua_S,".eq",tolua_Transform_godot_Transform__eq00);
    tolua_function(tolua_S,"xform",tolua_Transform_godot_Transform_xform00);
    tolua_function(tolua_S,"xform_inv",tolua_Transform_godot_Transform_xform_inv00);
    tolua_function(tolua_S,"xform",tolua_Transform_godot_Transform_xform01);
    tolua_function(tolua_S,"xform_inv",tolua_Transform_godot_Transform_xform_inv01);
    tolua_function(tolua_S,"xform",tolua_Transform_godot_Transform_xform02);
    tolua_function(tolua_S,"xform_inv",tolua_Transform_godot_Transform_xform_inv02);
    tolua_function(tolua_S,".mul",tolua_Transform_godot_Transform__mul00);
    tolua_function(tolua_S,"interpolate_with",tolua_Transform_godot_Transform_interpolate_with00);
    tolua_function(tolua_S,"inverse_xform",tolua_Transform_godot_Transform_inverse_xform00);
    tolua_function(tolua_S,"set",tolua_Transform_godot_Transform_set00);
    tolua_function(tolua_S,".String",tolua_Transform_godot_Transform__String00);
    tolua_function(tolua_S,"new",tolua_Transform_godot_Transform_new00);
    tolua_function(tolua_S,"new_local",tolua_Transform_godot_Transform_new00_local);
    tolua_function(tolua_S,".call",tolua_Transform_godot_Transform_new00_local);
    tolua_function(tolua_S,"new",tolua_Transform_godot_Transform_new01);
    tolua_function(tolua_S,"new_local",tolua_Transform_godot_Transform_new01_local);
    tolua_function(tolua_S,".call",tolua_Transform_godot_Transform_new01_local);
    tolua_function(tolua_S,"new",tolua_Transform_godot_Transform_new02);
    tolua_function(tolua_S,"new_local",tolua_Transform_godot_Transform_new02_local);
    tolua_function(tolua_S,".call",tolua_Transform_godot_Transform_new02_local);
    tolua_function(tolua_S,"new",tolua_Transform_godot_Transform_new03);
    tolua_function(tolua_S,"new_local",tolua_Transform_godot_Transform_new03_local);
    tolua_function(tolua_S,".call",tolua_Transform_godot_Transform_new03_local);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Transform (lua_State* tolua_S) {
 return tolua_Transform_open(tolua_S);
};
#endif

