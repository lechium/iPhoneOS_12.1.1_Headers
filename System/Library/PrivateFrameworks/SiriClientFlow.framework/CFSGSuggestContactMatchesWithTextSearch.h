/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/SAAceSerializable.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFSGSuggestContactMatchesWithTextSearch : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long limit; 
@property (nonatomic,copy) NSString * query; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)suggestContactMatchesWithTextSearch;
+(id)suggestContactMatchesWithTextSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setQuery:(NSString *)arg1 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(id)acePhoneNumbersFromSuggestedPhoneNumbers:(id)arg1 ;
-(id)aceEmailsFromSuggestedEmails:(id)arg1 ;
-(id)aceLocationsFromSuggestedLocations:(id)arg1 ;
-(id)suggestedContactFromSuggestedContactMatches:(id)arg1 withService:(id)arg2 withOrigin:(BOOL)arg3 ;
-(NSString *)query;
@end

