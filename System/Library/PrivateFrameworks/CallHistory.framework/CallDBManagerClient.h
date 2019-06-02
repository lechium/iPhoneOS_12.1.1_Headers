/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager {

	NSXPCConnection* _helperConnection;
	id _syncHelperReadyNotificationRef;

}

@property (retain) NSXPCConnection * helperConnection;              //@synthesize helperConnection=_helperConnection - In the implementation block
@property (retain) id syncHelperReadyNotificationRef;               //@synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef - In the implementation block
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(void)handlePermanentCreated;
-(NSXPCConnection *)helperConnection;
-(void)setHelperConnection:(NSXPCConnection *)arg1 ;
-(void)moveCallsFromTempDatabase;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)pokeSyncHelperToInitDB;
-(BOOL)willMoveCallsFromTempDatabase;
-(void)createHelperConnection;
-(BOOL)validatePermDatabase;
-(void)createPermanent;
-(void)createTemporary;
-(BOOL)validateTempDatabase;
-(id)syncHelperReadyNotificationRef;
-(void)setSyncHelperReadyNotificationRef:(id)arg1 ;
@end
