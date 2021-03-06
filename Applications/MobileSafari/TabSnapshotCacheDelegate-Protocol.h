//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, TabSnapshotCache;

@protocol TabSnapshotCacheDelegate <NSObject>
- (unsigned long long)capacityForTabSnapshotCache:(TabSnapshotCache *)arg1;
- (_Bool)tabSnapshotCacheShouldDeferNextSnapshotRequest:(TabSnapshotCache *)arg1;
- (_Bool)tabSnapshotCache:(TabSnapshotCache *)arg1 shouldRequestSavedSnapshotWithIdentifier:(NSUUID *)arg2;
- (void)tabSnapshotCacheDidFinishUpdating:(TabSnapshotCache *)arg1;
- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 requestSnapshotWithIdentifier:(NSUUID *)arg2 completion:(void (^)(UIImage *))arg3;
- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 didEvictSnapshotWithIdentifier:(NSUUID *)arg2;
- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 didCacheSnapshotWithIdentifier:(NSUUID *)arg2;
@end

