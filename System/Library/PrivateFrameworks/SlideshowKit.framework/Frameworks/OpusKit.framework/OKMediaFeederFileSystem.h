/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaFeeder.h>

@class NSURL, NSArray;

@interface OKMediaFeederFileSystem : OKMediaFeeder {

	NSURL* _directoryURL;
	NSArray* _mediaURLs;

}

@property (retain) NSArray * mediaURLs;              //@synthesize mediaURLs=_mediaURLs - In the implementation block
+(id)supportedSettings;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithDirectoryURL:(id)arg1 ;
+(BOOL)isRemote;
-(id)initWithDirectoryURL:(id)arg1 ;
-(NSArray *)mediaURLs;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(void)setMediaURLs:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
@end

