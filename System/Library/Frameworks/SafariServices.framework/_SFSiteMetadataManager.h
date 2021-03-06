/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSSiteMetadataManager.h>

@class _SFFaviconProvider, _SFPasswordTouchIconCache, _SFTouchIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager {

	_SFFaviconProvider* _faviconProvider;
	_SFPasswordTouchIconCache* _passwordTouchIconCache;
	_SFTouchIconCache* _touchIconCache;

}

@property (nonatomic,readonly) _SFFaviconProvider * faviconProvider;                            //@synthesize faviconProvider=_faviconProvider - In the implementation block
@property (nonatomic,readonly) _SFPasswordTouchIconCache * passwordTouchIconCache;              //@synthesize passwordTouchIconCache=_passwordTouchIconCache - In the implementation block
@property (nonatomic,readonly) _SFTouchIconCache * touchIconCache;                              //@synthesize touchIconCache=_touchIconCache - In the implementation block
+(id)sharedSiteMetadataManager;
+(void)setSharedSiteMetadataManager:(id)arg1 ;
+(void)setSharedSiteMetadataManagerProvider:(id)arg1 ;
-(_SFTouchIconCache *)touchIconCache;
-(id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(BOOL)arg3 metadataType:(unsigned long long)arg4 ;
-(void)scheduleLowPriorityRequestForBookmarks:(id)arg1 ;
-(_SFFaviconProvider *)faviconProvider;
-(_SFPasswordTouchIconCache *)passwordTouchIconCache;
@end

