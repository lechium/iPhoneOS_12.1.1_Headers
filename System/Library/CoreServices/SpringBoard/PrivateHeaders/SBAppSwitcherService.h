//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBAppSwitcherService : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_viewServiceClassName;	// 16 = 0x10
}

+ (id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2;	// IMP=0x000000010023cae0
@property(copy, nonatomic) NSString *viewServiceClassName; // @synthesize viewServiceClassName=_viewServiceClassName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010023cbb8

@end
