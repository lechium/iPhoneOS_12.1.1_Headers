/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext, CKKSControl, NSString;

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;
	CKKSControl* _CKKSControl;
	NSString* _view;

}

@property (readonly) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) CKKSControl * CKKSControl;                         //@synthesize CKKSControl=_CKKSControl - In the implementation block
@property (retain) NSString * view;                                   //@synthesize view=_view - In the implementation block
-(id)initWithItemModifyContext:(id)arg1 ;
-(void)checkTLKStatus;
-(void)setCKKSControl:(CKKSControl *)arg1 ;
-(CKKSControl *)CKKSControl;
-(BOOL)ensureControl;
-(void)syncView;
-(NSString *)view;
-(PCSCKKSItemModifyContext *)context;
-(void)setView:(NSString *)arg1 ;
-(void)start;
@end

