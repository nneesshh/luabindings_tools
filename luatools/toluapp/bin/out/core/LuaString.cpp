/*
** Lua binding: String
** Generated automatically by tolua++-1.0.93 on Mon Nov  5 15:37:48 2018.
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
TOLUA_API int  tolua_String_open (lua_State* tolua_S);

#include <stdint.h>
#include "UsingGodot.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_godot__CharString (lua_State* tolua_S){
  godot::CharString* self = (godot::CharString*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__PoolByteArray (lua_State* tolua_S){
  godot::PoolByteArray* self = (godot::PoolByteArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__PoolRealArray (lua_State* tolua_S){
  godot::PoolRealArray* self = (godot::PoolRealArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__NodePath (lua_State* tolua_S){
  godot::NodePath* self = (godot::NodePath*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__PoolStringArray (lua_State* tolua_S){
  godot::PoolStringArray* self = (godot::PoolStringArray*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}

static int tolua_collect_godot__String (lua_State* tolua_S){
  godot::String* self = (godot::String*) tolua_tousertype(tolua_S,1,0);
  Mtolua_delete(self);
  return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S){
}

 static godot_object *__static_object_godot__String = nullptr;
/* method: new of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new00
static int tolua_String_godot_String_new00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
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

/* method: new_local of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new00_local
static int tolua_String_godot_String_new00_local(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
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

/* method: new of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new01
static int tolua_String_godot_String_new01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* contents = ((const char*)  tolua_tostring (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(contents);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new01_local
static int tolua_String_godot_String_new01_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* contents = ((const char*)  tolua_tostring (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(contents);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new02
static int tolua_String_godot_String_new02(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t* contents = ((const wchar_t*)  tolua_tostring (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(contents);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new02_local
static int tolua_String_godot_String_new02_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t* contents = ((const wchar_t*)  tolua_tostring (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(contents);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new03
static int tolua_String_godot_String_new03(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t c = ((const wchar_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(c);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new03_local
static int tolua_String_godot_String_new03_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t c = ((const wchar_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(c);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new04
static int tolua_String_godot_String_new04(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::String* other = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(*other);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_new04_local
static int tolua_String_godot_String_new04_local(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const godot::String* other = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String* tolua_ret = (godot::String*)  Mtolua_new(godot::String)(*other);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"godot::String");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_delete00
static int tolua_String_godot_String_delete00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'delete'",NULL);
#endif
 godot::api->godot_object_destroy((godot_object *)self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: num of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_num00
static int tolua_String_godot_String_num00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isinteger(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double p_num = ((double)  tolua_tonumber (tolua_S,2,0));
  int p_decimals = ((int)  tolua_tointeger (tolua_S,3,-1));
  {
godot::String tolua_ret = (godot::String)  godot::String::num(p_num,p_decimals);
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
 tolua_error(tolua_S,"#ferror in function 'num'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: num_scientific of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_num_scientific00
static int tolua_String_godot_String_num_scientific00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double p_num = ((double)  tolua_tonumber (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  godot::String::num_scientific(p_num);
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
 tolua_error(tolua_S,"#ferror in function 'num_scientific'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: num_real of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_num_real00
static int tolua_String_godot_String_num_real00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double p_num = ((double)  tolua_tonumber (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  godot::String::num_real(p_num);
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
 tolua_error(tolua_S,"#ferror in function 'num_real'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: num_int64 of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_num_int6400
static int tolua_String_godot_String_num_int6400(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isinteger(tolua_S,3,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int64_t p_num = ((int64_t)  tolua_tointeger (tolua_S,2,0));
  int base = ((int)  tolua_tointeger (tolua_S,3,10));
  bool capitalize_hex = ((bool)  tolua_toboolean (tolua_S,4,false));
  {
godot::String tolua_ret = (godot::String)  godot::String::num_int64(p_num,base,capitalize_hex);
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
 tolua_error(tolua_S,"#ferror in function 'num_int64'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: chr of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_chr00
static int tolua_String_godot_String_chr00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot_char_type p_char = ((godot_char_type)  tolua_tointeger (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  godot::String::chr(p_char);
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
 tolua_error(tolua_S,"#ferror in function 'chr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: md5 of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_md500
static int tolua_String_godot_String_md500(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const uint8_t p_md5 = ((const uint8_t)  tolua_tointeger (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  godot::String::md5(&p_md5);
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
   tolua_pushinteger(tolua_S,(lua_Integer)p_md5);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'md5'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hex_encode_buffer of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_hex_encode_buffer00
static int tolua_String_godot_String_hex_encode_buffer00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isinteger(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const uint8_t p_buffer = ((const uint8_t)  tolua_tointeger (tolua_S,2,0));
  int p_len = ((int)  tolua_tointeger (tolua_S,3,0));
  {
godot::String tolua_ret = (godot::String)  godot::String::hex_encode_buffer(&p_buffer,p_len);
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
   tolua_pushinteger(tolua_S,(lua_Integer)p_buffer);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hex_encode_buffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__seti00
static int tolua_String_godot_String__seti00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isinteger(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator&[]'",NULL);
#endif
  const int idx = ((const int)  tolua_tointeger (tolua_S,2,0));
  wchar_t tolua_value = ((wchar_t)  tolua_tointeger (tolua_S,3,0));
  self->operator[](idx-1) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__geti00
static int tolua_String_godot_String__geti00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator[]'",NULL);
#endif
  const int idx = ((const int)  tolua_tointeger (tolua_S,2,0));
  {
wchar_t tolua_ret = (wchar_t)  self->operator[](idx-1);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
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

/* method: operator[] of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__geti01
static int tolua_String_godot_String__geti01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator[]'",NULL);
#endif
  const int idx = ((const int)  tolua_tointeger (tolua_S,2,0));
  {
wchar_t tolua_ret = (wchar_t)  self->operator[](idx-1);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String__geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__eq00
static int tolua_String_godot_String__eq00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator=='",NULL);
#endif
  const godot::String* s = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->operator==(*s);
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

/* method: operator+ of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__add00
static int tolua_String_godot_String__add00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator+'",NULL);
#endif
  const godot::String* s = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->operator+(*s);
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
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__lt00
static int tolua_String_godot_String__lt00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator<'",NULL);
#endif
  const godot::String* s = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->operator<(*s);
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

/* method: operator<= of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__le00
static int tolua_String_godot_String__le00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operator<='",NULL);
#endif
  const godot::String* s = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->operator<=(*s);
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

/* method: operatorNodePath of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String__NodePath00
static int tolua_String_godot_String__NodePath00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'operatorNodePath'",NULL);
#endif
  {
godot::NodePath tolua_ret = (godot::NodePath)  self->operator  godot::NodePath();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::NodePath)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::NodePath");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::NodePath));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::NodePath");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.NodePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_length00
static int tolua_String_godot_String_length00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
#endif
  {
int tolua_ret = (int)  self->length();
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
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

/* method: unicode_str of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_unicode_str00
static int tolua_String_godot_String_unicode_str00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'unicode_str'",NULL);
#endif
  {
const wchar_t* tolua_ret = (const wchar_t*)  self->unicode_str();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unicode_str'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alloc_c_string of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_alloc_c_string00
static int tolua_String_godot_String_alloc_c_string00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'alloc_c_string'",NULL);
#endif
  {
char* tolua_ret = (char*)  self->alloc_c_string();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alloc_c_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: utf8 of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_utf800
static int tolua_String_godot_String_utf800(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'utf8'",NULL);
#endif
  {
godot::CharString tolua_ret = (godot::CharString)  self->utf8();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::CharString)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::CharString");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::CharString));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::CharString");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'utf8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ascii of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_ascii00
static int tolua_String_godot_String_ascii00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ascii'",NULL);
#endif
  bool p_extended = ((bool)  tolua_toboolean (tolua_S,2,false));
  {
godot::CharString tolua_ret = (godot::CharString)  self->ascii(p_extended);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::CharString)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::CharString");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::CharString));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::CharString");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ascii'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_find00
static int tolua_String_godot_String_find00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'find'",NULL);
#endif
  godot::String p_what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
int64_t tolua_ret = (int64_t)  self->find(p_what);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find_from of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_find_from00
static int tolua_String_godot_String_find_from00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isinteger(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'find_from'",NULL);
#endif
  godot::String p_what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  int64_t p_from = ((int64_t)  tolua_tointeger (tolua_S,3,0));
  {
int64_t tolua_ret = (int64_t)  self->find_from(p_what,p_from);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_from'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: begins_with of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_begins_with00
static int tolua_String_godot_String_begins_with00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'begins_with'",NULL);
#endif
  godot::String* s = ((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->begins_with(*s);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'begins_with'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: begins_with_char_array of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_begins_with_char_array00
static int tolua_String_godot_String_begins_with_char_array00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'begins_with_char_array'",NULL);
#endif
  const char* p_char_array = ((const char*)  tolua_tostring (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->begins_with_char_array(p_char_array);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'begins_with_char_array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bigrams of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_bigrams00
static int tolua_String_godot_String_bigrams00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bigrams'",NULL);
#endif
  {
godot::PoolStringArray tolua_ret = (godot::PoolStringArray)  self->bigrams();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolStringArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolStringArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::PoolStringArray));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolStringArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bigrams'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: c_escape of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_c_escape00
static int tolua_String_godot_String_c_escape00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'c_escape'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->c_escape();
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
 tolua_error(tolua_S,"#ferror in function 'c_escape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: c_unescape of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_c_unescape00
static int tolua_String_godot_String_c_unescape00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'c_unescape'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->c_unescape();
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
 tolua_error(tolua_S,"#ferror in function 'c_unescape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: capitalize of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_capitalize00
static int tolua_String_godot_String_capitalize00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'capitalize'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->capitalize();
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
 tolua_error(tolua_S,"#ferror in function 'capitalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: empty of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_empty00
static int tolua_String_godot_String_empty00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'empty'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->empty();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'empty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ends_with of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_ends_with00
static int tolua_String_godot_String_ends_with00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ends_with'",NULL);
#endif
  godot::String* text = ((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->ends_with(*text);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ends_with'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: erase of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_erase00
static int tolua_String_godot_String_erase00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isinteger(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'erase'",NULL);
#endif
  int position = ((int)  tolua_tointeger (tolua_S,2,0));
  int chars = ((int)  tolua_tointeger (tolua_S,3,0));
  {
self->erase(position,chars);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_find01
static int tolua_String_godot_String_find01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isinteger(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'find'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  int from = ((int)  tolua_tointeger (tolua_S,3,0));
  {
int tolua_ret = (int)  self->find(what,from);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_String_godot_String_find00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: find_last of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_find_last00
static int tolua_String_godot_String_find_last00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'find_last'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
int tolua_ret = (int)  self->find_last(what);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_last'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: findn of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_findn00
static int tolua_String_godot_String_findn00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isinteger(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'findn'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  int from = ((int)  tolua_tointeger (tolua_S,3,0));
  {
int tolua_ret = (int)  self->findn(what,from);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: format of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_format00
static int tolua_String_godot_String_format00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::Variant",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'format'",NULL);
#endif
  godot::Variant values = *((godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->format(values);
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
 tolua_error(tolua_S,"#ferror in function 'format'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: format of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_format01
static int tolua_String_godot_String_format01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::Variant",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'format'",NULL);
#endif
  godot::Variant values = *((godot::Variant*)  tolua_tousertype (tolua_S,2,0));
  godot::String placeholder = *((godot::String*)  tolua_tousertype (tolua_S,3,0));
  {
godot::String tolua_ret = (godot::String)  self->format(values,placeholder);
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
tolua_lerror:
 return tolua_String_godot_String_format00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_base_dir of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_get_base_dir00
static int tolua_String_godot_String_get_base_dir00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_base_dir'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->get_base_dir();
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
 tolua_error(tolua_S,"#ferror in function 'get_base_dir'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_basename of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_get_basename00
static int tolua_String_godot_String_get_basename00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_basename'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->get_basename();
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
 tolua_error(tolua_S,"#ferror in function 'get_basename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_extension of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_get_extension00
static int tolua_String_godot_String_get_extension00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_extension'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->get_extension();
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
 tolua_error(tolua_S,"#ferror in function 'get_extension'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_file of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_get_file00
static int tolua_String_godot_String_get_file00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_file'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->get_file();
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
 tolua_error(tolua_S,"#ferror in function 'get_file'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hash of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_hash00
static int tolua_String_godot_String_hash00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hash'",NULL);
#endif
  {
int tolua_ret = (int)  self->hash();
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hash'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hex_to_int of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_hex_to_int00
static int tolua_String_godot_String_hex_to_int00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hex_to_int'",NULL);
#endif
  {
int tolua_ret = (int)  self->hex_to_int();
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hex_to_int'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insert of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_insert00
static int tolua_String_godot_String_insert00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'insert'",NULL);
#endif
  int position = ((int)  tolua_tointeger (tolua_S,2,0));
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,3,0));
  {
godot::String tolua_ret = (godot::String)  self->insert(position,what);
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
 tolua_error(tolua_S,"#ferror in function 'insert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_abs_path of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_abs_path00
static int tolua_String_godot_String_is_abs_path00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_abs_path'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_abs_path();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_abs_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_rel_path of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_rel_path00
static int tolua_String_godot_String_is_rel_path00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_rel_path'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_rel_path();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_rel_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_subsequence_of of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_subsequence_of00
static int tolua_String_godot_String_is_subsequence_of00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_subsequence_of'",NULL);
#endif
  godot::String text = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->is_subsequence_of(text);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_subsequence_of'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_subsequence_ofi of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_subsequence_ofi00
static int tolua_String_godot_String_is_subsequence_ofi00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_subsequence_ofi'",NULL);
#endif
  godot::String text = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->is_subsequence_ofi(text);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_subsequence_ofi'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_valid_float of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_valid_float00
static int tolua_String_godot_String_is_valid_float00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_valid_float'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_valid_float();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_valid_float'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_valid_html_color of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_valid_html_color00
static int tolua_String_godot_String_is_valid_html_color00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_valid_html_color'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_valid_html_color();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_valid_html_color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_valid_identifier of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_valid_identifier00
static int tolua_String_godot_String_is_valid_identifier00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_valid_identifier'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_valid_identifier();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_valid_identifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_valid_integer of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_valid_integer00
static int tolua_String_godot_String_is_valid_integer00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_valid_integer'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_valid_integer();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_valid_integer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: is_valid_ip_address of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_is_valid_ip_address00
static int tolua_String_godot_String_is_valid_ip_address00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'is_valid_ip_address'",NULL);
#endif
  {
bool tolua_ret = (bool)  self->is_valid_ip_address();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'is_valid_ip_address'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: json_escape of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_json_escape00
static int tolua_String_godot_String_json_escape00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'json_escape'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->json_escape();
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
 tolua_error(tolua_S,"#ferror in function 'json_escape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: left of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_left00
static int tolua_String_godot_String_left00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'left'",NULL);
#endif
  int position = ((int)  tolua_tointeger (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->left(position);
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
 tolua_error(tolua_S,"#ferror in function 'left'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: match of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_match00
static int tolua_String_godot_String_match00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'match'",NULL);
#endif
  godot::String expr = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->match(expr);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'match'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: matchn of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_matchn00
static int tolua_String_godot_String_matchn00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'matchn'",NULL);
#endif
  godot::String expr = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
bool tolua_ret = (bool)  self->matchn(expr);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'matchn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: md5_buffer of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_md5_buffer00
static int tolua_String_godot_String_md5_buffer00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'md5_buffer'",NULL);
#endif
  {
godot::PoolByteArray tolua_ret = (godot::PoolByteArray)  self->md5_buffer();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolByteArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolByteArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::PoolByteArray));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolByteArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'md5_buffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: md5_text of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_md5_text00
static int tolua_String_godot_String_md5_text00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'md5_text'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->md5_text();
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
 tolua_error(tolua_S,"#ferror in function 'md5_text'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ord_at of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_ord_at00
static int tolua_String_godot_String_ord_at00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ord_at'",NULL);
#endif
  int at = ((int)  tolua_tointeger (tolua_S,2,0));
  {
int tolua_ret = (int)  self->ord_at(at);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ord_at'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pad_decimals of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_pad_decimals00
static int tolua_String_godot_String_pad_decimals00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pad_decimals'",NULL);
#endif
  int digits = ((int)  tolua_tointeger (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->pad_decimals(digits);
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
 tolua_error(tolua_S,"#ferror in function 'pad_decimals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pad_zeros of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_pad_zeros00
static int tolua_String_godot_String_pad_zeros00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pad_zeros'",NULL);
#endif
  int digits = ((int)  tolua_tointeger (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->pad_zeros(digits);
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
 tolua_error(tolua_S,"#ferror in function 'pad_zeros'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: percent_decode of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_percent_decode00
static int tolua_String_godot_String_percent_decode00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'percent_decode'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->percent_decode();
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
 tolua_error(tolua_S,"#ferror in function 'percent_decode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: percent_encode of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_percent_encode00
static int tolua_String_godot_String_percent_encode00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'percent_encode'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->percent_encode();
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
 tolua_error(tolua_S,"#ferror in function 'percent_encode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: plus_file of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_plus_file00
static int tolua_String_godot_String_plus_file00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'plus_file'",NULL);
#endif
  godot::String file = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->plus_file(file);
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
 tolua_error(tolua_S,"#ferror in function 'plus_file'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: replace of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_replace00
static int tolua_String_godot_String_replace00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'replace'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  godot::String forwhat = *((godot::String*)  tolua_tousertype (tolua_S,3,0));
  {
godot::String tolua_ret = (godot::String)  self->replace(what,forwhat);
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
 tolua_error(tolua_S,"#ferror in function 'replace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: replacen of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_replacen00
static int tolua_String_godot_String_replacen00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'replacen'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  godot::String forwhat = *((godot::String*)  tolua_tousertype (tolua_S,3,0));
  {
godot::String tolua_ret = (godot::String)  self->replacen(what,forwhat);
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
 tolua_error(tolua_S,"#ferror in function 'replacen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rfind of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_rfind00
static int tolua_String_godot_String_rfind00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isinteger(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rfind'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  int from = ((int)  tolua_tointeger (tolua_S,3,-1));
  {
int tolua_ret = (int)  self->rfind(what,from);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rfind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rfindn of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_rfindn00
static int tolua_String_godot_String_rfindn00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isinteger(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rfindn'",NULL);
#endif
  godot::String what = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  int from = ((int)  tolua_tointeger (tolua_S,3,-1));
  {
int tolua_ret = (int)  self->rfindn(what,from);
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rfindn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: right of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_right00
static int tolua_String_godot_String_right00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'right'",NULL);
#endif
  int position = ((int)  tolua_tointeger (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  self->right(position);
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
 tolua_error(tolua_S,"#ferror in function 'right'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sha256_buffer of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_sha256_buffer00
static int tolua_String_godot_String_sha256_buffer00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sha256_buffer'",NULL);
#endif
  {
godot::PoolByteArray tolua_ret = (godot::PoolByteArray)  self->sha256_buffer();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolByteArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolByteArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::PoolByteArray));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolByteArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sha256_buffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sha256_text of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_sha256_text00
static int tolua_String_godot_String_sha256_text00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sha256_text'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->sha256_text();
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
 tolua_error(tolua_S,"#ferror in function 'sha256_text'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: similarity of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_similarity00
static int tolua_String_godot_String_similarity00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'similarity'",NULL);
#endif
  godot::String text = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
float tolua_ret = (float)  self->similarity(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'similarity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: split of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_split00
static int tolua_String_godot_String_split00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'split'",NULL);
#endif
  godot::String divisor = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  bool allow_empty = ((bool)  tolua_toboolean (tolua_S,3,true));
  {
godot::PoolStringArray tolua_ret = (godot::PoolStringArray)  self->split(divisor,allow_empty);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolStringArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolStringArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::PoolStringArray));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolStringArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'split'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: split_floats of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_split_floats00
static int tolua_String_godot_String_split_floats00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"godot::String",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'split_floats'",NULL);
#endif
  godot::String divisor = *((godot::String*)  tolua_tousertype (tolua_S,2,0));
  bool allow_empty = ((bool)  tolua_toboolean (tolua_S,3,true));
  {
godot::PoolRealArray tolua_ret = (godot::PoolRealArray)  self->split_floats(divisor,allow_empty);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new(godot::PoolRealArray)(tolua_ret);
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolRealArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(godot::PoolRealArray));
    tolua_pushusertype(tolua_S,tolua_obj,"godot::PoolRealArray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'split_floats'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: strip_edges of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_strip_edges00
static int tolua_String_godot_String_strip_edges00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'strip_edges'",NULL);
#endif
  bool left = ((bool)  tolua_toboolean (tolua_S,2,true));
  bool right = ((bool)  tolua_toboolean (tolua_S,3,true));
  {
godot::String tolua_ret = (godot::String)  self->strip_edges(left,right);
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
 tolua_error(tolua_S,"#ferror in function 'strip_edges'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: substr of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_substr00
static int tolua_String_godot_String_substr00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isinteger(tolua_S,2,0,&tolua_err) ||
     !tolua_isinteger(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'substr'",NULL);
#endif
  int from = ((int)  tolua_tointeger (tolua_S,2,0));
  int len = ((int)  tolua_tointeger (tolua_S,3,0));
  {
godot::String tolua_ret = (godot::String)  self->substr(from,len);
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
 tolua_error(tolua_S,"#ferror in function 'substr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: to_float of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_to_float00
static int tolua_String_godot_String_to_float00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'to_float'",NULL);
#endif
  {
float tolua_ret = (float)  self->to_float();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'to_float'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: to_int of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_to_int00
static int tolua_String_godot_String_to_int00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'to_int'",NULL);
#endif
  {
int64_t tolua_ret = (int64_t)  self->to_int();
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'to_int'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: to_lower of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_to_lower00
static int tolua_String_godot_String_to_lower00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'to_lower'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->to_lower();
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
 tolua_error(tolua_S,"#ferror in function 'to_lower'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: to_upper of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_to_upper00
static int tolua_String_godot_String_to_upper00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'to_upper'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->to_upper();
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
 tolua_error(tolua_S,"#ferror in function 'to_upper'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xml_escape of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_xml_escape00
static int tolua_String_godot_String_xml_escape00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xml_escape'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->xml_escape();
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
 tolua_error(tolua_S,"#ferror in function 'xml_escape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xml_unescape of class  godot::String */
#ifndef TOLUA_DISABLE_tolua_String_godot_String_xml_unescape00
static int tolua_String_godot_String_xml_unescape00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::String* self = (godot::String*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xml_unescape'",NULL);
#endif
  {
godot::String tolua_ret = (godot::String)  self->xml_unescape();
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
 tolua_error(tolua_S,"#ferror in function 'xml_unescape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  godot::CharString */
#ifndef TOLUA_DISABLE_tolua_String_godot_CharString_delete00
static int tolua_String_godot_CharString_delete00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"godot::CharString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::CharString* self = (godot::CharString*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'delete'",NULL);
#endif
 godot::api->godot_object_destroy((godot_object *)self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  godot::CharString */
#ifndef TOLUA_DISABLE_tolua_String_godot_CharString_length00
static int tolua_String_godot_CharString_length00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::CharString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::CharString* self = (godot::CharString*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'length'",NULL);
#endif
  {
int tolua_ret = (int)  self->length();
   tolua_pushinteger(tolua_S,(lua_Integer)tolua_ret);
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

/* method: get_data of class  godot::CharString */
#ifndef TOLUA_DISABLE_tolua_String_godot_CharString_get_data00
static int tolua_String_godot_CharString_get_data00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const godot::CharString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  godot::CharString* self = (godot::CharString*) tolua_tousertype (tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'get_data'",NULL);
#endif
  {
const char* tolua_ret = (const char*)  self->get_data();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: operator+ */
#ifndef TOLUA_DISABLE_tolua_String_godot__add00
static int tolua_String_godot__add00(lua_State* tolua_S){
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* godot__a = ((const char*)  tolua_tostring (tolua_S,1,0));
  const godot::String* godot__b = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  operator+(godot__a,*godot__b);
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
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: operator+ */
#ifndef TOLUA_DISABLE_tolua_String_godot__add01
static int tolua_String_godot__add01(lua_State* tolua_S){
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const godot::String",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const wchar_t* godot__a = ((const wchar_t*)  tolua_tostring (tolua_S,1,0));
  const godot::String* godot__b = ((const godot::String*)  tolua_tousertype (tolua_S,2,0));
  {
godot::String tolua_ret = (godot::String)  operator+(godot__a,*godot__b);
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
tolua_lerror:
 return tolua_String_godot__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_String_open (lua_State* tolua_S){
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"godot",0);
  tolua_beginmodule(tolua_S,"godot");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"NodePath","godot::NodePath","",tolua_collect_godot__NodePath);
   #else
   tolua_cclass(tolua_S,"NodePath","godot::NodePath","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"NodePath");
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Variant","godot::Variant","",NULL);
   tolua_beginmodule(tolua_S,"Variant");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"PoolByteArray","godot::PoolByteArray","",tolua_collect_godot__PoolByteArray);
   #else
   tolua_cclass(tolua_S,"PoolByteArray","godot::PoolByteArray","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"PoolByteArray");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"PoolRealArray","godot::PoolRealArray","",tolua_collect_godot__PoolRealArray);
   #else
   tolua_cclass(tolua_S,"PoolRealArray","godot::PoolRealArray","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"PoolRealArray");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"PoolStringArray","godot::PoolStringArray","",tolua_collect_godot__PoolStringArray);
   #else
   tolua_cclass(tolua_S,"PoolStringArray","godot::PoolStringArray","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"PoolStringArray");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"String","godot::String","",tolua_collect_godot__String);
   #else
   tolua_cclass(tolua_S,"String","godot::String","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"String");
    tolua_function(tolua_S,"new",tolua_String_godot_String_new00);
    tolua_function(tolua_S,"new_local",tolua_String_godot_String_new00_local);
    tolua_function(tolua_S,".call",tolua_String_godot_String_new00_local);
    tolua_function(tolua_S,"new",tolua_String_godot_String_new01);
    tolua_function(tolua_S,"new_local",tolua_String_godot_String_new01_local);
    tolua_function(tolua_S,".call",tolua_String_godot_String_new01_local);
    tolua_function(tolua_S,"new",tolua_String_godot_String_new02);
    tolua_function(tolua_S,"new_local",tolua_String_godot_String_new02_local);
    tolua_function(tolua_S,".call",tolua_String_godot_String_new02_local);
    tolua_function(tolua_S,"new",tolua_String_godot_String_new03);
    tolua_function(tolua_S,"new_local",tolua_String_godot_String_new03_local);
    tolua_function(tolua_S,".call",tolua_String_godot_String_new03_local);
    tolua_function(tolua_S,"new",tolua_String_godot_String_new04);
    tolua_function(tolua_S,"new_local",tolua_String_godot_String_new04_local);
    tolua_function(tolua_S,".call",tolua_String_godot_String_new04_local);
    tolua_function(tolua_S,"delete",tolua_String_godot_String_delete00);
    tolua_function(tolua_S,"num",tolua_String_godot_String_num00);
    tolua_function(tolua_S,"num_scientific",tolua_String_godot_String_num_scientific00);
    tolua_function(tolua_S,"num_real",tolua_String_godot_String_num_real00);
    tolua_function(tolua_S,"num_int64",tolua_String_godot_String_num_int6400);
    tolua_function(tolua_S,"chr",tolua_String_godot_String_chr00);
    tolua_function(tolua_S,"md5",tolua_String_godot_String_md500);
    tolua_function(tolua_S,"hex_encode_buffer",tolua_String_godot_String_hex_encode_buffer00);
    tolua_function(tolua_S,".seti",tolua_String_godot_String__seti00);
    tolua_function(tolua_S,".geti",tolua_String_godot_String__geti00);
    tolua_function(tolua_S,".geti",tolua_String_godot_String__geti01);
    tolua_function(tolua_S,".eq",tolua_String_godot_String__eq00);
    tolua_function(tolua_S,".add",tolua_String_godot_String__add00);
    tolua_function(tolua_S,".lt",tolua_String_godot_String__lt00);
    tolua_function(tolua_S,".le",tolua_String_godot_String__le00);
    tolua_function(tolua_S,".NodePath",tolua_String_godot_String__NodePath00);
    tolua_function(tolua_S,"length",tolua_String_godot_String_length00);
    tolua_function(tolua_S,"unicode_str",tolua_String_godot_String_unicode_str00);
    tolua_function(tolua_S,"alloc_c_string",tolua_String_godot_String_alloc_c_string00);
    tolua_function(tolua_S,"utf8",tolua_String_godot_String_utf800);
    tolua_function(tolua_S,"ascii",tolua_String_godot_String_ascii00);
    tolua_function(tolua_S,"find",tolua_String_godot_String_find00);
    tolua_function(tolua_S,"find_from",tolua_String_godot_String_find_from00);
    tolua_function(tolua_S,"begins_with",tolua_String_godot_String_begins_with00);
    tolua_function(tolua_S,"begins_with_char_array",tolua_String_godot_String_begins_with_char_array00);
    tolua_function(tolua_S,"bigrams",tolua_String_godot_String_bigrams00);
    tolua_function(tolua_S,"c_escape",tolua_String_godot_String_c_escape00);
    tolua_function(tolua_S,"c_unescape",tolua_String_godot_String_c_unescape00);
    tolua_function(tolua_S,"capitalize",tolua_String_godot_String_capitalize00);
    tolua_function(tolua_S,"empty",tolua_String_godot_String_empty00);
    tolua_function(tolua_S,"ends_with",tolua_String_godot_String_ends_with00);
    tolua_function(tolua_S,"erase",tolua_String_godot_String_erase00);
    tolua_function(tolua_S,"find",tolua_String_godot_String_find01);
    tolua_function(tolua_S,"find_last",tolua_String_godot_String_find_last00);
    tolua_function(tolua_S,"findn",tolua_String_godot_String_findn00);
    tolua_function(tolua_S,"format",tolua_String_godot_String_format00);
    tolua_function(tolua_S,"format",tolua_String_godot_String_format01);
    tolua_function(tolua_S,"get_base_dir",tolua_String_godot_String_get_base_dir00);
    tolua_function(tolua_S,"get_basename",tolua_String_godot_String_get_basename00);
    tolua_function(tolua_S,"get_extension",tolua_String_godot_String_get_extension00);
    tolua_function(tolua_S,"get_file",tolua_String_godot_String_get_file00);
    tolua_function(tolua_S,"hash",tolua_String_godot_String_hash00);
    tolua_function(tolua_S,"hex_to_int",tolua_String_godot_String_hex_to_int00);
    tolua_function(tolua_S,"insert",tolua_String_godot_String_insert00);
    tolua_function(tolua_S,"is_abs_path",tolua_String_godot_String_is_abs_path00);
    tolua_function(tolua_S,"is_rel_path",tolua_String_godot_String_is_rel_path00);
    tolua_function(tolua_S,"is_subsequence_of",tolua_String_godot_String_is_subsequence_of00);
    tolua_function(tolua_S,"is_subsequence_ofi",tolua_String_godot_String_is_subsequence_ofi00);
    tolua_function(tolua_S,"is_valid_float",tolua_String_godot_String_is_valid_float00);
    tolua_function(tolua_S,"is_valid_html_color",tolua_String_godot_String_is_valid_html_color00);
    tolua_function(tolua_S,"is_valid_identifier",tolua_String_godot_String_is_valid_identifier00);
    tolua_function(tolua_S,"is_valid_integer",tolua_String_godot_String_is_valid_integer00);
    tolua_function(tolua_S,"is_valid_ip_address",tolua_String_godot_String_is_valid_ip_address00);
    tolua_function(tolua_S,"json_escape",tolua_String_godot_String_json_escape00);
    tolua_function(tolua_S,"left",tolua_String_godot_String_left00);
    tolua_function(tolua_S,"match",tolua_String_godot_String_match00);
    tolua_function(tolua_S,"matchn",tolua_String_godot_String_matchn00);
    tolua_function(tolua_S,"md5_buffer",tolua_String_godot_String_md5_buffer00);
    tolua_function(tolua_S,"md5_text",tolua_String_godot_String_md5_text00);
    tolua_function(tolua_S,"ord_at",tolua_String_godot_String_ord_at00);
    tolua_function(tolua_S,"pad_decimals",tolua_String_godot_String_pad_decimals00);
    tolua_function(tolua_S,"pad_zeros",tolua_String_godot_String_pad_zeros00);
    tolua_function(tolua_S,"percent_decode",tolua_String_godot_String_percent_decode00);
    tolua_function(tolua_S,"percent_encode",tolua_String_godot_String_percent_encode00);
    tolua_function(tolua_S,"plus_file",tolua_String_godot_String_plus_file00);
    tolua_function(tolua_S,"replace",tolua_String_godot_String_replace00);
    tolua_function(tolua_S,"replacen",tolua_String_godot_String_replacen00);
    tolua_function(tolua_S,"rfind",tolua_String_godot_String_rfind00);
    tolua_function(tolua_S,"rfindn",tolua_String_godot_String_rfindn00);
    tolua_function(tolua_S,"right",tolua_String_godot_String_right00);
    tolua_function(tolua_S,"sha256_buffer",tolua_String_godot_String_sha256_buffer00);
    tolua_function(tolua_S,"sha256_text",tolua_String_godot_String_sha256_text00);
    tolua_function(tolua_S,"similarity",tolua_String_godot_String_similarity00);
    tolua_function(tolua_S,"split",tolua_String_godot_String_split00);
    tolua_function(tolua_S,"split_floats",tolua_String_godot_String_split_floats00);
    tolua_function(tolua_S,"strip_edges",tolua_String_godot_String_strip_edges00);
    tolua_function(tolua_S,"substr",tolua_String_godot_String_substr00);
    tolua_function(tolua_S,"to_float",tolua_String_godot_String_to_float00);
    tolua_function(tolua_S,"to_int",tolua_String_godot_String_to_int00);
    tolua_function(tolua_S,"to_lower",tolua_String_godot_String_to_lower00);
    tolua_function(tolua_S,"to_upper",tolua_String_godot_String_to_upper00);
    tolua_function(tolua_S,"xml_escape",tolua_String_godot_String_xml_escape00);
    tolua_function(tolua_S,"xml_unescape",tolua_String_godot_String_xml_unescape00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CharString","godot::CharString","",tolua_collect_godot__CharString);
   #else
   tolua_cclass(tolua_S,"CharString","godot::CharString","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CharString");
    tolua_function(tolua_S,"delete",tolua_String_godot_CharString_delete00);
    tolua_function(tolua_S,"length",tolua_String_godot_CharString_length00);
    tolua_function(tolua_S,"get_data",tolua_String_godot_CharString_get_data00);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,".add",tolua_String_godot__add00);
   tolua_function(tolua_S,".add",tolua_String_godot__add01);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_String (lua_State* tolua_S) {
 return tolua_String_open(tolua_S);
};
#endif

