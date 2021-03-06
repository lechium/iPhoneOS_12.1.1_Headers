/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@protocol NFContactlessUICCSessionDelegate;
@class NSString;

@interface NFContactlessUICCSession : NFSession <NFContactlessSessionCallbacks> {

	BOOL _fieldNotificationSent;
	id<NFContactlessUICCSessionDelegate> _delegate;

}

@property (assign) id<NFContactlessUICCSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didEndUnexpectedly;
-(void)didSelectApplet:(id)arg1 ;
-(void)setDelegate:(id<NFContactlessUICCSessionDelegate>)arg1 ;
-(id<NFContactlessUICCSessionDelegate>)delegate;
@end

