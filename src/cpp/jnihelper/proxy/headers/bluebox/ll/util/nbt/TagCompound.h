// This file is generated automatically.
#pragma once
#include "jnihelper/proxy.h"
#include "jnihelper/proxy/headers/java/util/function/BiConsumer.h"
#include "jnihelper/proxy/headers/java/lang/Object.h"
#include "jnihelper/proxy/headers/java/util/Collection.h"
#include "jnihelper/proxy/headers/java/util/function/Function.h"
#include "jnihelper/proxy/headers/bluebox/ll/util/nbt/Tag.h"
#include "jnihelper/proxy/headers/java/util/HashMap.h"
#include "jnihelper/proxy/headers/java/util/function/BiFunction.h"
#include "jnihelper/proxy/headers/java/util/Set.h"
#include "jnihelper/proxy/headers/java/util/Map.h"
#include "jnihelper/proxy/headers/java/lang/String.h"
#include "mc/nbt/CompoundTag.h"

namespace jnihelper::proxy::bluebox::ll::util::nbt {

    class O_TagCompound: public ::jnihelper::JavaObject{
    public:
        O_TagCompound(::jnihelper::JavaClassSupplier cls, ::jobject jobj, ::jboolean isGlobal=false);
        //{_instance_}
        //{_tag_}getOrDefault(java.lang.Object,java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_getOrDefault(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _defaultValue);
        //{_tag_}getIdName()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_getIdName();
        //{_tag_}map[setter]:java.util.HashMap
        void f_map(::jnihelper::proxy::java::util::O_HashMap value);
        //{_tag_}putAll(java.util.Map)void
        void m_putAll(::jnihelper::proxy::java::util::O_Map _m);
        //{_tag_}entrySet()java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_entrySet();
        //{_tag_}merge(java.lang.Object,java.lang.Object,java.util.function.BiFunction)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_merge(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction);
        //{_tag_}remove(java.lang.Object)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_remove(::jnihelper::proxy::java::lang::O_Object _key);
        //{_tag_}replaceAll(java.util.function.BiFunction)void
        void m_replaceAll(::jnihelper::proxy::java::util::function::O_BiFunction _function);
        //{_tag_}isEmpty()boolean
        ::jboolean m_isEmpty();
        //{_tag_}computeIfPresent(java.lang.Object,java.util.function.BiFunction)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_computeIfPresent(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction);
        //{_tag_}get(java.lang.Object)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m1_get(::jnihelper::proxy::java::lang::O_Object _key);
        //{_tag_}put(java.lang.Object,java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_put(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value);
        //{_tag_}containsValue(java.lang.Object)boolean
        ::jboolean m_containsValue(::jnihelper::proxy::java::lang::O_Object _value);
        //{_tag_}map[getter]:java.util.HashMap
        ::jnihelper::proxy::java::util::O_HashMap f_map();
        //{_tag_}merge(java.lang.String,bluebox.ll.util.nbt.Tag,java.util.function.BiFunction)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_merge(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction);
        //{_tag_}keySet()java.util.Set
        ::jnihelper::proxy::java::util::O_Set m_keySet();
        //{_tag_}toBinary()[B
        ::jnihelper::ByteArray m_toBinary();
        //{_tag_}putIfAbsent(java.lang.Object,java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_putIfAbsent(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value);
        //{_tag_}computeIfAbsent(java.lang.String,java.util.function.Function)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_computeIfAbsent(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::util::function::O_Function _mappingFunction);
        //{_tag_}values()java.util.Collection
        ::jnihelper::proxy::java::util::O_Collection m_values();
        //{_tag_}remove(java.lang.Object,java.lang.Object)boolean
        ::jboolean m_remove(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value);
        //{_tag_}toString()java.lang.String
        ::jnihelper::proxy::java::lang::O_String m_toString();
        //{_tag_}containsKey(java.lang.Object)boolean
        ::jboolean m_containsKey(::jnihelper::proxy::java::lang::O_Object _key);
        //{_tag_}compute(java.lang.Object,java.util.function.BiFunction)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_compute(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction);
        //{_tag_}compute(java.lang.String,java.util.function.BiFunction)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_compute(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction);
        //{_tag_}putIfAbsent(java.lang.String,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_putIfAbsent(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value);
        //{_tag_}clear()void
        void m_clear();
        //{_tag_}size()int
        ::jint m_size();
        //{_tag_}replace(java.lang.String,bluebox.ll.util.nbt.Tag,bluebox.ll.util.nbt.Tag)boolean
        ::jboolean m_replace(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _oldValue, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _newValue);
        //{_tag_}remove(java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m1_remove(::jnihelper::proxy::java::lang::O_Object _key);
        //{_tag_}clone()java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_clone();
        //{_tag_}get(java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_get(::jnihelper::proxy::java::lang::O_Object _key);
        //{_tag_}forEach(java.util.function.BiConsumer)void
        void m_forEach(::jnihelper::proxy::java::util::function::O_BiConsumer _action);
        //{_tag_}replace(java.lang.Object,java.lang.Object,java.lang.Object)boolean
        ::jboolean m_replace(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _oldValue, ::jnihelper::proxy::java::lang::O_Object _newValue);
        //{_tag_}replace(java.lang.Object,java.lang.Object)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_replace(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::lang::O_Object _value);
        //{_tag_}put(java.lang.String,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_put(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value);
        //{_tag_}computeIfAbsent(java.lang.Object,java.util.function.Function)java.lang.Object
        ::jnihelper::proxy::java::lang::O_Object m_computeIfAbsent(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::java::util::function::O_Function _mappingFunction);
        //{_tag_}computeIfPresent(java.lang.String,java.util.function.BiFunction)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_computeIfPresent(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::java::util::function::O_BiFunction _remappingFunction);
        //{_tag_}getId()int
        ::jint m_getId();
        //{_tag_}getOrDefault(java.lang.Object,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_getOrDefault(::jnihelper::proxy::java::lang::O_Object _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _defaultValue);
        //{_tag_}replace(java.lang.String,bluebox.ll.util.nbt.Tag)bluebox.ll.util.nbt.Tag
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag m_replace(::jnihelper::proxy::java::lang::O_String _key, ::jnihelper::proxy::bluebox::ll::util::nbt::O_Tag _value);
    };

    void toNative(O_TagCompound obj,CompoundTag* tag);
    
    class C_TagCompound: public JavaClass<O_TagCompound>{
    public:
        C_TagCompound(::jnihelper::Env& env);
        O_TagCompound fromNative(CompoundTag* tag);
        //{_static_}
        //{_tag_}parse([B)bluebox.ll.util.nbt.TagCompound
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound m_parse(::jnihelper::ByteArray _bytes);
        //{_tag_}<init>()bluebox.ll.util.nbt.TagCompound
        ::jnihelper::proxy::bluebox::ll::util::nbt::O_TagCompound newObj();
    };
    
}