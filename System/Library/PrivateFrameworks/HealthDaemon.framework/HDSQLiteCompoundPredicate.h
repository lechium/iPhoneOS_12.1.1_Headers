/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying> {

	BOOL _unary;
	BOOL _trueIfNoPredicates;
	NSString* _combinationOperation;
	NSArray* _predicates;

}

@property (nonatomic,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
+(id)predicateMatchingAllPredicates:(id)arg1 ;
+(id)predicateMatchingAnyPredicates:(id)arg1 ;
+(id)negatedPredicate:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithProperty:(id)arg1 equalToValues:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValues:(id)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(NSArray *)predicates;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
