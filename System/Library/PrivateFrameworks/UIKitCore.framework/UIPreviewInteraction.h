/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewInteractionImpl;
@class UIView;

@interface UIPreviewInteraction : NSObject {

	id<_UIPreviewInteractionImpl> _interactionImpl;

}

@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initClickBasedImplementationWithView:(id)arg1 ;
@end

