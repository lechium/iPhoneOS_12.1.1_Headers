/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TUContactsDataProviderResult : NSObject {

	int _legacyAddressBookIdentifier;
	NSString* _localizedName;
	NSString* _companyName;
	NSString* _contactLabel;
	NSArray* _contacts;

}

@property (nonatomic,copy) NSArray * contacts;                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                       //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * companyName;                         //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                        //@synthesize contactLabel=_contactLabel - In the implementation block
@property (assign,nonatomic) int legacyAddressBookIdentifier;              //@synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier - In the implementation block
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setCompanyName:(NSString *)arg1 ;
-(int)legacyAddressBookIdentifier;
-(void)setLegacyAddressBookIdentifier:(int)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(NSString *)contactLabel;
-(void)setContactLabel:(NSString *)arg1 ;
-(id)description;
-(NSString *)localizedName;
@end

