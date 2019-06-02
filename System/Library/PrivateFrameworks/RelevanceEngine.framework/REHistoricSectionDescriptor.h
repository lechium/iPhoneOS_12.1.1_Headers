/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REIndentedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, RESectionDescriptor, NSArray, NSString, NSSet;

@interface REHistoricSectionDescriptor : NSObject <REIndentedDescription, NSCopying> {

	NSOrderedSet* _rules;
	BOOL _invertsRanking;
	long long _maxElementCount;
	RESectionDescriptor* _parentDescriptor;

}

@property (nonatomic,retain) NSArray * orderedRules; 
@property (assign,nonatomic,__weak) RESectionDescriptor * parentDescriptor;              //@synthesize parentDescriptor=_parentDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) BOOL invertsRanking;                                        //@synthesize invertsRanking=_invertsRanking - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                                  //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSSet * rules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRules:(NSSet *)arg1 ;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(NSSet *)rules;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(NSArray *)orderedRules;
-(BOOL)invertsRanking;
-(void)setInvertsRanking:(BOOL)arg1 ;
-(RESectionDescriptor *)parentDescriptor;
-(void)setParentDescriptor:(RESectionDescriptor *)arg1 ;
-(void)setOrderedRules:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
