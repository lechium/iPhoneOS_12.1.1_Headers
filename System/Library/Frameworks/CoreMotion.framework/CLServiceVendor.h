/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class NSMutableDictionary, NSDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {

	NSMutableDictionary* _catalog;
	NSDictionary* _serviceReplacementMap;
	NSMutableSet* _unavailableServiceNames;
	int _missBehavior;
	NSMutableDictionary* _recordingFromTriggersByTo;
	NSMutableDictionary* _recordingToTriggersByFrom;
	shared_ptr<CMMsl::Writer>* _recordingWriter;

}
+(void)rereadConfiguration;
+(void)initialize;
+(id)sharedInstance;
-(id)proxyForService:(id)arg1 ;
-(BOOL)isServiceEnabled:(id)arg1 ;
-(id)getServiceWithName:(id)arg1 ;
-(void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2 ;
-(id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2 ;
-(void)retireServiceWithName:(id)arg1 ;
-(BOOL)isServiceRunning:(id)arg1 ;
-(BOOL)ensureServiceIsRunning:(id)arg1 ;
-(id)proxyForService:(id)arg1 forClient:(id)arg2 ;
-(id)getSiloForService:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

