/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSString;

@interface FAInviteFamilyMemberRequest : FAFamilyRequest {

	NSString* _inviteeEmail;
	NSString* _inviteeCompositeName;
	NSString* _inviteeShortName;

}

@property (nonatomic,copy) NSString * inviteeEmail;                      //@synthesize inviteeEmail=_inviteeEmail - In the implementation block
@property (nonatomic,copy) NSString * inviteeCompositeName;              //@synthesize inviteeCompositeName=_inviteeCompositeName - In the implementation block
@property (nonatomic,copy) NSString * inviteeShortName;                  //@synthesize inviteeShortName=_inviteeShortName - In the implementation block
-(id)urlRequest;
-(NSString *)inviteeEmail;
-(NSString *)inviteeShortName;
-(NSString *)inviteeCompositeName;
-(void)setInviteeEmail:(NSString *)arg1 ;
-(void)setInviteeCompositeName:(NSString *)arg1 ;
-(void)setInviteeShortName:(NSString *)arg1 ;
-(BOOL)isUserInitiated;
-(id)url;
@end

