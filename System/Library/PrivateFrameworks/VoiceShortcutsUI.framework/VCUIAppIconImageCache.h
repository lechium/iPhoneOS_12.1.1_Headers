/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface VCUIAppIconImageCache : NSObject {

	NSCache* _appIconImagesCache;

}

@property (nonatomic,retain) NSCache * appIconImagesCache;              //@synthesize appIconImagesCache=_appIconImagesCache - In the implementation block
+(id)sharedAppIconImageCache;
-(id)init;
-(NSCache *)appIconImagesCache;
-(void)setCachedAppIconImage:(id)arg1 forKey:(id)arg2 ;
-(id)cachedAppIconImageForKey:(id)arg1 ;
-(void)setAppIconImagesCache:(NSCache *)arg1 ;
@end
