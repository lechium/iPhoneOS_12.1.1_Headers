/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SASupportCondition> condition; 
@property (nonatomic,copy) NSString * property; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constraintSupport;
+(id)constraintSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setProperty:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)property;
-(id<SASupportCondition>)condition;
-(void)setCondition:(id<SASupportCondition>)arg1 ;
@end

