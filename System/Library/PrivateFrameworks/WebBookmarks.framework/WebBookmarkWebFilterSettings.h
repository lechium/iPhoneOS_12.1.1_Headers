/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject {

	WFUserSettings* _userSettings;

}

@property (nonatomic,readonly) WFUserSettings * userSettings; 
@property (getter=isWebFilterEnabled,nonatomic,readonly) BOOL webFilterEnabled; 
@property (getter=isWebFilterWhiteListOnlyModeEnabled,nonatomic,readonly) BOOL webFilterWhiteListOnlyModeEnabled; 
+(id)sharedWebFilterSettings;
-(void)reloadSettings;
-(BOOL)isWebFilterEnabled;
-(BOOL)isWebFilterWhiteListOnlyModeEnabled;
-(WFUserSettings *)userSettings;
-(id)init;
-(void)dealloc;
@end

