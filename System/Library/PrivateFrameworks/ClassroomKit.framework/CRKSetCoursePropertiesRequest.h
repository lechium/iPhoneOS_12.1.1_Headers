/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSArray;

@interface CRKSetCoursePropertiesRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _courseName;
	NSString* _courseDescription;
	NSArray* _anchorCertificates;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                       //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,copy) NSString * courseDescription;                                //@synthesize courseDescription=_courseDescription - In the implementation block
@property (nonatomic,copy) NSArray * anchorCertificates;                                //@synthesize anchorCertificates=_anchorCertificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAnchorCertificates:(NSArray *)arg1 ;
-(NSArray *)anchorCertificates;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)courseName;
-(void)setCourseName:(NSString *)arg1 ;
-(NSString *)courseDescription;
-(void)setCourseDescription:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

