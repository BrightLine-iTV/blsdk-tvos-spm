//
//  UDKCoreEventDelegate.h
//  DemoApp
//
//  Created by Kenneth Orozco on 10/1/25.
//

#import <UIKit/UIKit.h>

#ifndef UDKCoreEventDelegate_h
#define UDKCoreEventDelegate_h

@protocol UDKCoreEventDelegate <NSObject>

@required

- (void)BLInitialized:(NSString*)libVersion;

@optional

- (void)BLInitFailed:(NSInteger)errorCode;
- (void)BLPausePlayback;
- (void)BLResumePlayback;
// Client Info Providers
- (NSDictionary*)GetDeviceInfo;
- (NSDictionary*)GetAppInfo;
- (double)GetPlayerCurrentTime;
// Overlay Callbacks
- (void)BLRequested;
- (void)BLLoaded;
- (void)BLOpened;
- (void)BLUnavailable:(NSInteger)errorCode;
- (void)BLRendered;
- (void)BLExpanded:(NSString*)feature;
- (void)BLCollapsed:(NSString*)feature;
- (void)BLClosed;
- (void)BLDestroyed;
- (void)BLRaiseEvent:(NSString*)deepLink;
- (void)BLSqueezeBackDetected:(NSString*)jsonData;

@end

#endif /* UDKCoreEventDelegate_h */
