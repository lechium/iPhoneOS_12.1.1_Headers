/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSURL * endpoint; 
@property (nonatomic,copy) NSData * rawRequest; 
@property (assign,nonatomic) long long timeoutInSeconds; 
+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)rawRequest;
-(void)setRawRequest:(NSData *)arg1 ;
-(long long)timeoutInSeconds;
-(void)setTimeoutInSeconds:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setEndpoint:(NSURL *)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSURL *)endpoint;
@end

