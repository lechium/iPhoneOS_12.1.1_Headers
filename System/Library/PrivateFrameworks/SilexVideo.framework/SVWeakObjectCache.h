/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray;

@interface SVWeakObjectCache : NSObject <NSCopying> {

	NSMutableDictionary* _cache;

}

@property (nonatomic,readonly) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSArray * allObjects; 
-(void)removeObjectForIdentifier:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSArray *)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)cache;
@end
