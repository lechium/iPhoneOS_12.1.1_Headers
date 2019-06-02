/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * useCaseId; 
+(id)supportedIntentResponse;
+(id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)useCaseId;
-(void)setUseCaseId:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

