//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface IndexPathDeleteInsertPair : NSObject
{
    NSIndexPath *_deletedIndexPath;	// 8 = 0x8
    NSIndexPath *_insertedIndexPath;	// 16 = 0x10
}

@property(readonly, nonatomic) NSIndexPath *insertedIndexPath; // @synthesize insertedIndexPath=_insertedIndexPath;
@property(readonly, nonatomic) NSIndexPath *deletedIndexPath; // @synthesize deletedIndexPath=_deletedIndexPath;
- (void).cxx_destruct;	// IMP=0x000000010012a87c
- (id)initWithDeletedIndexPath:(id)arg1 insertedIndexPath:(id)arg2;	// IMP=0x000000010012a78c

@end

