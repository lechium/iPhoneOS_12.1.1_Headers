/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSData, NSString;

@interface SARefreshRequest : SAStartRequest

@property (nonatomic,copy) NSData * nlResultState; 
@property (nonatomic,copy) NSData * serializedIntent; 
@property (nonatomic,copy) NSString * source; 
+(id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)refreshRequest;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)nlResultState;
-(void)setNlResultState:(NSData *)arg1 ;
-(NSData *)serializedIntent;
-(void)setSerializedIntent:(NSData *)arg1 ;
-(id)groupIdentifier;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
@end

