//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface IndexPathMove : NSObject
{
    NSIndexPath *_indexPathBeforeMove;	// 8 = 0x8
    NSIndexPath *_indexPathAfterMove;	// 16 = 0x10
}

@property(readonly, nonatomic) NSIndexPath *indexPathAfterMove; // @synthesize indexPathAfterMove=_indexPathAfterMove;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeMove; // @synthesize indexPathBeforeMove=_indexPathBeforeMove;
- (void).cxx_destruct;	// IMP=0x0000000100029390
- (id)initWithIndexPathBeforeMove:(id)arg1 indexPathAfterMove:(id)arg2;	// IMP=0x00000001000292a0

@end

