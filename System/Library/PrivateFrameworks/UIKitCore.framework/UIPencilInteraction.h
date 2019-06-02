/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInteraction.h>

@protocol UIPencilInteractionDelegate;
@class UIView, NSString;

@interface UIPencilInteraction : NSObject <UIInteraction> {

	BOOL _enabled;
	id<UIPencilInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<UIPencilInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)preferredTapAction;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<UIPencilInteractionDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UIView *)view;
-(id<UIPencilInteractionDelegate>)delegate;
-(void)setView:(UIView *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)performDelegateDidTap;
@end

