/*************************************************************************
 * BRIGHTLINE CONFIDENTIAL
 * ___________________
 *
 *  Copyright 2015 Brightline Partners LLC
 *  All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Brightline Partners LLC and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Brightline Partners LLC and its
 * suppliers and are protected by all applicable intellectual property
 * laws, including trade secret and copyright laws.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Brightline Partners LLC.
 **************************************************************************/

#import <UIKit/UIKit.h>

#ifndef BLCoreEvents_h
#define BLCoreEvents_h


/*
 
 * protocol: BLCoreEventDelegate
 
 * description: represents the SDK Life Cycle for application/ad events

 */

@protocol BLCoreEventDelegate <NSObject>

@required


-(void)BLInitialize:(NSString*)libVersion;
-(void)BLInitializeFailed:(NSString*)libVersion : (NSError*)error;


@optional

//sends the view (overlay) that should be focused for server-side
-(void)BLPreferredFocusView:(UIView*)focusView;

-(void)BLOverlayDidClose;
-(void)BLOverlayDidOpen;
-(void)BLOverlayDidCloseFromMenuPress;

-(void)BLMicrositeWillOpen;
-(void)BLMicrositeDidClose;
-(void)BLMicrositeDidCloseFromMenuPress;
-(void)BLMicrositeDidOpen;

-(void)BLSelectorDidOpen;
-(void)BLSelectorDidCloseFromMenuPress;
-(void)BLSelectorCompleted;

-(void)BLManifestLoaded;
-(void)BLManfiestRequested;
-(void)BLManifestUnavailable;

-(void)BLAdRequested;
-(void)BLAdUnavailable DEPRECATED_MSG_ATTRIBUTE("Will eventually be removed in next versions. Use `blErrorOccured` instead.");
-(void)BLAdUnavailableWithMessage:(NSString*)errorString;
-(void)BLErrorOccured:(NSString*)errorCode message:(NSString*)message;

-(void)BLPlayerSpotFirstQuartile;
-(void)BLPlayerSpotMidPointQuartile;
-(void)BLPlayerSpotThirdQuartile;
-(void)BLPlayerSpotCompleteQuartile;
-(void)BLAdDestroyed;
-(void)BLAdAnalytics:(NSString*)analyticsOutput;
-(void)BLAdLoaded;
-(void)BLSqueezebackStarted;
-(void)BLSqueezebackEnded;

-(void)BLRaiseEvent:(NSString*)eventString;
-(void)BLMediaGestureTriggered:(BOOL)triggered;

@end


#endif /* BLCoreEvents_h */
