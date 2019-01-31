/*
** Lua binding: Transform2D
** Generated automatically by tolua++-1.0.93 on Thu Nov  1 16:11:59 2018.
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
TOLUA_API int  tolua_Transform2D_open (lua_State* tolua_S);

#include <stdint.h>
#include "UsingGodot.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_godot__Rect2 (lua_State* tolua_S){
  godot::Rect2* self = (godot::Rect2*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__Transform2D (lua_State* tolua_S){
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__String (lua_State* tolua_S){
  godot::String* self = (godot::String*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__Vector2 (lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S){
}

/* get function: elements of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_get_Transform2D_godot_Transform2D_elements
static int tolua_get_Transform2D_godot_Transform2D_elements(lua_State* tolua_S){
 int tolua_index;
  godot::Transform2D* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (godot::Transform2D*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0)-1;
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->elements[tolua_index],"godot::Vector2");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: elements of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_set_Transform2D_godot_Transform2D_elements
static int tolua_set_Transform2D_godot_Transform2D_elements(lua_State* tolua_S){
 int tolua_index;
  godot::Transform2D* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (godot::Transform2D*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0)-1;
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=3)  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->elements[tolua_index] = *((godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: tdotx of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_tdotx00
static int tolua_Transform2D_godot_Transform2D_tdotx00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tdotx'",NULL);
#endif
  const godot::Vector2* v = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "tdotx");
   }
   real_t tolua_ret;
   const void *args[] = {
    (void *) &v,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tdotx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tdoty of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_tdoty00
static int tolua_Transform2D_godot_Transform2D_tdoty00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tdoty'",NULL);
#endif
  const godot::Vector2* v = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "tdoty");
   }
   real_t tolua_ret;
   const void *args[] = {
    (void *) &v,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tdoty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator [] of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D__geti00
static int tolua_Transform2D_godot_Transform2D__geti00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator []'",NULL);
#endif
  int p_idx = ((int)  tolua_tointeger (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "operator []");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_idx,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"const godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(const godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"const godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator &[] of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D__seti00
static int tolua_Transform2D_godot_Transform2D__seti00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator &[]'",NULL);
#endif
  int p_idx = ((int)  tolua_tointeger (tolua_S,2,0));
  godot::Vector2 tolua_value = *((godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "operator &[]");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_idx,
    (void *) &tolua_value,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator [] of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D__geti01
static int tolua_Transform2D_godot_Transform2D__geti01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator []'",NULL);
#endif
  int p_idx = ((int)  tolua_tointeger (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "operator []");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_idx,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D__geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_axis of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_get_axis00
static int tolua_Transform2D_godot_Transform2D_get_axis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_axis'",NULL);
#endif
  int p_axis = ((int)  tolua_tointeger (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "get_axis");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_axis,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_axis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_axis of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_set_axis00
static int tolua_Transform2D_godot_Transform2D_set_axis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_axis'",NULL);
#endif
  int p_axis = ((int)  tolua_tointeger (tolua_S,2,0));
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "set_axis");
   }
   
   const void *args[] = {
    (void *) &p_axis,
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_axis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: invert of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_invert00
static int tolua_Transform2D_godot_Transform2D_invert00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'invert'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "invert");
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

/* method: inverse of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_inverse00
static int tolua_Transform2D_godot_Transform2D_inverse00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'inverse'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "inverse");
   }
   godot::Transform2D tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: affine_invert of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_affine_invert00
static int tolua_Transform2D_godot_Transform2D_affine_invert00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'affine_invert'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "affine_invert");
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

/* method: affine_inverse of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_affine_inverse00
static int tolua_Transform2D_godot_Transform2D_affine_inverse00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'affine_inverse'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "affine_inverse");
   }
   godot::Transform2D tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: set_rotation of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_set_rotation00
static int tolua_Transform2D_godot_Transform2D_set_rotation00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_rotation'",NULL);
#endif
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "set_rotation");
   }
   
   const void *args[] = {
    (void *) &p_phi,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_rotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_rotation of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_get_rotation00
static int tolua_Transform2D_godot_Transform2D_get_rotation00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_rotation'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "get_rotation");
   }
   real_t tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_rotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_rotation_and_scale of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_set_rotation_and_scale00
static int tolua_Transform2D_godot_Transform2D_set_rotation_and_scale00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_rotation_and_scale'",NULL);
#endif
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,2,0));
  const godot::Vector2* p_scale = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "set_rotation_and_scale");
   }
   
   const void *args[] = {
    (void *) &p_phi,
    (void *) &p_scale,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_rotation_and_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_rotate00
static int tolua_Transform2D_godot_Transform2D_rotate00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotate'",NULL);
#endif
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "rotate");
   }
   
   const void *args[] = {
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

/* method: scale of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_scale00
static int tolua_Transform2D_godot_Transform2D_scale00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
  const godot::Vector2* p_scale = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "scale");
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

/* method: scale_basis of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_scale_basis00
static int tolua_Transform2D_godot_Transform2D_scale_basis00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale_basis'",NULL);
#endif
  const godot::Vector2* p_scale = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "scale_basis");
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

/* method: translate of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_translate00
static int tolua_Transform2D_godot_Transform2D_translate00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'translate'",NULL);
#endif
  real_t p_tx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t p_ty = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "translate");
   }
   
   const void *args[] = {
    (void *) &p_tx,
    (void *) &p_ty,
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

/* method: translate of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_translate01
static int tolua_Transform2D_godot_Transform2D_translate01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'translate'",NULL);
#endif
  const godot::Vector2* p_translation = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "translate");
   }
   
   const void *args[] = {
    (void *) &p_translation,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, nullptr);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_translate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: basis_determinant of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_basis_determinant00
static int tolua_Transform2D_godot_Transform2D_basis_determinant00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'basis_determinant'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "basis_determinant");
   }
   real_t tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'basis_determinant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_scale of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_get_scale00
static int tolua_Transform2D_godot_Transform2D_get_scale00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_scale'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "get_scale");
   }
   godot::Vector2 tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_origin of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_get_origin00
static int tolua_Transform2D_godot_Transform2D_get_origin00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_origin'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "get_origin");
   }
   godot::Vector2 tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const godot::Vector2");
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

/* method: set_origin of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_set_origin00
static int tolua_Transform2D_godot_Transform2D_set_origin00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_origin'",NULL);
#endif
  const godot::Vector2* p_origin = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "set_origin");
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

/* method: scaled of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_scaled00
static int tolua_Transform2D_godot_Transform2D_scaled00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scaled'",NULL);
#endif
  const godot::Vector2* p_scale = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "scaled");
   }
   godot::Transform2D tolua_ret;
   const void *args[] = {
    (void *) &p_scale,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: basis_scaled of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_basis_scaled00
static int tolua_Transform2D_godot_Transform2D_basis_scaled00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'basis_scaled'",NULL);
#endif
  const godot::Vector2* p_scale = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "basis_scaled");
   }
   godot::Transform2D tolua_ret;
   const void *args[] = {
    (void *) &p_scale,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'basis_scaled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: translated of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_translated00
static int tolua_Transform2D_godot_Transform2D_translated00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'translated'",NULL);
#endif
  const godot::Vector2* p_offset = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "translated");
   }
   godot::Transform2D tolua_ret;
   const void *args[] = {
    (void *) &p_offset,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: rotated of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_rotated00
static int tolua_Transform2D_godot_Transform2D_rotated00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotated'",NULL);
#endif
  real_t p_phi = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "rotated");
   }
   godot::Transform2D tolua_ret;
   const void *args[] = {
    (void *) &p_phi,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: untranslated of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_untranslated00
static int tolua_Transform2D_godot_Transform2D_untranslated00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'untranslated'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "untranslated");
   }
   godot::Transform2D tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'untranslated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: orthonormalize of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_orthonormalize00
static int tolua_Transform2D_godot_Transform2D_orthonormalize00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orthonormalize'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "orthonormalize");
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

/* method: orthonormalized of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_orthonormalized00
static int tolua_Transform2D_godot_Transform2D_orthonormalized00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orthonormalized'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "orthonormalized");
   }
   godot::Transform2D tolua_ret;
   const void *args[1] = {};
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: operator == of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D__eq00
static int tolua_Transform2D_godot_Transform2D__eq00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform2D",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator =='",NULL);
#endif
  const godot::Transform2D* p_transform = ((const godot::Transform2D*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "operator ==");
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

/* method: operator * of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D__mul00
static int tolua_Transform2D_godot_Transform2D__mul00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform2D",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator *'",NULL);
#endif
  const godot::Transform2D* p_transform = ((const godot::Transform2D*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "operator *");
   }
   godot::Transform2D tolua_ret;
   const void *args[] = {
    (void *) &p_transform,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: interpolate_with of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_interpolate_with00
static int tolua_Transform2D_godot_Transform2D_interpolate_with00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Transform2D",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'interpolate_with'",NULL);
#endif
  const godot::Transform2D* p_transform = ((const godot::Transform2D*)  tolua_tousertype (tolua_S,2,0));
  real_t p_c = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "interpolate_with");
   }
   godot::Transform2D tolua_ret;
   const void *args[] = {
    (void *) &p_transform,
    (void *) &p_c,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Transform2D)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Transform2D));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Transform2D");
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

/* method: basis_xform of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_basis_xform00
static int tolua_Transform2D_godot_Transform2D_basis_xform00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'basis_xform'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "basis_xform");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'basis_xform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: basis_xform_inv of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_basis_xform_inv00
static int tolua_Transform2D_godot_Transform2D_basis_xform_inv00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'basis_xform_inv'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "basis_xform_inv");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'basis_xform_inv'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_xform00
static int tolua_Transform2D_godot_Transform2D_xform00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "xform");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
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

/* method: xform_inv of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_xform_inv00
static int tolua_Transform2D_godot_Transform2D_xform_inv00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform_inv'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "xform_inv");
   }
   godot::Vector2 tolua_ret;
   const void *args[] = {
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Vector2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Vector2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Vector2");
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

/* method: xform of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_xform01
static int tolua_Transform2D_godot_Transform2D_xform01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Rect2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform'",NULL);
#endif
  const godot::Rect2* p_vec = ((const godot::Rect2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "xform");
   }
   godot::Rect2 tolua_ret;
   const void *args[] = {
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Rect2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Rect2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Rect2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Rect2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_xform00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: xform_inv of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_xform_inv01
static int tolua_Transform2D_godot_Transform2D_xform_inv01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Rect2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xform_inv'",NULL);
#endif
  const godot::Rect2* p_vec = ((const godot::Rect2*)  tolua_tousertype (tolua_S,2,0));
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "xform_inv");
   }
   godot::Rect2 tolua_ret;
   const void *args[] = {
    (void *) &p_vec,
   };
   godot::api->godot_method_bind_ptrcall(mb, (godot_object *)self, args, &tolua_ret);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::Rect2)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Rect2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::Rect2));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::Rect2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_xform_inv00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator String of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D__String00
static int tolua_Transform2D_godot_Transform2D__String00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  godot::Transform2D* self = (godot::Transform2D*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator String'",NULL);
#endif
  {
   static godot_method_bind *mb = nullptr;
   if (mb == nullptr) {
    mb = godot::api->godot_method_bind_get_method("godot::Transform2D", "operator String");
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

/* method: new of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_new00
static int tolua_Transform2D_godot_Transform2D_new00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  real_t xx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t xy = ((real_t)  tolua_tonumber (tolua_S,3,0));
  real_t yx = ((real_t)  tolua_tonumber (tolua_S,4,0));
  real_t yy = ((real_t)  tolua_tonumber (tolua_S,5,0));
  real_t ox = ((real_t)  tolua_tonumber (tolua_S,6,0));
  real_t oy = ((real_t)  tolua_tonumber (tolua_S,7,0));
  {
godot::Transform2D* tolua_ret = (godot::Transform2D*)  Mtolua_new(godot::Transform2D)(xx,xy,yx,yy,ox,oy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform2D");
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

/* method: new_local of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_new00_local
static int tolua_Transform2D_godot_Transform2D_new00_local(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )  goto tolua_lerror;
 else
#endif
 {
  real_t xx = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t xy = ((real_t)  tolua_tonumber (tolua_S,3,0));
  real_t yx = ((real_t)  tolua_tonumber (tolua_S,4,0));
  real_t yy = ((real_t)  tolua_tonumber (tolua_S,5,0));
  real_t ox = ((real_t)  tolua_tonumber (tolua_S,6,0));
  real_t oy = ((real_t)  tolua_tonumber (tolua_S,7,0));
  {
godot::Transform2D* tolua_ret = (godot::Transform2D*)  Mtolua_new(godot::Transform2D)(xx,xy,yx,yy,ox,oy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform2D");
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

/* method: new of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_new01
static int tolua_Transform2D_godot_Transform2D_new01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  real_t p_rot = ((real_t)  tolua_tonumber (tolua_S,2,0));
  const godot::Vector2* p_pos = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  {
godot::Transform2D* tolua_ret = (godot::Transform2D*)  Mtolua_new(godot::Transform2D)(p_rot,*p_pos);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform2D");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_new01_local
static int tolua_Transform2D_godot_Transform2D_new01_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  real_t p_rot = ((real_t)  tolua_tonumber (tolua_S,2,0));
  const godot::Vector2* p_pos = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  {
godot::Transform2D* tolua_ret = (godot::Transform2D*)  Mtolua_new(godot::Transform2D)(p_rot,*p_pos);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_new02
static int tolua_Transform2D_godot_Transform2D_new02(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  {
godot::Transform2D* tolua_ret = (godot::Transform2D*)  Mtolua_new(godot::Transform2D)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform2D");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Transform2D */
#ifndef TOLUA_DISABLE_tolua_Transform2D_godot_Transform2D_new02_local
static int tolua_Transform2D_godot_Transform2D_new02_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Transform2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )  goto tolua_lerror;
 else
 {
  {
godot::Transform2D* tolua_ret = (godot::Transform2D*)  Mtolua_new(godot::Transform2D)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Transform2D");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Transform2D_godot_Transform2D_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Transform2D_open (lua_State* tolua_S){
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"godot",0);
  tolua_beginmodule(tolua_S,"godot");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Rect2","godot::Rect2","",tolua_collect_godot__Rect2);
   #else
   tolua_cclass(tolua_S,"Rect2","godot::Rect2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Rect2");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Transform2D","godot::Transform2D","",tolua_collect_godot__Transform2D);
   #else
   tolua_cclass(tolua_S,"Transform2D","godot::Transform2D","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Transform2D");
    tolua_array(tolua_S,"elements",tolua_get_Transform2D_godot_Transform2D_elements,tolua_set_Transform2D_godot_Transform2D_elements);
    tolua_function(tolua_S,"tdotx",tolua_Transform2D_godot_Transform2D_tdotx00);
    tolua_function(tolua_S,"tdoty",tolua_Transform2D_godot_Transform2D_tdoty00);
    tolua_function(tolua_S,".geti",tolua_Transform2D_godot_Transform2D__geti00);
    tolua_function(tolua_S,".seti",tolua_Transform2D_godot_Transform2D__seti00);
    tolua_function(tolua_S,".geti",tolua_Transform2D_godot_Transform2D__geti01);
    tolua_function(tolua_S,"get_axis",tolua_Transform2D_godot_Transform2D_get_axis00);
    tolua_function(tolua_S,"set_axis",tolua_Transform2D_godot_Transform2D_set_axis00);
    tolua_function(tolua_S,"invert",tolua_Transform2D_godot_Transform2D_invert00);
    tolua_function(tolua_S,"inverse",tolua_Transform2D_godot_Transform2D_inverse00);
    tolua_function(tolua_S,"affine_invert",tolua_Transform2D_godot_Transform2D_affine_invert00);
    tolua_function(tolua_S,"affine_inverse",tolua_Transform2D_godot_Transform2D_affine_inverse00);
    tolua_function(tolua_S,"set_rotation",tolua_Transform2D_godot_Transform2D_set_rotation00);
    tolua_function(tolua_S,"get_rotation",tolua_Transform2D_godot_Transform2D_get_rotation00);
    tolua_function(tolua_S,"set_rotation_and_scale",tolua_Transform2D_godot_Transform2D_set_rotation_and_scale00);
    tolua_function(tolua_S,"rotate",tolua_Transform2D_godot_Transform2D_rotate00);
    tolua_function(tolua_S,"scale",tolua_Transform2D_godot_Transform2D_scale00);
    tolua_function(tolua_S,"scale_basis",tolua_Transform2D_godot_Transform2D_scale_basis00);
    tolua_function(tolua_S,"translate",tolua_Transform2D_godot_Transform2D_translate00);
    tolua_function(tolua_S,"translate",tolua_Transform2D_godot_Transform2D_translate01);
    tolua_function(tolua_S,"basis_determinant",tolua_Transform2D_godot_Transform2D_basis_determinant00);
    tolua_function(tolua_S,"get_scale",tolua_Transform2D_godot_Transform2D_get_scale00);
    tolua_function(tolua_S,"get_origin",tolua_Transform2D_godot_Transform2D_get_origin00);
    tolua_function(tolua_S,"set_origin",tolua_Transform2D_godot_Transform2D_set_origin00);
    tolua_function(tolua_S,"scaled",tolua_Transform2D_godot_Transform2D_scaled00);
    tolua_function(tolua_S,"basis_scaled",tolua_Transform2D_godot_Transform2D_basis_scaled00);
    tolua_function(tolua_S,"translated",tolua_Transform2D_godot_Transform2D_translated00);
    tolua_function(tolua_S,"rotated",tolua_Transform2D_godot_Transform2D_rotated00);
    tolua_function(tolua_S,"untranslated",tolua_Transform2D_godot_Transform2D_untranslated00);
    tolua_function(tolua_S,"orthonormalize",tolua_Transform2D_godot_Transform2D_orthonormalize00);
    tolua_function(tolua_S,"orthonormalized",tolua_Transform2D_godot_Transform2D_orthonormalized00);
    tolua_function(tolua_S,".eq",tolua_Transform2D_godot_Transform2D__eq00);
    tolua_function(tolua_S,".mul",tolua_Transform2D_godot_Transform2D__mul00);
    tolua_function(tolua_S,"interpolate_with",tolua_Transform2D_godot_Transform2D_interpolate_with00);
    tolua_function(tolua_S,"basis_xform",tolua_Transform2D_godot_Transform2D_basis_xform00);
    tolua_function(tolua_S,"basis_xform_inv",tolua_Transform2D_godot_Transform2D_basis_xform_inv00);
    tolua_function(tolua_S,"xform",tolua_Transform2D_godot_Transform2D_xform00);
    tolua_function(tolua_S,"xform_inv",tolua_Transform2D_godot_Transform2D_xform_inv00);
    tolua_function(tolua_S,"xform",tolua_Transform2D_godot_Transform2D_xform01);
    tolua_function(tolua_S,"xform_inv",tolua_Transform2D_godot_Transform2D_xform_inv01);
    tolua_function(tolua_S,".String",tolua_Transform2D_godot_Transform2D__String00);
    tolua_function(tolua_S,"new",tolua_Transform2D_godot_Transform2D_new00);
    tolua_function(tolua_S,"new_local",tolua_Transform2D_godot_Transform2D_new00_local);
    tolua_function(tolua_S,".call",tolua_Transform2D_godot_Transform2D_new00_local);
    tolua_function(tolua_S,"new",tolua_Transform2D_godot_Transform2D_new01);
    tolua_function(tolua_S,"new_local",tolua_Transform2D_godot_Transform2D_new01_local);
    tolua_function(tolua_S,".call",tolua_Transform2D_godot_Transform2D_new01_local);
    tolua_function(tolua_S,"new",tolua_Transform2D_godot_Transform2D_new02);
    tolua_function(tolua_S,"new_local",tolua_Transform2D_godot_Transform2D_new02_local);
    tolua_function(tolua_S,".call",tolua_Transform2D_godot_Transform2D_new02_local);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Transform2D (lua_State* tolua_S) {
 return tolua_Transform2D_open(tolua_S);
};
#endif

