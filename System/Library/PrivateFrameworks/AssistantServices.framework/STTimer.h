/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STTimer : STSiriModelObject {

	long long _state;
	NSNumber* _value;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSNumber * value;               //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
@end

