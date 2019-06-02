/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {

	NSString* _operationGroupID;
	NSString* _operationGroupName;

}

@property (nonatomic,readonly) NSString * operationGroupID;                //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupName;              //@synthesize operationGroupName=_operationGroupName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithOperationGroup:(id)arg1 ;
-(NSString *)operationGroupID;
-(NSString *)operationGroupName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

