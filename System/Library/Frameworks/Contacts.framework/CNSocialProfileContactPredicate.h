/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate {

	CNSocialProfile* _socialProfile;

}

@property (nonatomic,copy,readonly) CNSocialProfile * socialProfile;              //@synthesize socialProfile=_socialProfile - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSocialProfile:(id)arg1 ;
-(CNSocialProfile *)socialProfile;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

