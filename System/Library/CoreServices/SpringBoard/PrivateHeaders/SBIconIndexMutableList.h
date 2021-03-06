//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "SBIconIndexNodeObserver.h"

@class NSMapTable, NSMutableArray, NSString;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration>
{
    NSMutableArray *_nodes;	// 8 = 0x8
    NSMapTable *_index;	// 16 = 0x10
    id <SBIconIndexMutableListObserver> _observer;	// 24 = 0x18
}

@property(nonatomic) __weak id <SBIconIndexMutableListObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;	// IMP=0x000000010038b1cc
- (id)indexDescriptionWithPrefix:(id)arg1;	// IMP=0x000000010038a598
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010038a580
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;	// IMP=0x000000010038a180
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;	// IMP=0x0000000100389ed4
- (void)sortUsingSelector:(SEL)arg1;	// IMP=0x0000000100389ebc
- (void)enumerateNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100389dfc
- (void)removeAllNodes;	// IMP=0x0000000100389b60
- (void)removeNodesAtIndexes:(id)arg1;	// IMP=0x000000010038998c
- (void)removeNodeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100389938
- (void)removeNode:(id)arg1;	// IMP=0x0000000100389880
- (void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2;	// IMP=0x0000000100389718
- (void)addNode:(id)arg1;	// IMP=0x00000001003896b8
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001003895ec
- (id)nodeAtIndex:(unsigned long long)arg1;	// IMP=0x00000001003895d4
- (_Bool)containsNode:(id)arg1;	// IMP=0x0000000100389578
- (unsigned long long)indexOfNode:(id)arg1;	// IMP=0x0000000100389560
- (unsigned long long)count;	// IMP=0x0000000100389548
- (id)nodes;	// IMP=0x0000000100389520
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;	// IMP=0x000000010038937c
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;	// IMP=0x00000001003890d0
- (id)containedNodeIdentifiers;	// IMP=0x0000000100388f74
- (_Bool)containsNodeIdentifier:(id)arg1;	// IMP=0x0000000100388f18
- (void)dealloc;	// IMP=0x0000000100388dd8
- (id)init;	// IMP=0x0000000100388d24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

