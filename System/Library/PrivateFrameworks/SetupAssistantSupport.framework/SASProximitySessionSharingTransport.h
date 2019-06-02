/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximitySessionTransport.h>

@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport {

	CUMessageSession* _messageSession;
	CUMessageSession* _actionMessageSession;

}

@property (retain) CUMessageSession * messageSession;                    //@synthesize messageSession=_messageSession - In the implementation block
@property (retain) CUMessageSession * actionMessageSession;              //@synthesize actionMessageSession=_actionMessageSession - In the implementation block
-(id)initWithMessageSession:(id)arg1 ;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)setActionMessageSession:(CUMessageSession *)arg1 ;
-(CUMessageSession *)actionMessageSession;
-(CUMessageSession *)messageSession;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(void)invalidate;
-(void)activate;
@end

