//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SBViewSnapshotProvider : NSObject
{
    UIView *_view;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;	// IMP=0x00000001002891dc
- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100288ee8
- (void)snapshotWithImageBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100288ed0
- (id)snapshot;	// IMP=0x0000000100288d8c
- (id)initWithView:(id)arg1;	// IMP=0x0000000100288ce4

@end

