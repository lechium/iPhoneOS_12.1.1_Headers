/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject

@property (nonatomic,copy) NSArray * supportedFeatures; 
+(id)checkForGuideUpdateContext;
+(id)checkForGuideUpdateContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setSupportedFeatures:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)supportedFeatures;
@end

