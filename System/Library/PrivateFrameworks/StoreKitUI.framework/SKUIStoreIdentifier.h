/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying> {

	NSNumber* _itemIdentifier;
	NSString* _podcastFeedURLIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedURLIdentifier;              //@synthesize podcastFeedURLIdentifier=_podcastFeedURLIdentifier - In the implementation block
-(NSNumber *)itemIdentifier;
-(id)initWithNumber:(id)arg1 ;
-(void)setPodcastFeedURLIdentifier:(NSString *)arg1 ;
-(id)initWithPodcastFeedURL:(id)arg1 ;
-(NSString *)podcastFeedURLIdentifier;
-(id)initWithLongLong:(long long)arg1 ;
-(id)numberValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(long long)longLongValue;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

