/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLKBulletinStoreDelegate;
@interface WLKBulletinStore : NSObject {

	id<WLKBulletinStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLKBulletinStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_path;
-(void)_writeData:(id)arg1 ;
-(void)addBulletin:(id)arg1 ;
-(id)bulletinEnumerator;
-(void)removeBulletinsWithCoalescingIDs:(id)arg1 ;
-(id)_readData;
-(void)_writePlist:(id)arg1 ;
-(id)_readPlist;
-(id)_readBulletins;
-(void)_writeBulletins:(id)arg1 ;
-(void)removeAllBulletins;
-(void)setDelegate:(id<WLKBulletinStoreDelegate>)arg1 ;
-(id<WLKBulletinStoreDelegate>)delegate;
@end

