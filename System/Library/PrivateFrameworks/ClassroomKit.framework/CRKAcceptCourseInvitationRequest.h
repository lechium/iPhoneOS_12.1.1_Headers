/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSDictionary;

@interface CRKAcceptCourseInvitationRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _pin;
	NSDictionary* _studentInformation;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pin;                                              //@synthesize pin=_pin - In the implementation block
@property (nonatomic,copy) NSDictionary * studentInformation;                           //@synthesize studentInformation=_studentInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPin:(NSString *)arg1 ;
-(NSString *)pin;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSDictionary *)studentInformation;
-(void)setStudentInformation:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

