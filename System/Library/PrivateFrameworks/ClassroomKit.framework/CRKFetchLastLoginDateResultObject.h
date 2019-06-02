/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject {

	NSDictionary* _lastLoginDatesByAppleID;

}

@property (nonatomic,copy) NSDictionary * lastLoginDatesByAppleID;              //@synthesize lastLoginDatesByAppleID=_lastLoginDatesByAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)lastLoginDatesByAppleID;
-(id)initWithDatesByAppleID:(id)arg1 ;
-(void)setLastLoginDatesByAppleID:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
