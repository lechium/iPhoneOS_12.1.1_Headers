/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPerson.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSString, NSURL;

@interface SAABAcePersonWrap : SAPerson <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)acePersonWrap;
+(id)acePersonWrapWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setGeneration:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)generation;
@end
