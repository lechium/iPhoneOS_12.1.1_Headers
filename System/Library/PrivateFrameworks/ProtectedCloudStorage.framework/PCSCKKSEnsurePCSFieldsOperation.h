/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;

}

@property (retain) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithItemModifyContext:(id)arg1 ;
-(BOOL)haveCKKSPlaintextEntitlements;
-(int)updateKeychain:(id)arg1 withAttributes:(id)arg2 ;
-(void)setContext:(PCSCKKSItemModifyContext *)arg1 ;
-(PCSCKKSItemModifyContext *)context;
-(void)start;
@end

