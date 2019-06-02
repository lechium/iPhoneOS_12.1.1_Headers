/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNThumbnailImageDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(BOOL)setCNValue:(id)arg1 onABPerson:(void*)arg2 withDependentPropertiesContext:(id)arg3 error:(id*)arg4 ;
-(void*)ABValueForABPerson:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(_CFError*)arg3 ;
-(id)CNValueForContact:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(Class)valueClass;
-(id)init;
@end

