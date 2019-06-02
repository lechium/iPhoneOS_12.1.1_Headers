/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMutableSet* _underlyingSet;
	NSMutableDictionary* _changesDictionary;

}

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)set;
+(id)setWithArray:(id)arg1 ;
+(id)setWithSet:(id)arg1 ;
-(id)_initWithEnumerable:(id)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateModificationsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_initWithUnderlyingSet:(id)arg1 changesDictionary:(id)arg2 ;
-(BOOL)isEqualToTrackedSet:(id)arg1 ;
-(void)enumerateModificationsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allObjects;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)anyObject;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectEnumerator;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
@end

