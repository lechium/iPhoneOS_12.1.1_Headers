/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVMicrophone;

@interface IMAVMicrophoneController : NSObject {

	id _internal;
	NSMutableArray* _microphones;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain,readonly) NSArray * microphones; 
@property (nonatomic,retain) IMAVMicrophone * currentMicrophone; 
+(id)sharedInstance;
-(NSArray *)microphones;
-(void)setCurrentMicrophone:(IMAVMicrophone *)arg1 ;
-(void)_rebuildMicrophoneList;
-(void)_loadSavedMicrophone;
-(IMAVMicrophone *)currentMicrophone;
-(id)init;
-(void)dealloc;
@end

