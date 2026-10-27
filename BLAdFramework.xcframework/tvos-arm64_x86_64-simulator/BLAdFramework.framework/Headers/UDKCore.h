//
//  UDKCore.h
//  DemoApp
//
//  Created by Kenneth Orozco on 9/1/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UDKCoreEventDelegate.h"

#if __has_include(<Metal/Metal.h>)
#import <Metal/Metal.h>
#endif
#if __has_include(<QuartzCore/CAMetalLayer.h>)
#import <QuartzCore/CAMetalLayer.h>
#endif

#define IMAGE_VIEW_TAG 100

#ifndef UDKCore_h
#define UDKCore_h

@interface UDKCore : NSObject

+ (id)sharedManager;

- (void)openAd:(NSString *)url withView:(UIView *)view;
- (void)closeAd;
- (void)onRenderFrame:(id)renderPassDescriptor;
- (void)processKey:(NSString *)key withPress:(BOOL)press;
- (void)SetLogVerbosity:(NSString *)type;
- (void)initFramework:(id)delegate;
- (void)initFrameworkWithMetalDevice:(id<MTLDevice>)device layer:(CAMetalLayer *)layer;
- (void)renderImGuiWithCommandBuffer:(id<MTLCommandBuffer>)commandBuffer encoder:(id<MTLRenderCommandEncoder>)encoder;

- (void)clearAd;

@property(nonatomic, strong) UIView *viewController;
@property id<UDKCoreEventDelegate> coreEventDelegate;

@end

#endif /* UDKCore_h */
