/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest {

	NSArray* _alarmIdentifiers;

}

@property (nonatomic,copy) NSArray * alarmIdentifiers;              //@synthesize alarmIdentifiers=_alarmIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(void)setAlarmIdentifiers:(NSArray *)arg1 ;
-(NSArray *)alarmIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

