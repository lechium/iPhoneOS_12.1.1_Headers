/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface RENowPlayingRelevanceProvider : RERelevanceProvider {

	unsigned long long _state;
	NSString* _bundleIdentifier;
	NSString* _itemIdentifer;

}

@property (nonatomic,readonly) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifer;                 //@synthesize itemIdentifer=_itemIdentifer - In the implementation block
+(id)relevanceSimulatorID;
-(id)initWithState:(unsigned long long)arg1 ;
-(id)dictionaryEncoding;
-(id)initWithState:(unsigned long long)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(NSString *)itemIdentifer;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
@end

