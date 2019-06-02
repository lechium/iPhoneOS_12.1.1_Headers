/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSNumber;

@interface CRKSetCoursePermissionRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _feature;
	NSNumber* _permission;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,retain) NSString * feature;                                        //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSNumber * permission;                                     //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSNumber *)permission;
-(void)setPermission:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
