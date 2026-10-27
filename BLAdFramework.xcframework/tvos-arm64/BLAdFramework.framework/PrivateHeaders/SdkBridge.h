//
//  SdkBridge.h
//  DemoApp
//
//  Created by Kenneth Orozco on 7/1/25.
//

#ifndef SdkBridge_h
#define SdkBridge_h

#ifdef __cplusplus
extern "C" {
#endif

void openSDKAd(const char* url);
void onRenderFrame(void* renderPassDescriptor);
void processKey(const char* key, int press);
void closeSDKAd(void);
void stopSDKAudio(void);
void SetLogVerbosity();
void initFramework();
void initTvosFacadeWithMetal(void* device, void* layer);
void renderImGuiWithMetal(void* commandBuffer, void* renderEncoder);
#if defined(BCL_VIDEO_ENABLED) && defined(__cplusplus) && !defined(__OBJC__)
void SetVideoDecodeSurfaceFactory(brightline::video::RequestDecodeSurfaceFn factory);
#endif

#ifdef __cplusplus
}
#endif

#endif /* SdkBridge_h */
