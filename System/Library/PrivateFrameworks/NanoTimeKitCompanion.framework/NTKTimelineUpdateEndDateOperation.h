/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation {

	NSDate* _endDate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)_getEndDate;
-(void)_invokeHandler;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
@end

