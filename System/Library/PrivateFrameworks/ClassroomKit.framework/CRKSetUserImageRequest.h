/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSData, DMFControlGroupIdentifier;

@interface CRKSetUserImageRequest : CATTaskRequest {

	NSString* _userIdentifier;
	NSData* _userImageData;
	DMFControlGroupIdentifier* _courseIdentifier;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSData * userImageData;                                      //@synthesize userImageData=_userImageData - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
+(Class)whitelistedClassForResultObject;
+(BOOL)supportsSecureCoding;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSData *)userImageData;
-(void)setUserImageData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
