/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface EKParticipantToContactMatcher : NSObject {

	NSArray* _contacts;
	NSSet* _contactEmailAddresses;
	NSSet* _contactNameComponents;
	NSSet* _contactCompanyNames;

}

@property (nonatomic,retain) NSArray * contacts;                         //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSSet * contactEmailAddresses;              //@synthesize contactEmailAddresses=_contactEmailAddresses - In the implementation block
@property (nonatomic,retain) NSSet * contactNameComponents;              //@synthesize contactNameComponents=_contactNameComponents - In the implementation block
@property (nonatomic,retain) NSSet * contactCompanyNames;                //@synthesize contactCompanyNames=_contactCompanyNames - In the implementation block
+(id)_nameComponentsForContact:(id)arg1 reverse:(BOOL)arg2 ;
+(id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2 ;
+(id)_allParticipantsOnItem:(id)arg1 ;
-(id)matchingParticipantsFromItem:(id)arg1 ;
-(void)_cacheContactData;
-(void)setContactEmailAddresses:(NSSet *)arg1 ;
-(void)setContactNameComponents:(NSSet *)arg1 ;
-(void)setContactCompanyNames:(NSSet *)arg1 ;
-(BOOL)anyContactMatchesAnyParticipant:(id)arg1 ;
-(BOOL)anyContactMatchesParticipant:(id)arg1 ;
-(id)matchingParticipantsFromParticipants:(id)arg1 ;
-(NSSet *)contactEmailAddresses;
-(NSSet *)contactNameComponents;
-(NSSet *)contactCompanyNames;
-(BOOL)anyContactMatchesAnyParticipantFromItem:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id)initWithContacts:(id)arg1 ;
@end

