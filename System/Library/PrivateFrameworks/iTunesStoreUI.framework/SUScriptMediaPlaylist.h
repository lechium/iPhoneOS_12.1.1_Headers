/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptMediaItemCollection.h>

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic,readonly) MPMediaPlaylist * nativePlaylist; 
+(unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1 ;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(MPMediaPlaylist *)nativePlaylist;
-(id)_className;
-(id)valueForProperty:(id)arg1 ;
@end
