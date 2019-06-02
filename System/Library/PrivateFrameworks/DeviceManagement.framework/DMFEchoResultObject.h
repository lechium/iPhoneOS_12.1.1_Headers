/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject {

	NSString* _echo;
	NSString* _resultStatus;

}

@property (nonatomic,copy) NSString * echo;                      //@synthesize echo=_echo - In the implementation block
@property (nonatomic,copy) NSString * resultStatus;              //@synthesize resultStatus=_resultStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResultStatus:(NSString *)arg1 ;
-(NSString *)resultStatus;
-(NSString *)echo;
-(void)setEcho:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
