/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, DMFControlGroupIdentifier, NSData;

@interface CRKSetUserPropertiesRequest : CATTaskRequest {

	NSString* _userIdentifier;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	NSString* _userSource;
	NSData* _imageData;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                        //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                       //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * phoneticGivenName;                                //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFamilyName;                               //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy) NSString * userSource;                                       //@synthesize userSource=_userSource - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSData *)imageData;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)userSource;
-(void)setUserSource:(NSString *)arg1 ;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticGivenName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)familyName;
@end

