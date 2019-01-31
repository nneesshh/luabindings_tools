/*
** Lua binding: Vector2
** Generated automatically by tolua++-1.0.93 on Mon Nov  5 15:32:15 2018.
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
TOLUA_API int  tolua_Vector2_open (lua_State* tolua_S);

#include <stdint.h>
#include "UsingGodot.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

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

 static godot_object *__static_object_godot__Vector2 = nullptr;
/* get function: x of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_godot__Vector2_x
static int tolua_get_godot__Vector2_x(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_godot__Vector2_x
static int tolua_set_godot__Vector2_x(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
#ifndef TOLUA_RELEASE
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.", &tolua_err);
#endif
  self->x = ((real_t)  tolua_tonumber(tolua_S,2,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_godot__Vector2_width
static int tolua_get_godot__Vector2_width(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_godot__Vector2_width
static int tolua_set_godot__Vector2_width(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
#ifndef TOLUA_RELEASE
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.", &tolua_err);
#endif
  self->width = ((real_t)  tolua_tonumber(tolua_S,2,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_godot__Vector2_y
static int tolua_get_godot__Vector2_y(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_godot__Vector2_y
static int tolua_set_godot__Vector2_y(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
#ifndef TOLUA_RELEASE
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.", &tolua_err);
#endif
  self->y = ((real_t)  tolua_tonumber(tolua_S,2,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_get_godot__Vector2_height
static int tolua_get_godot__Vector2_height(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_set_godot__Vector2_height
static int tolua_set_godot__Vector2_height(lua_State* tolua_S){
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
#ifndef TOLUA_RELEASE
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.", &tolua_err);
#endif
  self->height = ((real_t)  tolua_tonumber(tolua_S,2,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__seti00
static int tolua_Vector2_godot_Vector2__seti00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator&[]'",NULL);
#endif
  int p_idx = ((int)  tolua_tointeger (tolua_S,2,0));
  real_t tolua_value = ((real_t)  tolua_tonumber (tolua_S,3,0));
  self->operator[](p_idx-1) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__geti00
static int tolua_Vector2_godot_Vector2__geti00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator[]'",NULL);
#endif
  int p_idx = ((int)  tolua_tointeger (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->operator[](p_idx-1);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: operator[] of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__geti01
static int tolua_Vector2_godot_Vector2__geti01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator[]'",NULL);
#endif
  int p_idx = ((int)  tolua_tointeger (tolua_S,2,0));
  {
const real_t tolua_ret = (const real_t)  self->operator[](p_idx-1);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vector2_godot_Vector2__geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__add00
static int tolua_Vector2_godot_Vector2__add00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator+'",NULL);
#endif
  const godot::Vector2* p_v = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator+(*p_v);
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
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__sub00
static int tolua_Vector2_godot_Vector2__sub00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator-'",NULL);
#endif
  const godot::Vector2* p_v = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator-(*p_v);
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
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__mul00
static int tolua_Vector2_godot_Vector2__mul00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator*'",NULL);
#endif
  const godot::Vector2* p_v1 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator*(*p_v1);
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
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__mul01
static int tolua_Vector2_godot_Vector2__mul01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator*'",NULL);
#endif
  const real_t rvalue = ((const real_t)  tolua_tonumber (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator*(rvalue);
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
   tolua_pushnumber(tolua_S,(lua_Number)rvalue);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Vector2_godot_Vector2__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__div00
static int tolua_Vector2_godot_Vector2__div00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator/'",NULL);
#endif
  const godot::Vector2* p_v1 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator/
(*p_v1);
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
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__div01
static int tolua_Vector2_godot_Vector2__div01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator/'",NULL);
#endif
  const real_t rvalue = ((const real_t)  tolua_tonumber (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator/
(rvalue);
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
   tolua_pushnumber(tolua_S,(lua_Number)rvalue);
  }
 }
 return 2;
tolua_lerror:
 return tolua_Vector2_godot_Vector2__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__sub01
static int tolua_Vector2_godot_Vector2__sub01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator-'",NULL);
#endif
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->operator-();
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
 return tolua_Vector2_godot_Vector2__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__eq00
static int tolua_Vector2_godot_Vector2__eq00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator=='",NULL);
#endif
  const godot::Vector2* p_vec2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->operator==(*p_vec2);
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

/* method: operator< of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__lt00
static int tolua_Vector2_godot_Vector2__lt00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator<'",NULL);
#endif
  const godot::Vector2* p_vec2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->operator<(*p_vec2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__le00
static int tolua_Vector2_godot_Vector2__le00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator<='",NULL);
#endif
  const godot::Vector2* p_vec2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->operator<=(*p_vec2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalize of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_normalize00
static int tolua_Vector2_godot_Vector2_normalize00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normalize'",NULL);
#endif
  {
self->normalize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalized of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_normalized00
static int tolua_Vector2_godot_Vector2_normalized00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normalized'",NULL);
#endif
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->normalized();
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
 tolua_error(tolua_S,"#ferror in function 'normalized'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_length00
static int tolua_Vector2_godot_Vector2_length00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
#endif
  {
real_t tolua_ret = (real_t)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length_squared of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_length_squared00
static int tolua_Vector2_godot_Vector2_length_squared00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length_squared'",NULL);
#endif
  {
real_t tolua_ret = (real_t)  self->length_squared();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length_squared'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: distance_to of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_distance_to00
static int tolua_Vector2_godot_Vector2_distance_to00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'distance_to'",NULL);
#endif
  const godot::Vector2* p_vector2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->distance_to(*p_vector2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distance_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: distance_squared_to of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_distance_squared_to00
static int tolua_Vector2_godot_Vector2_distance_squared_to00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'distance_squared_to'",NULL);
#endif
  const godot::Vector2* p_vector2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->distance_squared_to(*p_vector2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'distance_squared_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: angle_to of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_angle_to00
static int tolua_Vector2_godot_Vector2_angle_to00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle_to'",NULL);
#endif
  const godot::Vector2* p_vector2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->angle_to(*p_vector2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'angle_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: angle_to_point of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_angle_to_point00
static int tolua_Vector2_godot_Vector2_angle_to_point00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle_to_point'",NULL);
#endif
  const godot::Vector2* p_vector2 = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->angle_to_point(*p_vector2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'angle_to_point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dot of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_dot00
static int tolua_Vector2_godot_Vector2_dot00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dot'",NULL);
#endif
  const godot::Vector2* p_other = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->dot(*p_other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cross of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_cross00
static int tolua_Vector2_godot_Vector2_cross00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cross'",NULL);
#endif
  const godot::Vector2* p_other = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
real_t tolua_ret = (real_t)  self->cross(*p_other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cross of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_cross01
static int tolua_Vector2_godot_Vector2_cross01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cross'",NULL);
#endif
  real_t p_other = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->cross(p_other);
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
 return tolua_Vector2_godot_Vector2_cross00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: project of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_project00
static int tolua_Vector2_godot_Vector2_project00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'project'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->project(*p_vec);
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
 tolua_error(tolua_S,"#ferror in function 'project'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: plane_project of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_plane_project00
static int tolua_Vector2_godot_Vector2_plane_project00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'plane_project'",NULL);
#endif
  real_t p_d = ((real_t)  tolua_tonumber (tolua_S,2,0));
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->plane_project(p_d,*p_vec);
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
 tolua_error(tolua_S,"#ferror in function 'plane_project'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clamped of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_clamped00
static int tolua_Vector2_godot_Vector2_clamped00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'clamped'",NULL);
#endif
  real_t p_len = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->clamped(p_len);
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
 tolua_error(tolua_S,"#ferror in function 'clamped'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: linear_interpolate of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_linear_interpolate00
static int tolua_Vector2_godot_Vector2_linear_interpolate00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const godot::Vector2* p_a = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  const godot::Vector2* p_b = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  real_t p_t = ((real_t)  tolua_tonumber (tolua_S,4,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  godot::Vector2::linear_interpolate(*p_a,*p_b,p_t);
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
 tolua_error(tolua_S,"#ferror in function 'linear_interpolate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: linear_interpolate of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_linear_interpolate01
static int tolua_Vector2_godot_Vector2_linear_interpolate01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'linear_interpolate'",NULL);
#endif
  const godot::Vector2* p_b = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  real_t p_t = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->linear_interpolate(*p_b,p_t);
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
 return tolua_Vector2_godot_Vector2_linear_interpolate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: cubic_interpolate of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_cubic_interpolate00
static int tolua_Vector2_godot_Vector2_cubic_interpolate00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const godot::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'cubic_interpolate'",NULL);
#endif
  const godot::Vector2* p_b = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  const godot::Vector2* p_pre_a = ((const godot::Vector2*)  tolua_tousertype (tolua_S,3,0));
  const godot::Vector2* p_post_b = ((const godot::Vector2*)  tolua_tousertype (tolua_S,4,0));
  real_t p_t = ((real_t)  tolua_tonumber (tolua_S,5,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->cubic_interpolate(*p_b,*p_pre_a,*p_post_b,p_t);
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
 tolua_error(tolua_S,"#ferror in function 'cubic_interpolate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: slide of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_slide00
static int tolua_Vector2_godot_Vector2_slide00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'slide'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->slide(*p_vec);
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
 tolua_error(tolua_S,"#ferror in function 'slide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reflect of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_reflect00
static int tolua_Vector2_godot_Vector2_reflect00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'reflect'",NULL);
#endif
  const godot::Vector2* p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->reflect(*p_vec);
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
 tolua_error(tolua_S,"#ferror in function 'reflect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: angle of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_angle00
static int tolua_Vector2_godot_Vector2_angle00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'angle'",NULL);
#endif
  {
real_t tolua_ret = (real_t)  self->angle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_rotation of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_set_rotation00
static int tolua_Vector2_godot_Vector2_set_rotation00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'set_rotation'",NULL);
#endif
  real_t p_radians = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
self->set_rotation(p_radians);
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

/* method: abs of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_abs00
static int tolua_Vector2_godot_Vector2_abs00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'abs'",NULL);
#endif
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->abs();
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
 tolua_error(tolua_S,"#ferror in function 'abs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotated of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_rotated00
static int tolua_Vector2_godot_Vector2_rotated00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotated'",NULL);
#endif
  real_t p_by = ((real_t)  tolua_tonumber (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->rotated(p_by);
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
 tolua_error(tolua_S,"#ferror in function 'rotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tangent of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_tangent00
static int tolua_Vector2_godot_Vector2_tangent00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tangent'",NULL);
#endif
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->tangent();
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
 tolua_error(tolua_S,"#ferror in function 'tangent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: floor of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_floor00
static int tolua_Vector2_godot_Vector2_floor00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'floor'",NULL);
#endif
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->floor();
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
 tolua_error(tolua_S,"#ferror in function 'floor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: snapped of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_snapped00
static int tolua_Vector2_godot_Vector2_snapped00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'snapped'",NULL);
#endif
  const godot::Vector2* p_by = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  self->snapped(*p_by);
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
 tolua_error(tolua_S,"#ferror in function 'snapped'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: aspect of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_aspect00
static int tolua_Vector2_godot_Vector2_aspect00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'aspect'",NULL);
#endif
  {
real_t tolua_ret = (real_t)  self->aspect();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'aspect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operatorString of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2__String00
static int tolua_Vector2_godot_Vector2__String00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::Vector2* self = (godot::Vector2*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operatorString'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->operator  godot::String();
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

/* method: new of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_new00
static int tolua_Vector2_godot_Vector2_new00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  real_t p_x = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t p_y = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
godot::Vector2* tolua_ret = (godot::Vector2*)  Mtolua_new(godot::Vector2)(p_x,p_y);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Vector2");
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

/* method: new_local of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_new00_local
static int tolua_Vector2_godot_Vector2_new00_local(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  real_t p_x = ((real_t)  tolua_tonumber (tolua_S,2,0));
  real_t p_y = ((real_t)  tolua_tonumber (tolua_S,3,0));
  {
godot::Vector2* tolua_ret = (godot::Vector2*)  Mtolua_new(godot::Vector2)(p_x,p_y);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Vector2");
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

/* method: new of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_new01
static int tolua_Vector2_godot_Vector2_new01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
godot::Vector2* tolua_ret = (godot::Vector2*)  Mtolua_new(godot::Vector2)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Vector2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vector2_godot_Vector2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::Vector2 */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot_Vector2_new01_local
static int tolua_Vector2_godot_Vector2_new01_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::Vector2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
godot::Vector2* tolua_ret = (godot::Vector2*)  Mtolua_new(godot::Vector2)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::Vector2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Vector2_godot_Vector2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: operator* */
#ifndef TOLUA_DISABLE_tolua_Vector2_godot__mul00
static int tolua_Vector2_godot__mul00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  real_t godot__p_scalar = ((real_t)  tolua_tonumber (tolua_S,1,0));
  const godot::Vector2* godot__p_vec = ((const godot::Vector2*)  tolua_tousertype (tolua_S,2,0));
  {
godot::Vector2 tolua_ret = (godot::Vector2)  operator*(godot__p_scalar,*godot__p_vec);
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
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Vector2_open (lua_State* tolua_S){
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"godot",0);
  tolua_beginmodule(tolua_S,"godot");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"String","godot::String","",tolua_collect_godot__String);
   #else
   tolua_cclass(tolua_S,"String","godot::String","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"String");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector2","godot::Vector2","",tolua_collect_godot__Vector2);
   #else
   tolua_cclass(tolua_S,"Vector2","godot::Vector2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector2");
    tolua_variable(tolua_S,"x",tolua_get_godot__Vector2_x,tolua_set_godot__Vector2_x);
    tolua_variable(tolua_S,"width",tolua_get_godot__Vector2_width,tolua_set_godot__Vector2_width);
    tolua_variable(tolua_S,"y",tolua_get_godot__Vector2_y,tolua_set_godot__Vector2_y);
    tolua_variable(tolua_S,"height",tolua_get_godot__Vector2_height,tolua_set_godot__Vector2_height);
    tolua_function(tolua_S,".seti",tolua_Vector2_godot_Vector2__seti00);
    tolua_function(tolua_S,".geti",tolua_Vector2_godot_Vector2__geti00);
    tolua_function(tolua_S,".geti",tolua_Vector2_godot_Vector2__geti01);
    tolua_function(tolua_S,".add",tolua_Vector2_godot_Vector2__add00);
    tolua_function(tolua_S,".sub",tolua_Vector2_godot_Vector2__sub00);
    tolua_function(tolua_S,".mul",tolua_Vector2_godot_Vector2__mul00);
    tolua_function(tolua_S,".mul",tolua_Vector2_godot_Vector2__mul01);
    tolua_function(tolua_S,".div",tolua_Vector2_godot_Vector2__div00);
    tolua_function(tolua_S,".div",tolua_Vector2_godot_Vector2__div01);
    tolua_function(tolua_S,".sub",tolua_Vector2_godot_Vector2__sub01);
    tolua_function(tolua_S,".eq",tolua_Vector2_godot_Vector2__eq00);
    tolua_function(tolua_S,".lt",tolua_Vector2_godot_Vector2__lt00);
    tolua_function(tolua_S,".le",tolua_Vector2_godot_Vector2__le00);
    tolua_function(tolua_S,"normalize",tolua_Vector2_godot_Vector2_normalize00);
    tolua_function(tolua_S,"normalized",tolua_Vector2_godot_Vector2_normalized00);
    tolua_function(tolua_S,"length",tolua_Vector2_godot_Vector2_length00);
    tolua_function(tolua_S,"length_squared",tolua_Vector2_godot_Vector2_length_squared00);
    tolua_function(tolua_S,"distance_to",tolua_Vector2_godot_Vector2_distance_to00);
    tolua_function(tolua_S,"distance_squared_to",tolua_Vector2_godot_Vector2_distance_squared_to00);
    tolua_function(tolua_S,"angle_to",tolua_Vector2_godot_Vector2_angle_to00);
    tolua_function(tolua_S,"angle_to_point",tolua_Vector2_godot_Vector2_angle_to_point00);
    tolua_function(tolua_S,"dot",tolua_Vector2_godot_Vector2_dot00);
    tolua_function(tolua_S,"cross",tolua_Vector2_godot_Vector2_cross00);
    tolua_function(tolua_S,"cross",tolua_Vector2_godot_Vector2_cross01);
    tolua_function(tolua_S,"project",tolua_Vector2_godot_Vector2_project00);
    tolua_function(tolua_S,"plane_project",tolua_Vector2_godot_Vector2_plane_project00);
    tolua_function(tolua_S,"clamped",tolua_Vector2_godot_Vector2_clamped00);
    tolua_function(tolua_S,"linear_interpolate",tolua_Vector2_godot_Vector2_linear_interpolate00);
    tolua_function(tolua_S,"linear_interpolate",tolua_Vector2_godot_Vector2_linear_interpolate01);
    tolua_function(tolua_S,"cubic_interpolate",tolua_Vector2_godot_Vector2_cubic_interpolate00);
    tolua_function(tolua_S,"slide",tolua_Vector2_godot_Vector2_slide00);
    tolua_function(tolua_S,"reflect",tolua_Vector2_godot_Vector2_reflect00);
    tolua_function(tolua_S,"angle",tolua_Vector2_godot_Vector2_angle00);
    tolua_function(tolua_S,"set_rotation",tolua_Vector2_godot_Vector2_set_rotation00);
    tolua_function(tolua_S,"abs",tolua_Vector2_godot_Vector2_abs00);
    tolua_function(tolua_S,"rotated",tolua_Vector2_godot_Vector2_rotated00);
    tolua_function(tolua_S,"tangent",tolua_Vector2_godot_Vector2_tangent00);
    tolua_function(tolua_S,"floor",tolua_Vector2_godot_Vector2_floor00);
    tolua_function(tolua_S,"snapped",tolua_Vector2_godot_Vector2_snapped00);
    tolua_function(tolua_S,"aspect",tolua_Vector2_godot_Vector2_aspect00);
    tolua_function(tolua_S,".String",tolua_Vector2_godot_Vector2__String00);
    tolua_function(tolua_S,"new",tolua_Vector2_godot_Vector2_new00);
    tolua_function(tolua_S,"new_local",tolua_Vector2_godot_Vector2_new00_local);
    tolua_function(tolua_S,".call",tolua_Vector2_godot_Vector2_new00_local);
    tolua_function(tolua_S,"new",tolua_Vector2_godot_Vector2_new01);
    tolua_function(tolua_S,"new_local",tolua_Vector2_godot_Vector2_new01_local);
    tolua_function(tolua_S,".call",tolua_Vector2_godot_Vector2_new01_local);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,".mul",tolua_Vector2_godot__mul00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Vector2 (lua_State* tolua_S) {
 return tolua_Vector2_open(tolua_S);
};
#endif

