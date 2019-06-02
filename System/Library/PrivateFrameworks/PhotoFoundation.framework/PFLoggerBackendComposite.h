/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSArray;

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter {

	BOOL _allBackendsAllowConcurrentAccess;
	NSArray* _backends;

}

@property (retain) NSArray * backends;                                 //@synthesize backends=_backends - In the implementation block
@property (assign) BOOL allBackendsAllowConcurrentAccess;              //@synthesize allBackendsAllowConcurrentAccess=_allBackendsAllowConcurrentAccess - In the implementation block
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)backends;
-(BOOL)allowsConcurrentAccess;
-(id)initWithBackends:(id)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(void)setAllBackendsAllowConcurrentAccess:(BOOL)arg1 ;
-(BOOL)allBackendsAllowConcurrentAccess;
-(void)setBackends:(NSArray *)arg1 ;
@end

