//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransitionRequest.h"

@class SBStarkScreenController;

@interface SBStarkWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    SBStarkScreenController *_screenController;	// 8 = 0x8
}

+ (id)requestWithScreenController:(id)arg1;	// IMP=0x00000001003992b0
@property(retain, nonatomic) SBStarkScreenController *screenController; // @synthesize screenController=_screenController;
- (void).cxx_destruct;	// IMP=0x000000010039953c
- (id)initWithScreenController:(id)arg1;	// IMP=0x0000000100399324
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;	// IMP=0x0000000100399314

@end
