//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUNavigationItem.h"

@interface ServiceBridgedNavigationItem : SUNavigationItem
{
    id <ServiceBridgedNavigationItemProxy> _proxyHandler;	// 8 = 0x8
}

+ (id)itemFromItem:(id)arg1;	// IMP=0x0000000100018c48
@property(nonatomic) __weak id <ServiceBridgedNavigationItemProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (void).cxx_destruct;	// IMP=0x0000000100018f60
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100018ebc
- (void)setTitle:(id)arg1;	// IMP=0x0000000100018e4c

@end

