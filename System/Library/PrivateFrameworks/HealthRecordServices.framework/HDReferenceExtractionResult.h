/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSURL, NSNumber;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _completeResources;
	NSArray* _incompleteResources;
	NSArray* _unresolvableReferences;
	NSURL* _nextSearchResultURL;
	NSNumber* _rulesVersion;

}

@property (nonatomic,copy,readonly) NSArray * completeResources;                   //@synthesize completeResources=_completeResources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incompleteResources;                 //@synthesize incompleteResources=_incompleteResources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unresolvableReferences;              //@synthesize unresolvableReferences=_unresolvableReferences - In the implementation block
@property (nonatomic,copy,readonly) NSURL * nextSearchResultURL;                   //@synthesize nextSearchResultURL=_nextSearchResultURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rulesVersion;                       //@synthesize rulesVersion=_rulesVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4 rulesVersion:(id)arg5 ;
-(NSArray *)completeResources;
-(NSArray *)incompleteResources;
-(NSArray *)unresolvableReferences;
-(NSURL *)nextSearchResultURL;
-(NSNumber *)rulesVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

