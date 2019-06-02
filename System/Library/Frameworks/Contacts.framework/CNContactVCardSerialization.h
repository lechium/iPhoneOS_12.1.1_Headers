/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNContactVCardSerialization : NSObject
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 environment:(id)arg4 ;
+(id)contactsWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)summaryOfLocationVCard:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 ;
+(void)contactsWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)contactsWithMECARDString:(id)arg1 error:(id*)arg2 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)dataWithContacts:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeys;
+(id)contactsWithData:(id)arg1 error:(id*)arg2 ;
+(id)summaryOfVCard:(id)arg1 error:(id*)arg2 ;
@end

