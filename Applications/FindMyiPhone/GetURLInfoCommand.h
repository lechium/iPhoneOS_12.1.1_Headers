//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPBaseCommand.h"

@class NSURL;

@interface GetURLInfoCommand : FMIPBaseCommand
{
    NSURL *_url;	// 24 = 0x18
}

@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x00000001000763c4
- (id)jsonBodyDictionary;	// IMP=0x0000000100076300
- (_Bool)ignoreErrors;	// IMP=0x00000001000762f8
- (id)path;	// IMP=0x000000010007629c

@end

