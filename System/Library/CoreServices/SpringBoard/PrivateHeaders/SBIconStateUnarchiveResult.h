//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconStateUnarchiveContext.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBIconModel;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext>
{
    SBIconModel *_iconSource;	// 8 = 0x8
    id <SBIconIndexNode> _node;	// 16 = 0x10
    NSMutableArray *_folderStack;	// 24 = 0x18
    long long _parseDepth;	// 32 = 0x20
    NSMutableSet *_nodeIdentifiersUnarchived;	// 40 = 0x28
    _Bool _corrupted;	// 48 = 0x30
    _Bool _dirty;	// 49 = 0x31
    NSDictionary *_metadata;	// 56 = 0x38
}

@property(retain, nonatomic, setter=_setMetadata:) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic, setter=_setNode:) id <SBIconIndexNode> node; // @synthesize node=_node;
@property(retain, nonatomic, setter=_setIconSource:) SBIconModel *_iconSource; // @synthesize _iconSource;
- (void).cxx_destruct;	// IMP=0x0000000100277680
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;	// IMP=0x0000000100277524
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;	// IMP=0x000000010027750c
- (void)_noteSignificantDeviation;	// IMP=0x00000001002774f8
- (void)_noteRepresentationIsCorrupted;	// IMP=0x00000001002774e4
- (long long)_currentParseDepth;	// IMP=0x00000001002774d4
- (void)_noteExitedNode;	// IMP=0x00000001002773e8
- (void)_noteEnteredNode;	// IMP=0x00000001002773d0
- (id)_popFolder;	// IMP=0x0000000100277338
- (id)_currentFolder;	// IMP=0x0000000100277320
- (void)_pushFolder:(id)arg1;	// IMP=0x0000000100277274
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
