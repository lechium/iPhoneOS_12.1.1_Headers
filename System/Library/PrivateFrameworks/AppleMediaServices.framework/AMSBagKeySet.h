/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying> {

	NSSet* _keys;

}

@property (nonatomic,readonly) NSSet * keys;                          //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3 ;
+(id)registeredBagKeySetForProfile:(id)arg1 profileVersion:(id)arg2 ;
+(id)bagKeySetCacheAccessQueue;
+(id)bagKeySetCache;
+(void)resetRegisteredBagKeySets;
-(BOOL)hasKey:(id)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)keys;
@end

