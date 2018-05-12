#define LOGI(...) _android_log_print(ANDROID_LOG_INFO,LOG_TAG,_VA_ARGS_)
JNIEXPORT void JNICALL
    Java_com_phuket_tour_studio_Mp3Encoder_encode(JNIEnv* env, jobject obj) {
        LOGI("encoder encode")
    }