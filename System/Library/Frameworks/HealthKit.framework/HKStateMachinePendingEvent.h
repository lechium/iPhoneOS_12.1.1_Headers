/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSError;

@interface HKStateMachinePendingEvent : NSObject {

	long long _event;
	NSDate* _date;
	NSError* _error;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSError * error;                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(NSDate *)date;
-(id)completion;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
