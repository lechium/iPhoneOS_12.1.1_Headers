//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "UICoordinateSpace.h"

@class NSString;

@interface _SBSceneLayoutCoordinateSpace : NSObject <UICoordinateSpace, BSDescriptionProviding>
{
    struct CGRect _referenceBounds;	// 8 = 0x8
    long long _orientation;	// 40 = 0x28
}

+ (id)coordinateSpaceForInterfaceOrientation:(long long)arg1 withReferenceBounds:(struct CGRect)arg2;	// IMP=0x000000010026e3c0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010026e7c0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010026e76c
- (id)succinctDescriptionBuilder;	// IMP=0x000000010026e750
- (id)succinctDescription;	// IMP=0x000000010026e6fc
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x000000010026e604
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x000000010026e528
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x000000010026e4d0
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x000000010026e434

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
