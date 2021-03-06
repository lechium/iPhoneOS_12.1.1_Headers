/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding> {

	NSArray* _containerIDs;
	NSArray* _applicationBundleIDs;
	unsigned long long _enabledPermissions;

}

@property (nonatomic,retain) NSArray * containerIDs;                             //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,retain) NSArray * applicationBundleIDs;                     //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long enabledPermissions;              //@synthesize enabledPermissions=_enabledPermissions - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)enabledPermissions;
-(NSArray *)containerIDs;
-(id)CKPropertiesDescription;
-(NSArray *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setEnabledPermissions:(unsigned long long)arg1 ;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

