/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCaptureDataOutputDelegateOverride;
@class AVCaptureOutput, NSMutableArray;

@interface AVCDOSDataOutputStorage : NSObject {

	AVCaptureOutput*<AVCaptureDataOutputDelegateOverride> _dataOutput;
	NSMutableArray* _synchronizedDataQueue;
	NSMutableArray* _timestampAdjustmentsDataQueue;
	NSMutableArray* _mdoTimeStampHistoryQueue;

}

@property (nonatomic,readonly) AVCaptureOutput*<AVCaptureDataOutputDelegateOverride> dataOutput;              //@synthesize dataOutput=_dataOutput - In the implementation block
@property (nonatomic,readonly) NSMutableArray * synchronizedDataQueue;                                        //@synthesize synchronizedDataQueue=_synchronizedDataQueue - In the implementation block
@property (getter=isLive,nonatomic,readonly) BOOL live; 
@property (nonatomic,retain) NSMutableArray * timestampAdjustmentsDataQueue;                                  //@synthesize timestampAdjustmentsDataQueue=_timestampAdjustmentsDataQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * mdoTimeStampHistoryQueue;                                       //@synthesize mdoTimeStampHistoryQueue=_mdoTimeStampHistoryQueue - In the implementation block
-(BOOL)isLive;
-(id)initWithDataOutput:(id)arg1 ;
-(AVCaptureOutput*<AVCaptureDataOutputDelegateOverride>)dataOutput;
-(NSMutableArray *)synchronizedDataQueue;
-(NSMutableArray *)timestampAdjustmentsDataQueue;
-(void)setTimestampAdjustmentsDataQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mdoTimeStampHistoryQueue;
-(void)setMdoTimeStampHistoryQueue:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

