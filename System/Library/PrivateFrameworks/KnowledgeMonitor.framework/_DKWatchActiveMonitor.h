/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSString;

@interface _DKWatchActiveMonitor : _DKMonitor <IDSServiceDelegatePrivate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> idsServiceQueue;
	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)_eventWithWatchActive:(BOOL)arg1 deviceID:(id)arg2 ;
-(void)synchronouslyReflectCurrentValue;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)checkDevices:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
@end

