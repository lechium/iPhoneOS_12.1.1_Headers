/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class VideosExtrasPlaybackContext;

@interface VideosExtrasQueueFeeder : MPQueueFeeder {

	VideosExtrasPlaybackContext* _context;

}

@property (getter=isBackgroundContext,nonatomic,readonly) BOOL backgroundContext; 
-(id)playbackInfoAtIndex:(unsigned long long)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)playbackInfoForIdentifier:(id)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)itemClass;
-(long long)repeatType;
-(BOOL)hasValidItemAtIndex:(unsigned long long)arg1 ;
-(long long)itemTypeForIndex:(unsigned long long)arg1 ;
-(BOOL)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id*)arg3 ;
-(BOOL)isBackgroundContext;
-(BOOL)_shouldReloadForContext:(id)arg1 ;
-(unsigned long long)itemCount;
@end

