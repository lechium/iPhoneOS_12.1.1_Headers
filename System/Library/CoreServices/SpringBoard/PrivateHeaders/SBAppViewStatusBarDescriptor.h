//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBAppViewStatusBarDescriptor : NSObject
{
    _Bool _forceHidden;	// 8 = 0x8
    NSString *_breadcrumbTitle;	// 16 = 0x10
    NSString *_breadcrumbSecondaryTitle;	// 24 = 0x18
}

+ (id)statusBarDescriptorWithForceHidden:(_Bool)arg1;	// IMP=0x000000010030e7dc
@property(copy, nonatomic) NSString *breadcrumbSecondaryTitle; // @synthesize breadcrumbSecondaryTitle=_breadcrumbSecondaryTitle;
@property(copy, nonatomic) NSString *breadcrumbTitle; // @synthesize breadcrumbTitle=_breadcrumbTitle;
@property(nonatomic, getter=isForcedHidden) _Bool forceHidden; // @synthesize forceHidden=_forceHidden;
- (void).cxx_destruct;	// IMP=0x000000010030e93c
- (id)debugDescription;	// IMP=0x000000010030e820
- (id)initWithForceHidden:(_Bool)arg1;	// IMP=0x000000010030e7a4

@end

