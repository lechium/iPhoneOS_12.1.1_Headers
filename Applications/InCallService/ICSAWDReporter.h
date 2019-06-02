//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWDServerConnection, NSObject<OS_dispatch_queue>;

@interface ICSAWDReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWDServerConnection *_serverConnection;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010007721c
@property(retain, nonatomic) AWDServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;	// IMP=0x00000001000777b0
- (void)_reportMetricWithID:(unsigned int)arg1 metric:(id)arg2;	// IMP=0x00000001000775ac
- (void)_reportSOSWithDuration:(double)arg1 type:(int)arg2;	// IMP=0x0000000100077454
- (void)reportCanceledSOSCountdownToNotify:(double)arg1;	// IMP=0x0000000100077444
- (void)reportCanceledSOSCountdownToCall:(double)arg1;	// IMP=0x0000000100077434
- (void)reportBioLockout;	// IMP=0x00000001000773f0
- (id)init;	// IMP=0x000000010007729c

@end

