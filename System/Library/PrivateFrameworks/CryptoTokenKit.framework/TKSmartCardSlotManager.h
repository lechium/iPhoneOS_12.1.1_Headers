/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSlotClientNotification.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSArray, NSObject;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _endpoints;
	NSArray* _slotNames;
	NSObject*<OS_dispatch_queue> _slotNamesQueue;

}

@property (readonly) NSArray * slotNames; 
+(id)defaultManager;
-(void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(/*^block*/id)arg4 ;
-(NSArray *)slotNames;
-(void)getSlotWithName:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)slotNamed:(id)arg1 ;
-(id)init;
@end
