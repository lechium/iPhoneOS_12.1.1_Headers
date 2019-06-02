/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextInteraction.h>
#import <UIKitCore/_UITextServicesResponderProxyDelegate.h>

@class _UITextServiceSession, _UITextServicesResponderProxy, UIResponder;

@interface UITextServicesInteraction : UITextInteraction <_UITextServicesResponderProxyDelegate> {

	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	_UITextServicesResponderProxy* _responderProxy;

}

@property (nonatomic,retain) _UITextServicesResponderProxy * responderProxy;              //@synthesize responderProxy=_responderProxy - In the implementation block
@property (nonatomic,readonly) UIResponder * responder; 
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIResponder *)responder;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)finishSetup;
-(void)_beginSessionWithType:(long long)arg1 sender:(id)arg2 ;
-(_UITextServicesResponderProxy *)responderProxy;
-(void)setResponderProxy:(_UITextServicesResponderProxy *)arg1 ;
-(void)_removeShareController;
-(void)_removeShortcutController;
-(void)_removeDefinitionController;
@end

