/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAudioDSP.dylib/libAudioDSP.dylib-Structs.h>
@class NSMutableArray;

@interface CLMClickEventMonitor : NSObject {

	NSMutableArray* _events;
	shared_ptr<HIDEventMonitor>* _hidEventMonitor;

}

@property (retain) NSMutableArray * events;                                             //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) shared_ptr<HIDEventMonitor>* hidEventMonitor;              //@synthesize hidEventMonitor=_hidEventMonitor - In the implementation block
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
-(id)initWithHIDDispatchQueueQOSClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(void)setHidEventMonitor:(shared_ptr<HIDEventMonitor>*)arg1 ;
-(shared_ptr<HIDEventMonitor>*)hidEventMonitor;
-(void)newClickEvent:(id)arg1 ;
-(id)eventsForMovieStartingAtMachAbsoluteTime:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 ;
-(id)init;
@end

