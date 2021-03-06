/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASyncDeepSyncVerificationResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)deepSyncVerificationResult;
+(id)deepSyncVerificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)groupIdentifier;
-(void)setResult:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)result;
@end

