/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject {

	NSArray* _eventStatuses;

}

@property (nonatomic,copy) NSArray * eventStatuses;              //@synthesize eventStatuses=_eventStatuses - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)eventStatuses;
-(void)setEventStatuses:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
