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

@class NSString, CFCNAutoCompleteFetchContext, NSArray;

@interface CFCNAutoCompleteFetchRequest : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CFCNAutoCompleteFetchContext * fetchContext; 
@property (nonatomic,copy) NSArray * fetchRequestOptions; 
@property (nonatomic,copy) NSString * priorityDomainForSorting; 
@property (nonatomic,copy) NSString * searchString; 
@property (nonatomic,copy) NSString * searchType; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)autoCompleteFetchRequest;
+(id)autoCompleteFetchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(CFCNAutoCompleteFetchContext *)fetchContext;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)searchType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)priorityDomainForSorting;
-(void)setPriorityDomainForSorting:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setFetchContext:(CFCNAutoCompleteFetchContext *)arg1 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(id)commandFailedWithError:(id)arg1 ;
-(NSArray *)fetchRequestOptions;
-(void)setFetchRequestOptions:(NSArray *)arg1 ;
-(id)errorWithReason:(id)arg1 code:(long long)arg2 ;
-(unsigned long long)autoCompleteSearchTypeWithError:(id*)arg1 ;
-(id)autoCompeleteFetchContext;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
@end

