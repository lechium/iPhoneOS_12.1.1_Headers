//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContactViewController.h"

@class CHHandle, CHRecentCall;

@interface PHContactViewController : CNContactViewController
{
    CHRecentCall *_recentCall;	// 8 = 0x8
    CHHandle *_handle;	// 16 = 0x10
}

@property(retain, nonatomic) CHHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
- (void).cxx_destruct;	// IMP=0x000000010004f6bc
- (id)primaryPropertyKey;	// IMP=0x000000010004ef48

@end

