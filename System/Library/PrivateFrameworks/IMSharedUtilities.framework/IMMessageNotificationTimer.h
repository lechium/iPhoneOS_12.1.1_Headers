/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject {

	NSDate* _date;
	NSNumber* _numberDingsLeft;

}

@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSNumber * numberDingsLeft;              //@synthesize numberDingsLeft=_numberDingsLeft - In the implementation block
@property (nonatomic,readonly) BOOL areDingsRemaining; 
-(id)initWithDate:(id)arg1 ;
-(BOOL)areDingsRemaining;
-(void)reduceNumberDingsLeft;
-(NSNumber *)numberDingsLeft;
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
