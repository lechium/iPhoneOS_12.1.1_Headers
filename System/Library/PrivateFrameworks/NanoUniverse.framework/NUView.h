/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoUniverse/NanoUniverse-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKUIQuadViewDelegate.h>
#import <libobjc.A.dylib/CLKUIResourceProviderDelegate.h>

@protocol NUViewDelegate;
@class CLKDevice, CLKUIQuadView, CLKUIResourceProviderKey, NUResources, NUGLQuad, NSBundle, NUScene, NSString;

@interface NUView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {

	CLKDevice* _device;
	CLKUIQuadView* _quadView;
	CLKUIResourceProviderKey* _resourceProviderKey;
	NUResources* _resources;
	NUGLQuad* _quad;
	NSBundle* _bundle;
	id<NUViewDelegate> _delegate;

}

@property (nonatomic,retain) NUScene * scene; 
@property (assign,nonatomic,__weak) id<NUViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(void)setScene:(NUScene *)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(id)provideAtlasBacking:(id)arg1 ;
-(id)resourceProviderKey;
-(void)dealloc;
-(void)setDelegate:(id<NUViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<NUViewDelegate>)delegate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)stopAnimation;
-(void)startAnimation;
-(NUScene *)scene;
-(void)setAnimationFrameInterval:(int)arg1 ;
@end

