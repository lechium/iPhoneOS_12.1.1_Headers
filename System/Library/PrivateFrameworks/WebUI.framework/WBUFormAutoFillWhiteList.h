/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject {

	NSCache* _cache;

}
+(id)sharedAutoFillWhiteList;
-(BOOL)allowsURL:(id)arg1 ;
-(void)_whiteListSettingsChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
