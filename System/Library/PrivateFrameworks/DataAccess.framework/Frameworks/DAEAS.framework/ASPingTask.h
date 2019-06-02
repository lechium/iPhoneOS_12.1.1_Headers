/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSSet;

@interface ASPingTask : ASTask {

	NSSet* _folders;
	NSSet* _oldFolders;
	int _seconds;
	int _oldSeconds;

}
-(double)timeoutInterval;
-(int)heartbeat;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(void)requestCancelTaskWithReason:(int)arg1 ;
-(BOOL)shouldHoldPowerAssertion;
-(id)initWithHeartbeat:(int)arg1 folders:(id)arg2 oldHeartbeat:(int)arg3 oldFolders:(id)arg4 ;
-(int)interfaceBinding;
-(BOOL)shouldHandleServerErrorRetryLater;
-(BOOL)shouldReportTimeInNetwork;
-(void)finishWithError:(id)arg1 ;
-(id)folders;
-(void)loadRequest:(id)arg1 ;
@end

