/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * expressions; 
+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)expressions;
-(void)setExpressions:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

