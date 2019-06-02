/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentMessageHandler.h>

@protocol SXWebContentMessageHandler;
@class NSString;

@interface SXWebContentWeakMessageHandler : NSObject <SXWebContentMessageHandler> {

	id<SXWebContentMessageHandler> _messageHandler;

}

@property (nonatomic,__weak,readonly) id<SXWebContentMessageHandler> messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handlerWithMessageHandler:(id)arg1 ;
-(id<SXWebContentMessageHandler>)messageHandler;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
@end

