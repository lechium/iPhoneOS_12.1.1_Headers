/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKTimeLoggerLogPauseRecord : NSObject {

	double _time;
	NSString* _message;

}

@property (assign,nonatomic) double time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

