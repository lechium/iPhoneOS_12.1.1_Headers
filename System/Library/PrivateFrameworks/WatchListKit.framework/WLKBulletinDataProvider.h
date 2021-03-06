/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol WLKBulletinDataProviderDelegate;
@class WLKBulletinStore, NSString;

@interface WLKBulletinDataProvider : NSObject <BBRemoteDataProvider> {

	id<WLKBulletinDataProviderDelegate> _delegate;
	WLKBulletinStore* _bulletinStore;

}

@property (assign,nonatomic,__weak) id<WLKBulletinDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WLKBulletinStore * bulletinStore;                                 //@synthesize bulletinStore=_bulletinStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIdentifier;
-(WLKBulletinStore *)bulletinStore;
-(void)setBulletinStore:(WLKBulletinStore *)arg1 ;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(void)setDelegate:(id<WLKBulletinDataProviderDelegate>)arg1 ;
-(id<WLKBulletinDataProviderDelegate>)delegate;
-(id)sortDescriptors;
@end

