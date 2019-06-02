//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

@class NSArray;

@interface PHAudioRoutingAlertController : UIAlertController
{
    long long _callStyle;	// 8 = 0x8
    id <PHAudioRoutingAlertDataSource> _dataSource;	// 16 = 0x10
    id <PHAudioRoutingAlertDelegate> _delegate;	// 24 = 0x18
}

+ (id)alertControllerWithCallStyle:(long long)arg1 dataSource:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100056c4c
@property(nonatomic) __weak id <PHAudioRoutingAlertDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PHAudioRoutingAlertDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long callStyle; // @synthesize callStyle=_callStyle;
- (void).cxx_destruct;	// IMP=0x0000000100057c8c
- (id)muteActionTitle;	// IMP=0x0000000100057b50
- (_Bool)isMuted;	// IMP=0x0000000100057ad8
- (id)muteAlertAction;	// IMP=0x000000010005781c
- (id)hideActionTitle;	// IMP=0x00000001000577c0
- (id)hideAlertAction;	// IMP=0x00000001000575f4
- (id)routeAlertActionWithTitle:(id)arg1 route:(id)arg2;	// IMP=0x00000001000570ec
@property(readonly, copy, nonatomic) NSArray *alertActions;
- (void)reload;	// IMP=0x0000000100056d2c

@end

