/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSData, NSString, NSNumber;

@interface SASVoiceSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSData * result; 
@property (nonatomic,copy) NSString * searchType; 
@property (nonatomic,copy) NSNumber * statusCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)voiceSearchResult;
+(id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)searchType;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setResult:(NSData *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(NSData *)result;
-(NSNumber *)statusCode;
@end

