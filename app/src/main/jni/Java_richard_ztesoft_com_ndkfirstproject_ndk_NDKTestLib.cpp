//
// Created by richard on 16/7/20.
//
#include "richard_ztesoft_com_ndkfirstproject_ndk_NDKTestLib.h"

JNIEXPORT jstring JNICALL Java_richard_ztesoft_com_ndkfirstproject_ndk_NDKTestLib_hello
  (JNIEnv *env, jclass){

  return env->NewStringUTF("这里是来自c的:hello world!");

  }

