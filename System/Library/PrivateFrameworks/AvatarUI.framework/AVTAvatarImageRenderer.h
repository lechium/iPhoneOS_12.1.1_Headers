/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTUILogger, OS_dispatch_queue;
@class AVTSnapshotBuilder, NSObject;

@interface AVTAvatarImageRenderer : NSObject {

	AVTSnapshotBuilder* _snapshotBuilder;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _snapshotBuilderQueue;

}

@property (nonatomic,readonly) AVTSnapshotBuilder * snapshotBuilder;                           //@synthesize snapshotBuilder=_snapshotBuilder - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotBuilderQueue;              //@synthesize snapshotBuilderQueue=_snapshotBuilderQueue - In the implementation block
-(id<AVTUILogger>)logger;
-(id)initWithSnapshotBuilder:(id)arg1 lockProvider:(/*^block*/id)arg2 logger:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)snapshotBuilderQueue;
-(id)nts_imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(AVTSnapshotBuilder *)snapshotBuilder;
-(id)imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
@end
