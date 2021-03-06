/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebPolicyDecisionListener.h>

@protocol WebPolicyDecisionListener;
@class WebFrame, WBSFormMetadata, NSString;

@interface _WBUPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {

	WebFrame* _frame;
	long long _navigationType;
	WBSFormMetadata* _formMetadata;
	id<WebPolicyDecisionListener> _originalListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)download;
-(id)initWithFrame:(id)arg1 navigationType:(long long)arg2 formMetadata:(id)arg3 originalListener:(id)arg4 ;
-(void)ignore;
-(void)use;
@end

