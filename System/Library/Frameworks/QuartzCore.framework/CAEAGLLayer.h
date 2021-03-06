/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/EAGLDrawable.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {

	CAEAGLNativeWindow* _win;

}

@property (readonly) EAGLNativeWindowObject* nativeWindow; 
@property (getter=isAsynchronous) BOOL asynchronous; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL lowLatency; 
@property (assign) double inputTime; 
@property (assign) double drawableTimeoutSeconds; 
@property (assign) BOOL presentsWithTransaction; 
@property (copy) NSDictionary * drawableProperties; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(EAGLNativeWindowObject*)nativeWindow;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(double)drawableTimeoutSeconds;
-(BOOL)isDrawableAvailableInternal;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(double)inputTime;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(BOOL)isAsynchronous;
-(unsigned long long)maximumDrawableCount;
-(BOOL)isDrawableAvailable;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(BOOL)presentsWithTransaction;
-(void)setDrawableProperties:(NSDictionary *)arg1 ;
-(void)discardContents;
-(void)setAsynchronous:(BOOL)arg1 ;
-(NSDictionary *)drawableProperties;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_display;
-(void)setInputTime:(double)arg1 ;
-(void)setLowLatency:(BOOL)arg1 ;
-(BOOL)lowLatency;
@end

