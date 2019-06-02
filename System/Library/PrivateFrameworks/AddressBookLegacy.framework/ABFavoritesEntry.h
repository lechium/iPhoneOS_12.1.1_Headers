/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABFavoritesEntry : NSObject {

	int _abUid;
	int _abIdentifier;
	NSString* _value;
	int _property;
	int _type;
	unsigned _dirty : 1;
	NSString* _label;
	NSString* _name;
	NSString* _abDatabaseUUID;
	void* _addressBook;

}
+(void)_runLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(void)_unqueueLookup;
-(void)_queueLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)nonLocalizedLabel;
-(int)_abUid;
-(void)recheckAddressBook;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)_postEntryChanged;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(void*)ABPerson;
-(int)property;
-(void)dealloc;
-(int)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(id)value;
-(id)label;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)displayName;
@end

