/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSSet, NSObject;

@interface _ATXAppIconState : NSObject {

	unsigned char _latestHash[32];
	NSDictionary* _appLocation;
	NSSet* _dockedApps;
	NSSet* _folderApps;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedInstance;
-(id)allAppsOnSpringboard;
-(id)allDockedApps;
-(id)allFolderApps;
-(BOOL)appOnDockWithBundleId:(id)arg1 ;
-(BOOL)appInFolderWithBundleId:(id)arg1 ;
-(long long)springboardPageNumberForBundleId:(id)arg1 ;
-(long long)springboardPageLocationForBundleId:(id)arg1 ;
-(long long)folderPageNumberForBundleId:(id)arg1 ;
-(void)parseIconState:(id)arg1 ;
-(id)loadIconStateData;
-(id)init;
-(void)reload;
@end

