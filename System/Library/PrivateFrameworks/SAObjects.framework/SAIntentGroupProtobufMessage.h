/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString;

@interface SAIntentGroupProtobufMessage : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * debugString; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)typeName;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

