/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSCache;

@interface SearchUIContactStore : NSObject {

	CNContactStore* _contactStore;
	NSCache* _contactCache;

}

@property (retain) NSCache * contactCache;                     //@synthesize contactCache=_contactCache - In the implementation block
@property (retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)placeholderContact;
+(id)contactForPhoneNumber:(id)arg1 email:(id)arg2 ;
+(id)sharedStore;
-(id)contactForIdentifier:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)fetchContactForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContactCache:(NSCache *)arg1 ;
-(NSCache *)contactCache;
-(id)cachedContactsForIdentifiers:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)cachedContactForIdentifier:(id)arg1 ;
-(id)init;
@end

