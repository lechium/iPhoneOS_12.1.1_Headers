//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReadingListMetadataProvider.h"

@class LPMetadataProvider, NSString;

@interface ReadingListMetadataProvider : NSObject <ReadingListMetadataProvider>
{
    LPMetadataProvider *_lpMetadataProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100078be0
- (void)fetchMetadataForBookmark:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000784fc
- (id)init;	// IMP=0x000000010007845c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

