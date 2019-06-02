//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrowserController;

@interface BrowserWindowSourceInfo : NSObject
{
    BrowserController *_browserController;	// 8 = 0x8
    id <UICoordinateSpace> _coordinateSpace;	// 16 = 0x10
    struct CGRect _frame;	// 24 = 0x18
}

+ (id)sourceInfoWithBrowserController:(id)arg1 frame:(struct CGRect)arg2 coordinateSpace:(id)arg3;	// IMP=0x00000001000d82f8
+ (id)sourceInfoWithBrowserController:(id)arg1;	// IMP=0x00000001000d8280
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) BrowserController *browserController; // @synthesize browserController=_browserController;
- (void).cxx_destruct;	// IMP=0x00000001000d84e4
- (id)_initWithBrowserController:(id)arg1 frame:(struct CGRect)arg2 coordinateSpace:(id)arg3;	// IMP=0x00000001000d83a8

@end
