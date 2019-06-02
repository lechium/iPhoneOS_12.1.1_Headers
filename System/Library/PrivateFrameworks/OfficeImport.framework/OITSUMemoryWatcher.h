/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUFlushingManager;

@interface OITSUMemoryWatcher : NSObject {

	OITSUFlushingManager* _flushingManager;
	BOOL _going;
	BOOL _stop;

}
-(id)initWithFlushingManager:(id)arg1 ;
-(void)beginObserving;
-(void)stopObserving;
-(void)_periodicallySimulateMemoryWarning:(id)arg1 ;
-(void)_simulateMemoryWarning:(id)arg1 ;
-(void)dealloc;
@end

