//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSTransaction<SBUIAnimationControllerCoordinating>;

@interface _SBUIAnimationControllerCoordinatingChildRelationship : NSObject
{
    BSTransaction<SBUIAnimationControllerCoordinating> *_coordinatingChildTransaction;	// 8 = 0x8
    unsigned long long _schedulingPolicy;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long schedulingPolicy; // @synthesize schedulingPolicy=_schedulingPolicy;
@property(readonly, nonatomic) BSTransaction<SBUIAnimationControllerCoordinating> *coordinatingChildTransaction; // @synthesize coordinatingChildTransaction=_coordinatingChildTransaction;
- (void).cxx_destruct;	// IMP=0x000000010027f718
- (id)initWithCoordinatingChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;	// IMP=0x000000010027f5a4

@end
