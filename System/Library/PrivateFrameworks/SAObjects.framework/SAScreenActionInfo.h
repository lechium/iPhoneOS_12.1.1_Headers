/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSArray, NSURL;

@interface SAScreenActionInfo : SADomainObject

@property (nonatomic,copy) NSString * elementId; 
@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * semanticData; 
@property (nonatomic,copy) NSURL * semanticId; 
@property (nonatomic,copy) NSURL * type; 
@property (nonatomic,copy) NSString * value; 
+(id)infoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)info;
-(void)setExamples:(NSArray *)arg1 ;
-(NSArray *)examples;
-(id)encodedClassName;
-(NSString *)elementId;
-(void)setElementId:(NSString *)arg1 ;
-(NSString *)semanticData;
-(void)setSemanticData:(NSString *)arg1 ;
-(NSURL *)semanticId;
-(void)setSemanticId:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(NSURL *)type;
-(void)setType:(NSURL *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
