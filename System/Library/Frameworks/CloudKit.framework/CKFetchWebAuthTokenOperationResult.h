/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKFetchWebAuthTokenOperationResult : CKOperationResult <NSSecureCoding> {

	NSString* _webAuthToken;

}

@property (nonatomic,copy) NSString * webAuthToken;              //@synthesize webAuthToken=_webAuthToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

