/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, ASResolveRecipientsCertificatesItem, ASResolveRecipientsAvailabilityItem;

@interface ASResolveRecipientsSingleRecipientItem : ASItem {

	NSString* _emailAddress;
	ASResolveRecipientsCertificatesItem* _certificates;
	ASResolveRecipientsAvailabilityItem* _availability;

}

@property (nonatomic,retain) NSString * emailAddress;                                         //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) ASResolveRecipientsCertificatesItem * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) ASResolveRecipientsAvailabilityItem * availability;              //@synthesize availability=_availability - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(ASResolveRecipientsAvailabilityItem *)availability;
-(void)setAvailability:(ASResolveRecipientsAvailabilityItem *)arg1 ;
-(void)setCertificates:(ASResolveRecipientsCertificatesItem *)arg1 ;
-(ASResolveRecipientsCertificatesItem *)certificates;
-(id)description;
@end

