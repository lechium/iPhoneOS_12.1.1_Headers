/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject {

	FCThreadSafeMutableDictionary* _fontCache;

}

@property (nonatomic,retain) FCThreadSafeMutableDictionary * fontCache;              //@synthesize fontCache=_fontCache - In the implementation block
-(void)setFontCache:(FCThreadSafeMutableDictionary *)arg1 ;
-(FCThreadSafeMutableDictionary *)fontCache;
-(id)init;
-(id)fontWithName:(id)arg1 size:(double)arg2 ;
-(void)clearCache;
@end
